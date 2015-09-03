<?php
/**
 * @file
 * equipment.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function equipment_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_armor|node|equipment|form';
  $field_group->group_name = 'group_armor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'equipment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_options';
  $field_group->data = array(
    'label' => 'Armor Options',
    'weight' => '1',
    'children' => array(
      0 => 'field_armor_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-armor field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_armor|node|equipment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|node|equipment|form';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'equipment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_options';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_category',
      2 => 'field_cost',
      3 => 'field_magical',
      4 => 'field_weight',
      5 => 'field_image',
      6 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basics field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_basics|node|equipment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equip|node|equipment|form';
  $field_group->group_name = 'group_equip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'equipment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Equipment',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-equip field-group-htabs',
      ),
    ),
  );
  $export['group_equip|node|equipment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|equipment|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'equipment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_armor',
      1 => 'group_basics',
      2 => 'group_weapons',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Tabs',
      'instance_settings' => array(
        'classes' => 'group-options field-group-htabs',
      ),
    ),
  );
  $export['group_options|node|equipment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_weapons|node|equipment|form';
  $field_group->group_name = 'group_weapons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'equipment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_options';
  $field_group->data = array(
    'label' => 'Weapon Options',
    'weight' => '2',
    'children' => array(
      0 => 'field_weapon_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-weapons field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_weapons|node|equipment|form'] = $field_group;

  return $export;
}
