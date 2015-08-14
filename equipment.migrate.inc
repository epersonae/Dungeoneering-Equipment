<?php
//need a function to implement hook_migrate_api()
function dungeon_migrate_migrate_api() {
	return array(
		'api' => 2,
		'groups' => array(
			'equipment' => array(
				'title' => t('Equipment'),
			),
		), //end of the groups array
		'migrations' => array(
			'MagicItem' => array( 
				'class_name' => 'MagicItemMigration',
				'group_name' => 'equipment',
			), //end of the MagicItem migration
		), //end of the migrations array
	); //end of the main array
};