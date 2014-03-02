<?php

function menu_magic_extra($arg1){
  $content = array();
  $content['raw_markup'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('the wildcard contains the string: '). $arg1 .'</p>',
  );
  
  return $content;
}