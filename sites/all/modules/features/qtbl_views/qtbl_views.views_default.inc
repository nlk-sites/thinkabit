<?php
/**
 * @file
 * qtbl_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function qtbl_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'instagram';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drupagram';
  $view->human_name = 'Instagram';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Instagram: Instagram image */
  $handler->display->display_options['fields']['images']['id'] = 'images';
  $handler->display->display_options['fields']['images']['table'] = 'drupagram';
  $handler->display->display_options['fields']['images']['field'] = 'images';
  $handler->display->display_options['fields']['images']['label'] = '';
  $handler->display->display_options['fields']['images']['element_class'] = 'instagram-[type]';
  $handler->display->display_options['fields']['images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['images']['source'] = 'low_resolution';
  $handler->display->display_options['fields']['images']['link_to_post'] = 1;
  /* Field: Instagram: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'drupagram';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['label'] = '';
  $handler->display->display_options['fields']['link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link']['element_label_colon'] = FALSE;
  /* Field: Instagram: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'drupagram';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'insta';
  $export['instagram'] = $view;

  return $export;
}
