#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_npi_t.start.hpp"
namespace wsk
{
    struct client_dispatch_t;

    // [struct _WSK_CLIENT_NPI]
    // => WDK 10 (NV)
    //
    struct client_npi_t                                          
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 void*                                client_context;  //{ +0x0000    } | .ClientContext
        _m01 const struct wsk::client_dispatch_t* dispatch;        //{ +0x0008    } | .Dispatch
                                                                 
        SDK_NONVOL_PROPERTIES( "_WSK_CLIENT_NPI.$", 0x0, false, 0xa2310c70d4e0d601 );               
        SDK_FIXED_SIZE( client_npi_t, 0x10 );                    
    };                                                           
};
#include "magic/client_npi_t.end.hpp"
SDK_VERIFY( struct wsk::client_npi_t, 0x10 );
