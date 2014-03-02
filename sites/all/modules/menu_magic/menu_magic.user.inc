<?php
function menu_magic_user_tab($arg1) {
  if (is_numeric($arg1) && ($account = user_load($arg1))) {
    return array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('%username is totally awesome.', array('%username' => $account->name)),
  );
  } else {
    return drupal_not_found();
  }
 
}