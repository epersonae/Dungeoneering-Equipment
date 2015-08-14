<?php
/**
	* @file
	* Imports Pathfinder magic items as equipment from CSV
*/

class MagicItemMigration extends DungeonMigration {
	public function __construct($arguments) {
    	parent::__construct($arguments);
    	
    	$this->description = t('Imports Pathfinder magic items from CSV.');
    	
    	$options = array(
	    	'header_rows' => '1',	
    	);
    	$this->source = new MigrateSourceCSV('/Applications/MAMP/htdocs/dungeon-source/magic_items_full.csv', array(),$options);
    	
    	$this->destination = new MigrateDestinationNode('equipment');
    	
    	$this->machineName,
			array(
				'Name' => array(
          			'type' => 'varchar',
          			'length' => 255,
                    'not null' => TRUE,
		  			'description' => t('Magic Item Name'),
		  			)
		  	),
		  	MigrateDestinationNode::getKeySchema()
		);

		//destination first, source second!
		$this->addFieldMapping('title', 'Name');
		$this->addFieldMapping('body', 'Description');
		$this->addFieldMapping('field_cost', 'PriceValue');
		$this->addFieldMapping('field_weight', 'WeightValue');
		$this->addFieldMapping('uid')->defaultValue('1'); //because I don't like migrated items belonging to Anon.
		$this->addFieldMapping('log')->defaultValue('Imported from CSV via migrate');
		$this->addFieldMapping('field_magical')->defaultValue('1'); //all items in this import are magic
		
		//these are all computed using prepareRow
		$this->addFieldMapping('field_category','Category');
		
		/*
							"field_category",
				"field_armor_type",
				"field_weapon_type",
		*/
		
		$this->addUnmigratedDestinations(
			array(
				"created",
				"changed",
				"status",
				"promote",
				"sticky",
				"revision",
				"language",
				"tnid",
				"translate",
				"revision_uid",
				"is_new",
				"body:summary",
				"body:format",
				"path",
				"comment",
				"totalcount",
				"daycount",
				"timestamp"
			)
		);
    }
    
    function prepareRow($row) {
	    //drush_print_r($row);
	    
	    if($row->Group=='Armor') {
		    $row->Category = 'Armor and Shields';
	    } elseif($row->Group=='Weapon' or $row->Group=='Ammunition') {
		    $row->Category = 'Weapons';
	    }
    }
}