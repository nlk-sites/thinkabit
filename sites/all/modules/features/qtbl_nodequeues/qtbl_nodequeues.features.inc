<?php
/**
 * @file
 * qtbl_nodequeues.features.inc
 */

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function qtbl_nodequeues_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: leaders
  $nodequeues['leaders'] = array(
    'name' => 'leaders',
    'title' => 'Leaders',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'leader',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
