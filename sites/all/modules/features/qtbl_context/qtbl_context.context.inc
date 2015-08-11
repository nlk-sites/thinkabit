<?php
/**
 * @file
 * qtbl_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function qtbl_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'header',
          'weight' => '-9',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-8',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
    'responsive_menus_general' => array(
      'responsive_menus_style' => 'responsive_menus_simple',
      'responsive_menus_style_settings' => array(
        'responsive_menus_simple_absolute' => array(
          1 => 0,
        ),
        'responsive_menus_disable_mouse_events' => array(
          1 => 0,
        ),
        'responsive_menus_remove_attributes' => array(
          1 => '1',
        ),
        'responsive_menus_css_selectors' => '#block-system-main-menu',
        'responsive_menus_simple_text' => 'Menu',
        'responsive_menus_media_size' => '2000',
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'landing page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-home-first' => array(
          'module' => 'bean',
          'delta' => 'home-first',
          'region' => 'content_bottom',
          'weight' => '-23',
        ),
        'bean-home-second' => array(
          'module' => 'bean',
          'delta' => 'home-second',
          'region' => 'content_bottom',
          'weight' => '-22',
        ),
        'bean-home-third' => array(
          'module' => 'bean',
          'delta' => 'home-third',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'bean-home-fourth' => array(
          'module' => 'bean',
          'delta' => 'home-fourth',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing page');
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lab';
  $context->description = '';
  $context->tag = 'landing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'lab' => 'lab',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-lab-first' => array(
          'module' => 'bean',
          'delta' => 'lab-first',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'bean-lab-second' => array(
          'module' => 'bean',
          'delta' => 'lab-second',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'bean-lab-third' => array(
          'module' => 'bean',
          'delta' => 'lab-third',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing');
  $export['lab'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'leadership';
  $context->description = '';
  $context->tag = 'landing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'leadership' => 'leadership',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-leadership-first' => array(
          'module' => 'bean',
          'delta' => 'leadership-first',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'bean-leadership-second' => array(
          'module' => 'bean',
          'delta' => 'leadership-second',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing');
  $export['leadership'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projects';
  $context->description = '';
  $context->tag = 'landing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'projects' => 'projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-projects-block' => array(
          'module' => 'views',
          'delta' => 'projects-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing');
  $export['projects'] = $context;

  return $export;
}
