<?php
/**
 * Standard styles loader
 *
 * @package    BardCanvas
 * @subpackage Customizable header
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 */
?>

<!-- BC Custom Header Logo -->

<style type="text/css">
    
    #bc_custom_header_logo {
        display: inline-block; width: 100%; text-align: right;
        min-height: 100px; line-height: 100px;
        background: transparent center center no-repeat;
        background-size: cover;
    }
    
    #bc_custom_header_logo .icon , #bc_custom_header_logo .legend {
        font-style: normal; font-weight: bold;
        display: inline-block; text-align: center; vertical-align: middle;
        line-height: normal; color: white;
        text-shadow: -1px -1px 1px #000
                   ,  1px -1px 1px #000
                   ,  1px  1px 1px #000
                   , -1px  1px 1px #000
                   ,  2px  2px 3px #000
                   ;
    }
    
    #bc_custom_header_logo .icon {
        float: left; padding-left: 10px; text-decoration: none; vertical-align: top;
        margin-top: 10px;
    }
    
    #bc_custom_header_logo .icon img { height: 80px; }
    
    #bc_custom_header_logo .icon .caption {
        display: inline-block; font-size: 40px; padding-top: 20px; vertical-align: top;
    }
    
    #bc_custom_header_logo .legend { font-size: 18px; line-height: 22px; padding-right: 10px; }
    
    #header { box-shadow: 1px 1px 5px 0 rgba(0, 0, 0, 0.25); }

    @media all and (max-width: 800px) {
        #bc_custom_header_logo { text-align: center; }
        #bc_custom_header_logo .icon { float: none; }
        #bc_custom_header_logo .legend { display: block; margin: 10px 0; padding-right: 0; }
    }
    
    /* Overrides */
    
    body[data-left-sidebar-visible="true"] #left_sidebar {
        margin-top: -100px;
    }
</style>
