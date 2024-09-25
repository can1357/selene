#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_dispatch_t.start.hpp"
namespace wsk
{
    // [struct _WSK_CLIENT_DISPATCH]
    // => WDK 10 (NV)
    //
    struct client_dispatch_t                          
    {                                                 
        using pfn_wsk_client_event_t = sdk::function<int32_t(void*, uint32_t, void*, uint64_t)>*;                 
                                                      
        // WDK 10                                     
        //                                            
        _m00 uint16_t                version;           //{ +0x0000    } | .Version
        _m01 pfn_wsk_client_event_t  wsk_client_event;  //{ +0x0008    } | .WskClientEvent
                                                      
        SDK_NONVOL_PROPERTIES( "_WSK_CLIENT_DISPATCH.$", 0x0, false, 0x56247b2be0e2d38 );                 
        SDK_FIXED_SIZE( client_dispatch_t, 0x10 );                 
    };                                                
};
#include "magic/client_dispatch_t.end.hpp"
SDK_VERIFY( struct wsk::client_dispatch_t, 0x10 );
