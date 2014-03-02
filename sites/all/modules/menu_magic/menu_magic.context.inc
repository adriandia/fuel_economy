<?php 
function menu_magic_node_context($node) {
    $text = strtoupper($node->body['und'][0]['value']);
    $output = array(
      '#type' => 'markup',
      '#markup' => $text,
    );
    return $output;
}