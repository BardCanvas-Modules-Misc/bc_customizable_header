<?php
/**
 * Customizable header
 *
 * @package    BardCanvas
 * @subpackage Customizable header
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 *
 * @var config   $config
 * @var module   $this_module
 * @var template $template;
 */

use hng2_base\config;
use hng2_base\module;
use hng2_base\template;

$background = $settings->get("modules:bc_customizable_header.background_image");
if( empty($background) ) $background = "{$this_module->get_url()}/media/back.jpg";

$icon_image = $settings->get("modules:bc_customizable_header.icon_image");
if( empty($icon_image) ) $icon_image = "{$this_module->get_url()}/media/icon.png";

$icon_caption = $settings->get("modules:bc_customizable_header.icon_caption");
if( empty($icon_caption) ) $icon_caption = $settings->get("engine.website_name");

$site_legend = $settings->get("modules:bc_customizable_header.site_legend");
if( empty($site_legend) ) $site_legend = "&nbsp;";
?>

<div id="bc_custom_header_logo" style="background-image: url('<?= $background ?>');">
    <a class="icon" href="<?= $config->full_root_url ?>"><img
       src="<?= $icon_image ?>"><span class="caption"><?= $icon_caption ?></span></a>
    
    <i class="legend">
        <?= $site_legend ?>
    </i>
</div>
