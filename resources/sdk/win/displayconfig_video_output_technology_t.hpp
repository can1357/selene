#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class displayconfig_video_output_technology_t : int32_t
    {                                                           
        hd15 =                   0x0,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        svideo =                 0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        composite_video =        0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        component_video =        0x3,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dvi =                    0x4,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hdmi =                   0x5,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lvds =                   0x6,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d_jpn =                  0x8,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdi =                    0x9,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        displayport_external =   0xa,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        displayport_embedded =   0xb,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        udi_external =           0xc,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        udi_embedded =           0xd,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdtvdongle =             0xe,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miracast =               0xf,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indirect_wired =         0x10,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indirect_virtual =       0x11,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        displayport_usb_tunnel = 0x12,                            // Windows 11
        force_uint32 =           0xff,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        other =                  0xff,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal =               0x80000000,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
