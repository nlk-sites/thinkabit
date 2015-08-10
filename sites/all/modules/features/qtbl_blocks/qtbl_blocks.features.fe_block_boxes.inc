<?php
/**
 * @file
 * qtbl_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function qtbl_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer - Information';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'qtbl_footer_info';
  $fe_block_boxes->body = '©2015 Qualcomm Technologies, Inc. and/or its affiliated companies.';

  $export['qtbl_footer_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header - Social Media';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'qtbl_header_social';
  $fe_block_boxes->body = '<ul>
<li class="icon-twitter"><a href="https://twitter.com/Thinkabit_Lab" target="blank">Twitter</a></li>
<li class="icon-instagram"><a href="https://instagram.com/thinkabit_lab/" target="blank">Instagram</a></li>
</ul>';

  $export['qtbl_header_social'] = $fe_block_boxes;

  return $export;
}
