<?php
/**
 * @file
 * qtbl_overrides.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function qtbl_overrides_views_default_views_alter(&$data) {
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['summary_options'] = array(
      'items_per_page' => 25,
    ); /* WAS: '' */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = 0; /* WAS: '' */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['fields'] = array(
      'field_blog_images' => array(
        'id' => 'field_blog_images',
        'table' => 'field_data_field_blog_images',
        'field' => 'field_blog_images',
        'label' => '',
        'element_type' => 0,
        'element_label_colon' => FALSE,
        'element_wrapper_type' => 0,
        'element_default_classes' => FALSE,
        'click_sort_column' => 'fid',
        'type' => 'flexslider',
        'settings' => array(
          'optionset' => 'default',
          'image_style' => '546x400',
          'caption' => 0,
        ),
        'delta_offset' => 0,
        'field_api_classes' => TRUE,
      ),
      'field_news_images' => array(
        'id' => 'field_news_images',
        'table' => 'field_data_field_news_images',
        'field' => 'field_news_images',
        'label' => '',
        'element_type' => 0,
        'element_label_colon' => FALSE,
        'element_wrapper_type' => 0,
        'element_default_classes' => FALSE,
        'click_sort_column' => 'fid',
        'type' => 'flexslider',
        'settings' => array(
          'optionset' => 'default',
          'image_style' => '546x400',
          'caption' => 0,
        ),
        'delta_offset' => 0,
        'field_api_classes' => TRUE,
      ),
      'field_content_image' => array(
        'id' => 'field_content_image',
        'table' => 'field_data_field_content_image',
        'field' => 'field_content_image',
        'label' => '',
        'element_type' => 0,
        'element_label_colon' => FALSE,
        'element_wrapper_type' => 0,
        'element_default_classes' => FALSE,
        'click_sort_column' => 'fid',
        'type' => 'flexslider',
        'settings' => array(
          'optionset' => 'default',
          'image_style' => '546x400',
          'caption' => 0,
        ),
        'delta_offset' => 0,
        'field_api_classes' => TRUE,
      ),
      'title' => array(
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'label' => '',
        'element_type' => 'h4',
        'element_label_colon' => FALSE,
      ),
      'field_date' => array(
        'id' => 'field_date',
        'table' => 'field_data_field_date',
        'field' => 'field_date',
        'label' => '',
        'element_type' => 0,
        'element_label_colon' => FALSE,
        'element_wrapper_type' => 0,
        'element_default_classes' => FALSE,
        'settings' => array(
          'format_type' => 'month_day_year',
          'fromto' => 'both',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
        ),
        'field_api_classes' => TRUE,
      ),
      'body' => array(
        'id' => 'body',
        'table' => 'field_data_body',
        'field' => 'body',
        'label' => '',
        'alter' => array(
          'max_length' => 250,
          'strip_tags' => TRUE,
          'trim' => TRUE,
        ),
        'element_type' => 'div',
        'element_class' => 'field--body',
        'element_label_colon' => FALSE,
        'element_wrapper_type' => 0,
        'element_default_classes' => FALSE,
        'field_api_classes' => TRUE,
      ),
      'view_node' => array(
        'id' => 'view_node',
        'table' => 'views_entity_node',
        'field' => 'view_node',
        'label' => '',
        'element_label_colon' => FALSE,
        'text' => 'Read More',
      ),
    ); /* WAS: '' */
    $data['taxonomy_term']->display['default']->display_options['row_options'] = array(
      'hide_empty' => TRUE,
    ); /* WAS: '' */
    $data['taxonomy_term']->display['default']->display_options['row_plugin'] = 'fields'; /* WAS: 'node' */
    $data['taxonomy_term']->display['default']->display_options['sorts']['field_date_value'] = array(
      'id' => 'field_date_value',
      'table' => 'field_data_field_date',
      'field' => 'field_date_value',
    ); /* WAS: '' */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['taxonomy_term']->display['default']->display_options['access']['perm']);
    unset($data['taxonomy_term']->display['default']->display_options['sorts']['created']);
    unset($data['taxonomy_term']->display['default']->display_options['sorts']['sticky']);
  }
}
