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
  $field_group->identifier = 'group_content|node|blog|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blog Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_blog_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Blog Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|blog|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|news|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_news_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'News Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|project|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_content_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Project Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|project|default'] = $field_group;

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
    'weight' => '0',
    'children' => array(
      0 => 'field_background_image',
      1 => 'field_cta',
      2 => 'field_pretitle',
      3 => 'field_subtitle',
      4 => 'title_field',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|blog|default';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '4',
    'children' => array(
      0 => 'field_date',
      1 => 'sharethis',
      2 => 'group_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sidebar field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar|node|blog|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|news|default';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '2',
    'children' => array(
      0 => 'field_date',
      1 => 'sharethis',
      2 => 'group_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sidebar field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar|node|news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|blog|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sidebar';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '6',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|blog|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sidebar';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|news|default'] = $field_group;

  return $export;
}
