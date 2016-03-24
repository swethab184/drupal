<?php
/**
 * @file
 * side_bar_pane.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function side_bar_pane_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'articles_on_the_website';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'node-recent' => array(
          'module' => 'node',
          'delta' => 'recent',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'system-powered-by' => array(
          'module' => 'system',
          'delta' => 'powered-by',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['articles_on_the_website'] = $context;

  return $export;
}
