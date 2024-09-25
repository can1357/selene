#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_connection_dispatch_t.start.hpp"
namespace wsk
{
    struct data_indication_t;

    // [struct _WSK_CLIENT_CONNECTION_DISPATCH]
    // => WDK 10 (NV)
    //
    struct client_connection_dispatch_t                                      
    {                                                                        
        using pfn_wsk_receive_event_t = sdk::function<int32_t(void*, uint32_t, struct wsk::data_indication_t*, uint64_t, uint64_t*)>*;                       
                                                                             
        // WDK 10                                                            
        //                                                                   
        _m00 pfn_wsk_receive_event_t                  wsk_receive_event;       //{ +0x0000    } | .WskReceiveEvent
        _m01 sdk::function<int32_t(void*, uint32_t)>* wsk_disconnect_event;    //{ +0x0008    } | .WskDisconnectEvent
        _m02 sdk::function<int32_t(void*, uint64_t)>* wsk_send_backlog_event;  //{ +0x0010    } | .WskSendBacklogEvent
                                                                             
        SDK_NONVOL_PROPERTIES( "_WSK_CLIENT_CONNECTION_DISPATCH.$", 0x0, false, 0x8667a91977049c7d );                       
        SDK_FIXED_SIZE( client_connection_dispatch_t, 0x18 );                       
    };                                                                       
};
#include "magic/client_connection_dispatch_t.end.hpp"
SDK_VERIFY( struct wsk::client_connection_dispatch_t, 0x18 );
