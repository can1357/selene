#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/service_activation_t.hpp"

#include "magic/wwan_service_activation_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SERVICE_ACTIVATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_service_activation_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m00 struct ndis::object_header_t      header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::service_activation_t service_activation;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ServiceActivation
                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SERVICE_ACTIVATION.$", 0x8, true, 0x61021649eb5d5317 );                   
        SDK_FIXED_SIZE( wwan_service_activation_t, 0x8 );                   
    };                                                            
};
#include "magic/wwan_service_activation_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_service_activation_t, 0x8 );
