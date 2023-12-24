<?php
/**
* Plugin Name: discussion
* Plugin URI: https://ringscejs.gleentech.com/
* Description: Discussion plugin
* Version: 0.1
* Author: Pedro Dias Vicente
* Author URI: https://ringscejs.gleentech.com/
**/

function modify_read_more_link() {
    return '<a class="more-link" href="' . get_permalink() . '">Click to Read!</a>';
}
add_filter( 'the_content_more_link', 'modify_read_more_link' );


?>