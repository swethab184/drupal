<?php
/**
 * @file
 * newone.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function newone_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gallery content'.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
