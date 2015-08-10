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
  $view->name = 'blurbs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blurbs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'blurb-white';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blurb' => 'blurb',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['nid']['value']['value'] = '[0-4]{1}$';

  /* Display: Blurb Block 1 of 2 */
  $handler = $view->new_display('block', 'Blurb Block 1 of 2', 'block');
  $handler->display->display_options['display_description'] = 'Block 1 on pages with 2 blurbs';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blurb' => 'blurb',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['nid']['value']['value'] = '[0-4]{1}$';

  /* Display: Blurb Block 2 of 2 */
  $handler = $view->new_display('block', 'Blurb Block 2 of 2', 'block_1');
  $handler->display->display_options['display_description'] = 'Block 2 on pages with 2 blurbs';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blurb' => 'blurb',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['nid']['value']['value'] = '[5-9]{1}$';

  /* Display: Blurb Block 1 of 4 */
  $handler = $view->new_display('block', 'Blurb Block 1 of 4', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'blurb-blue';
  $handler->display->display_options['display_description'] = 'Block 1 on pages with 4 blurbs (blue)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blurb' => 'blurb',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['nid']['value']['value'] = '[0]{1}[0-9]{1}$|[1]{1}[0-9]{1}$|[2]{1}[0-5]{1}$';

  /* Display: Blurb Block 2 of 4 */
  $handler = $view->new_display('block', 'Blurb Block 2 of 4', 'block_3');
  $handler->display->display_options['display_description'] = 'Block 2 on pages with 4 blurbs (white)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blurb' => 'blurb',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['nid']['value']['value'] = '[2]{1}[6-9]{1}$|[3]{1}[0-9]{1}$|[4]{1}[0-9]{1}$';

  /* Display: Blurb Block 3 of 4 */
  $handler = $view->new_display('block', 'Blurb Block 3 of 4', 'block_4');
  $handler->display->display_options['display_description'] = 'Block 3 on pages with 4 blurbs (white)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blurb' => 'blurb',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['nid']['value']['value'] = '[5]{1}[0-9]{1}$|[6]{1}[0-9]{1}$|[7]{1}[0-5]{1}$';

  /* Display: Blurb Block 4 of 4 */
  $handler = $view->new_display('block', 'Blurb Block 4 of 4', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'blurb-blue';
  $handler->display->display_options['display_description'] = 'Block 4 on pages with 4 blurbs (blue)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blurb' => 'blurb',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['nid']['value']['value'] = '[7]{1}[6-9]{1}$|[8]{1}[0-9]{1}$|[9]{1}[0-9]{1}$';
  $export['blurbs'] = $view;

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
  /* Filter criterion: Instagram: Instagram post ID */
  $handler->display->display_options['filters']['drupagram_id']['id'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['table'] = 'drupagram';
  $handler->display->display_options['filters']['drupagram_id']['field'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['drupagram_id']['value']['value'] = '[2]{1}[6-9]{1}_|[3]{1}[0-9]{1}_|[4]{1}[0-9]{1}_';

  /* Display: Instagram Block 1 of 4 */
  $handler = $view->new_display('block', 'Instagram Block 1 of 4', 'block');
  $handler->display->display_options['display_description'] = 'Block 1 on pages with 4 images';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Instagram: Instagram post ID */
  $handler->display->display_options['filters']['drupagram_id']['id'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['table'] = 'drupagram';
  $handler->display->display_options['filters']['drupagram_id']['field'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['drupagram_id']['value']['value'] = '[0]{1}[0-9]{1}_|[1]{1}[0-9]{1}_|[2]{1}[0-5]{1}_';

  /* Display: Instagram Block 2 of 4 */
  $handler = $view->new_display('block', 'Instagram Block 2 of 4', 'block_1');
  $handler->display->display_options['display_description'] = 'Block 2 on pages with 4 images';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Instagram: Instagram post ID */
  $handler->display->display_options['filters']['drupagram_id']['id'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['table'] = 'drupagram';
  $handler->display->display_options['filters']['drupagram_id']['field'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['drupagram_id']['value']['value'] = '[2]{1}[6-9]{1}_|[3]{1}[0-9]{1}_|[4]{1}[0-9]{1}_';

  /* Display: Instagram Block 3 of 4 */
  $handler = $view->new_display('block', 'Instagram Block 3 of 4', 'block_2');
  $handler->display->display_options['display_description'] = 'Block 3 on pages with 4 images';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Instagram: Instagram post ID */
  $handler->display->display_options['filters']['drupagram_id']['id'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['table'] = 'drupagram';
  $handler->display->display_options['filters']['drupagram_id']['field'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['drupagram_id']['value']['value'] = '[5]{1}[0-9]{1}_|[6]{1}[0-9]{1}_|[7]{1}[0-5]{1}_';

  /* Display: Instagram Block 4 of 4 */
  $handler = $view->new_display('block', 'Instagram Block 4 of 4', 'block_3');
  $handler->display->display_options['display_description'] = 'Block 4 on pages with 4 images';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Instagram: Instagram post ID */
  $handler->display->display_options['filters']['drupagram_id']['id'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['table'] = 'drupagram';
  $handler->display->display_options['filters']['drupagram_id']['field'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['drupagram_id']['value']['value'] = '[7]{1}[6-9]{1}_|[8]{1}[0-9]{1}_|[9]{1}[0-9]{1}_';

  /* Display: Instagram Block 1 of 2 */
  $handler = $view->new_display('block', 'Instagram Block 1 of 2', 'block_4');
  $handler->display->display_options['display_description'] = 'Block 1 on pages with 2 images';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Instagram: Instagram post ID */
  $handler->display->display_options['filters']['drupagram_id']['id'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['table'] = 'drupagram';
  $handler->display->display_options['filters']['drupagram_id']['field'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['drupagram_id']['value']['value'] = '[0-4]{1}_';

  /* Display: Instagram Block 2 of 2 */
  $handler = $view->new_display('block', 'Instagram Block 2 of 2', 'block_5');
  $handler->display->display_options['display_description'] = 'Block 2 on pages with 2 images';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Instagram: Instagram post ID */
  $handler->display->display_options['filters']['drupagram_id']['id'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['table'] = 'drupagram';
  $handler->display->display_options['filters']['drupagram_id']['field'] = 'drupagram_id';
  $handler->display->display_options['filters']['drupagram_id']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['drupagram_id']['value']['value'] = '[5-9]{1}_';
  $export['instagram'] = $view;

  return $export;
}
