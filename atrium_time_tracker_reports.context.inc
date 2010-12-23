<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_time_tracker_reports_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reports_layout';
  $context->description = 'Layout switcher for the reports';
  $context->tag = 'time_tracker';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'time_tracker/atrium_reports' => 'time_tracker/atrium_reports',
        'time_tracker/reports' => 'time_tracker/reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'wide',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout switcher for the reports');
  t('time_tracker');

  $export['reports_layout'] = $context;
  return $export;
}
