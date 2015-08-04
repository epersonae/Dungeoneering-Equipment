<?php
/**
 * @file
 * equipment.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function equipment_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-equipment-body'
  $field_instances['node-equipment-body'] = array(
    'bundle' => 'equipment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is it used for? What does it look like? Do not include stats here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-equipment-field_armor_type'
  $field_instances['node-equipment-field_armor_type'] = array(
    'bundle' => 'equipment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_armor_type',
    'label' => 'Armor Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-equipment-field_category'
  $field_instances['node-equipment-field_category'] = array(
    'bundle' => 'equipment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the type of item. This information is used to build tables of weapons, gear, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-equipment-field_cost'
  $field_instances['node-equipment-field_cost'] = array(
    'bundle' => 'equipment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Round up to the nearest gold piece.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cost',
    'label' => 'Cost',
    'required' => 0,
    'settings' => array(
      'max' => 500,
      'min' => 1,
      'prefix' => '',
      'suffix' => 'gp',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-equipment-field_weapon_type'
  $field_instances['node-equipment-field_weapon_type'] = array(
    'bundle' => 'equipment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_weapon_type',
    'label' => 'Weapon Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-equipment-field_weight'
  $field_instances['node-equipment-field_weight'] = array(
    'bundle' => 'equipment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Leave blank for items weighing less than one pound.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_weight',
    'label' => 'Weight',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 1,
      'prefix' => '',
      'suffix' => 'lb.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Armor Type');
  t('Category');
  t('Cost');
  t('Description');
  t('Leave blank for items weighing less than one pound.');
  t('Round up to the nearest gold piece.');
  t('Select the type of item. This information is used to build tables of weapons, gear, etc.');
  t('Weapon Type');
  t('Weight');
  t('What is it used for? What does it look like? Do not include stats here.');

  return $field_instances;
}
