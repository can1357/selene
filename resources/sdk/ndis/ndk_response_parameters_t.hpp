#pragma once
#include <sdkgen/support_library.hpp>
#include "ndk_capabilities_t.hpp"

#include "magic/ndk_response_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NDK_RESPONSE_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_response_parameters_t                                
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                          
        _m00 uint8_t                         capabilities_available;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CapabilitiesAvailable
        _m01 struct ndis::ndk_capabilities_t received_capabilities;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReceivedCapabilities
                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_NDK_RESPONSE_PARAMETERS.$", 0x40, true, 0xc73ceabec7393771 );                       
        SDK_FIXED_SIZE( ndk_response_parameters_t, 0x40 );                       
    };                                                              
};
#include "magic/ndk_response_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_response_parameters_t, 0x40 );
