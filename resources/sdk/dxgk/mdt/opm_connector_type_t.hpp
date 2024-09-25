#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_CONNECTOR_TYPE]
    //  WDK 10
    //
    enum class opm_connector_type_t : int32_t                             
    {                                                                     
        copp_compatible_connector_type_internal =          -0x80000000,     // WDK 10
        connector_type_other =                             -0x1,            // WDK 10
        connector_type_hd15 =                              0x0,             // WDK 10
        connector_type_svideo =                            0x1,             // WDK 10
        connector_type_composite_video =                   0x2,             // WDK 10
        connector_type_component_video =                   0x3,             // WDK 10
        connector_type_dvi =                               0x4,             // WDK 10
        connector_type_hdmi =                              0x5,             // WDK 10
        connector_type_lvds =                              0x6,             // WDK 10
        connector_type_d_jpn =                             0x8,             // WDK 10
        connector_type_sdi =                               0x9,             // WDK 10
        connector_type_displayport_external =              0xa,             // WDK 10
        connector_type_displayport_embedded =              0xb,             // WDK 10
        connector_type_udi_external =                      0xc,             // WDK 10
        connector_type_udi_embedded =                      0xd,             // WDK 10
        connector_type_reserved =                          0xe,             // WDK 10
        connector_type_miracast =                          0xf,             // WDK 10
        connector_type_transport_agnostic_digital_mode_a = 0x10,            // WDK 10
        connector_type_transport_agnostic_digital_mode_b = 0x11,            // WDK 10
    };                                                                    
};
