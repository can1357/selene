#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_ai_reqfi_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_AI_REQFI]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_ai_reqfi_t                          
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint16_t               capabilities;        //{ +0x0000    +0x0000    +0x0000    } | .Capabilities
        _m01 uint16_t               listen_interval;     //{ +0x0002    +0x0002    +0x0002    } | .ListenInterval
        _m02 sdk::array<uint8_t, 6> current_ap_address;  //{ +0x0004    +0x0004    +0x0004    } | .CurrentAPAddress
                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_AI_REQFI.$", 0xa, true, 0x18cd3f54899e0868 );                   
        SDK_FIXED_SIZE( _802_11_ai_reqfi_t, 0xa );                   
    };                                                 
};
#include "magic/_802_11_ai_reqfi_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_ai_reqfi_t, 0xa );
