<?php
/**
 * @file
 * Definition of drupagram_type_handler_field_type.
 */

 /**
 * Field handler to provide simple renderer that turns a URL into a clickable link.
 */
class drupagram_type_views_handler_field_type extends views_handler_field {

  function render($values) {
    $type = $this->get_value($values);
    return $type;
  }

}