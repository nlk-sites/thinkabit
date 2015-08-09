<?php
/**
 * @file
 * qtbl_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function qtbl_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_info|node|landing|default';
  $field_group->group_name = 'group_header_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Header Info',
    'weight' => '9',
    'children' => array(
      0 => 'title_field',
      1 => 'field_pretitle',
      2 => 'field_subtitle',
      3 => 'field_cta',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header_info|node|landing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|landing|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '1',
    'children' => array(
      0 => 'field_background_image',
      1 => 'group_header_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'landing-header',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header|node|landing|default'] = $field_group;

  return $export;
}
