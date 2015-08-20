<?php
/**
 * @file
 * qtbl_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function qtbl_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 260x220.
  $styles['260x220'] = array(
    'label' => '260x220',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 288x284.
  $styles['288x284'] = array(
    'label' => '288x284',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 288,
          'height' => 284,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 546x400.
  $styles['546x400'] = array(
    'label' => '546x400',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 546,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 642x642.
  $styles['642x642'] = array(
    'label' => '642x642',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 642,
          'height' => 642,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 820x600.
  $styles['820x600'] = array(
    'label' => '820x600',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 820,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
