<?php
/**
 * @file
 * qtbl_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function qtbl_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function qtbl_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
