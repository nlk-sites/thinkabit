<?php
/**
 * @file
 * qtbl_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function qtbl_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-qtbl_footer_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'qtbl_footer_info',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'thinkabit' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thinkabit',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-qtbl_header_social'] = array(
    'cache' => -1,
    'css_class' => 'header-social',
    'custom' => 0,
    'machine_name' => 'qtbl_header_social',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'thinkabit' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thinkabit',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
