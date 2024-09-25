#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/apartment_shutdown_node_t.start.hpp"
namespace win
{
    struct apartment_shutdown_registration_cookie_t;

    // [struct ApartmentShutdownNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct apartment_shutdown_node_t                                      
    {                                                                     
        using apartment_shutdown_registration_cookie_t = struct win::apartment_shutdown_registration_cookie_t*;                   
                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                
        _m00 apartment_shutdown_registration_cookie_t  cookie;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cookie
        _m01 uint8_t                                   b_callback_invoked;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .bCallbackInvoked
                                                                          
        SDK_MAGIC_PROPERTIES( "ApartmentShutdownNode.$", 0x38, true, 0x55180af1232b1529 );                   
        SDK_FIXED_SIZE( apartment_shutdown_node_t, 0x38 );                   
    };                                                                    
};
#include "magic/apartment_shutdown_node_t.end.hpp"
SDK_VERIFY( struct win::apartment_shutdown_node_t, 0x38 );
