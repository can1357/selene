#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum _tagINTERNETFEATURELIST]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class internetfeaturelist_t : int32_t   
    {                                            
        object_caching =                 0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        zone_elevation =                 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mime_handling =                  0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mime_sniffing =                  0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        window_restrictions =            0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        weboc_popupmanagement =          0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        behaviors =                      0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_mk_protocol =            0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        localmachine_lockdown =          0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        securityband =                   0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restrict_activexinstall =        0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        validate_navigate_url =          0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restrict_filedownload =          0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        addon_management =               0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol_lockdown =              0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        http_username_password_disable = 0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        safe_bindtoobject =              0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unc_savedfilecheck =             0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_url_dom_filepath_unencoded = 0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tabbed_browsing =                0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sslux =                          0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_navigation_sounds =      0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_legacy_compression =     0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_addr_and_status =          0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xmlhttp =                        0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_telnet_protocol =        0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        feeds =                          0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        block_input_prompts =            0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entry_count =                    0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
