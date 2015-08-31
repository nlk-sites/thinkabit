<?php
/**
 * @file
 * qtbl_content_types.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function qtbl_content_types_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'blog_date_format';
  $formatter->label = 'Blog Date Format';
  $formatter->description = '';
  $formatter->mode = 'formatter_preset';
  $formatter->field_types = 'datetime';
  $formatter->code = 'a:2:{s:9:"formatter";s:12:"date_default";s:8:"settings";a:5:{s:11:"format_type";s:14:"month_day_year";s:6:"fromto";s:5:"value";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}';
  $formatter->fapi = '';
  $export['blog_date_format'] = $formatter;

  return $export;
}
