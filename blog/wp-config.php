<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://codex.wordpress.org/Editing_wp-config.php
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define('DB_NAME', 'kinganxpdvicente');

/** MySQL database username */
define('DB_USER', 'kinganxpdvicente');

/** MySQL database password */
define('DB_PASSWORD', 'Lo1ja2Pa3n');

/** MySQL hostname */
define('DB_HOST', 'kinganxpdvicente.mysql.db:3306');

/** Database Charset to use in creating database tables. */
define('DB_CHARSET', 'utf8');

/** The Database Collate type. Don't change this if in doubt. */
define('DB_COLLATE', '');

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define('AUTH_KEY',         'FiJOd4Hal+2DMQ8OEEE87QNbokZajEvMd3BUWTCDwCCXn/n/5KeBVzICgtY/');
define('SECURE_AUTH_KEY',  'tvIL8qQQ3ut/PB4JTygirxNOm7qQGq43AiFSRjV4pImY4Y7cNGcd18jyMe0S');
define('LOGGED_IN_KEY',    'EJawN/0HlZJcntZCICOK9tvq+Fw0r32ESbWhkCRvmm6RPCFPOJH51ZanXwvn');
define('NONCE_KEY',        'G5Hmjom+yO+f12k+tg/JZuLByZAzUW3v8GT3/o8fM/Md6T958tiOzwawumhU');
define('AUTH_SALT',        'KJUC0rFji9tGWm4ziTsGJWOajHfoIRXueTOy8J6LVRA1x01u3GfXHA5962vz');
define('SECURE_AUTH_SALT', 'TAF3vswWixRN3EKKPkxfXqAG5LF7Kouwf+6hPP8wL3ERvl7cu+nKz5ht9zGS');
define('LOGGED_IN_SALT',   'VfnBjgh9gVJ5sWCsrf4dwdzY2u3h/IblrXK8+tAVI5aj+fAzGYWOdkeSc07O');
define('NONCE_SALT',       'eSgyQZBma7uVwsd51H6y4bSiCCTCLiRz8tsuY6ABDfTOFkVuMelyheKugr7i');

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix  = 'wor8164_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the Codex.
 *
 * @link https://codex.wordpress.org/Debugging_in_WordPress
 */
define('WP_DEBUG', false);

/* That's all, stop editing! Happy blogging. */

/** Absolute path to the WordPress directory. */
if ( !defined('ABSPATH') )
	define('ABSPATH', dirname(__FILE__) . '/');

/* Fixes "Add media button not working", see http://www.carnfieldwebdesign.co.uk/blog/wordpress-fix-add-media-button-not-working/ */
define('CONCATENATE_SCRIPTS', false );

/** Sets up WordPress vars and included files. */
require_once(ABSPATH . 'wp-settings.php');
