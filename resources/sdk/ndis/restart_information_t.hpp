#pragma once
#include <sdkgen/support_library.hpp>
#include "restart_attributes_t.hpp"
#include "receive_scale_capabilities_t.hpp"
#include "restart_general_attributes_t.hpp"
#include "protocol_restart_parameters_t.hpp"

#include "magic/restart_information_t.start.hpp"
namespace ndis
{
    // [struct NDIS_RESTART_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct restart_information_t                                                         
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                               
        _m00 struct ndis::restart_attributes_t          attributes;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Attributes
        _m01 struct ndis::restart_general_attributes_t  general;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .General
        _m02 struct ndis::receive_scale_capabilities_t  rss_caps;                          //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .RssCaps
        _m03 struct ndis::protocol_restart_parameters_t protocol_parameters;               //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ProtocolParameters
        _m04 uint32_t                                   miniport_mac_options_to_preserve;  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .MiniportMacOptionsToPreserve
                                                                                         
        SDK_MAGIC_PROPERTIES( "NDIS_RESTART_INFORMATION.$", 0xe0, true, 0xdb9e6f359c868e36 );                                 
        SDK_FIXED_SIZE( restart_information_t, 0xe0 );                                   
    };                                                                                   
};
#include "magic/restart_information_t.end.hpp"
SDK_VERIFY( struct ndis::restart_information_t, 0xe0 );
