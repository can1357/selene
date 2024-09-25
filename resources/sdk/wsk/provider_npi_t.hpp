#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/provider_npi_t.start.hpp"
namespace wsk
{
    struct provider_dispatch_t;

    // [struct _WSK_PROVIDER_NPI]
    // => WDK 10 (NV)
    //
    struct provider_npi_t                                    
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 void*                                  client;    //{ +0x0000    } | .Client
        _m01 const struct wsk::provider_dispatch_t* dispatch;  //{ +0x0008    } | .Dispatch
                                                             
        SDK_NONVOL_PROPERTIES( "_WSK_PROVIDER_NPI.$", 0x0, false, 0xf39e463958eba328 );         
        SDK_FIXED_SIZE( provider_npi_t, 0x10 );              
    };                                                       
};
#include "magic/provider_npi_t.end.hpp"
SDK_VERIFY( struct wsk::provider_npi_t, 0x10 );
