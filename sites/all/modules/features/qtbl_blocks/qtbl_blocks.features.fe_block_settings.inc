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

  $export['disqus-disqus_combination_widget'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_combination_widget',
    'module' => 'disqus',
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

  $export['disqus-disqus_comments'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_comments',
    'module' => 'disqus',
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

  $export['disqus-disqus_popular_threads'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_popular_threads',
    'module' => 'disqus',
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

  $export['disqus-disqus_recent_comments'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_recent_comments',
    'module' => 'disqus',
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

  $export['disqus-disqus_top_commenters'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_top_commenters',
    'module' => 'disqus',
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

  $export['sharethis-sharethis_block'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sharethis_block',
    'module' => 'sharethis',
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
