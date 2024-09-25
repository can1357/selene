#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_activation_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SERVICE_ACTIVATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_activation_t                     
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint32_t u_vendor_specific_buffer_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .uVendorSpecificBufferSize
                                                    
        SDK_MAGIC_PROPERTIES( "_WWAN_SERVICE_ACTIVATION.$", 0x4, true, 0x56f2b7c993b9d9f3 );                              
        SDK_FIXED_SIZE( service_activation_t, 0x4 );                              
    };                                              
};
#include "magic/service_activation_t.end.hpp"
SDK_VERIFY( struct wwan::service_activation_t, 0x4 );
