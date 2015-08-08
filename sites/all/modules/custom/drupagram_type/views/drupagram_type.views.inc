<?php
/**
 * @file
 * Views definitions for drupagram_type module.
 */

/**
 * Implements hook_views_data().
 */
function drupagram_type_views_data() {
  $data = array();
  // Instagram type
  $data['drupagram']['type'] = array(
    'title' => t('Type'),
    'help' => t('The type of Instagram post.'),
    'field' => array(
      'handler' => 'drupagram_type_views_handler_field_type',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );
  
  return $data;
}