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
  $context->name = 'blog_detail';
  $context->description = '';
  $context->tag = 'detail page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-blog-header' => array(
          'module' => 'bean',
          'delta' => 'blog-header',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => array(
      0 => 'main-menu:node/4',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('detail page');
  $export['blog_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_page';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block' => array(
          'module' => 'views',
          'delta' => 'blog-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['blog_page'] = $context;

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
          'weight' => '-10',
        ),
        'bean-home-second' => array(
          'module' => 'bean',
          'delta' => 'home-second',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'views-instagram-block_4' => array(
          'module' => 'views',
          'delta' => 'instagram-block_4',
          'region' => 'content_bottom',
          'weight' => '-7',
        ),
        'views-blurbs-block' => array(
          'module' => 'views',
          'delta' => 'blurbs-block',
          'region' => 'content_bottom',
          'weight' => '-6',
        ),
        'views-instagram-block_5' => array(
          'module' => 'views',
          'delta' => 'instagram-block_5',
          'region' => 'content_bottom',
          'weight' => '-5',
        ),
        'views-blurbs-block_1' => array(
          'module' => 'views',
          'delta' => 'blurbs-block_1',
          'region' => 'content_bottom',
          'weight' => '-4',
        ),
        'views-tweets-block_1' => array(
          'module' => 'views',
          'delta' => 'tweets-block_1',
          'region' => 'content_bottom',
          'weight' => '-3',
        ),
        'bean-home-third' => array(
          'module' => 'bean',
          'delta' => 'home-third',
          'region' => 'content_bottom',
          'weight' => '-2',
        ),
        'bean-home-fourth' => array(
          'module' => 'bean',
          'delta' => 'home-fourth',
          'region' => 'content_bottom',
          'weight' => '-1',
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
          'weight' => '-30',
        ),
        'views-instagram-block' => array(
          'module' => 'views',
          'delta' => 'instagram-block',
          'region' => 'content_bottom',
          'weight' => '-29',
        ),
        'views-blurbs-block_2' => array(
          'module' => 'views',
          'delta' => 'blurbs-block_2',
          'region' => 'content_bottom',
          'weight' => '-28',
        ),
        'bean-lab-second' => array(
          'module' => 'bean',
          'delta' => 'lab-second',
          'region' => 'content_bottom',
          'weight' => '-27',
        ),
        'views-blurbs-block_3' => array(
          'module' => 'views',
          'delta' => 'blurbs-block_3',
          'region' => 'content_bottom',
          'weight' => '-26',
        ),
        'views-instagram-block_1' => array(
          'module' => 'views',
          'delta' => 'instagram-block_1',
          'region' => 'content_bottom',
          'weight' => '-25',
        ),
        'bean-lab-slideshow' => array(
          'module' => 'bean',
          'delta' => 'lab-slideshow',
          'region' => 'content_bottom',
          'weight' => '-24',
        ),
        'views-blurbs-block_4' => array(
          'module' => 'views',
          'delta' => 'blurbs-block_4',
          'region' => 'content_bottom',
          'weight' => '-23',
        ),
        'views-instagram-block_2' => array(
          'module' => 'views',
          'delta' => 'instagram-block_2',
          'region' => 'content_bottom',
          'weight' => '-22',
        ),
        'views-instagram-block_3' => array(
          'module' => 'views',
          'delta' => 'instagram-block_3',
          'region' => 'content_bottom',
          'weight' => '-21',
        ),
        'views-blurbs-block_5' => array(
          'module' => 'views',
          'delta' => 'blurbs-block_5',
          'region' => 'content_bottom',
          'weight' => '-20',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

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
        'views-leaders-block' => array(
          'module' => 'views',
          'delta' => 'leaders-block',
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
  $export['leadership'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_detail';
  $context->description = '';
  $context->tag = 'detail page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-news-header' => array(
          'module' => 'bean',
          'delta' => 'news-header',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => array(
      0 => 'main-menu:node/6',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('detail page');
  $export['news_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_page';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'bean-press-contact' => array(
          'module' => 'bean',
          'delta' => 'press-contact',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['news_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_detail';
  $context->description = '';
  $context->tag = 'detail page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-project-header' => array(
          'module' => 'bean',
          'delta' => 'project-header',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => array(
      0 => 'main-menu:node/3',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('detail page');
  $export['project_detail'] = $context;

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
