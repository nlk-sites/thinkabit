<?php
/**
 * @file
 * qtbl_bean.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function qtbl_bean_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-home-first'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home-first',
    'module' => 'bean',
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

  $export['bean-home-fourth'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home-fourth',
    'module' => 'bean',
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

  $export['bean-home-second'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home-second',
    'module' => 'bean',
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

  $export['bean-home-third'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home-third',
    'module' => 'bean',
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
