#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/standard_com_server_call_t.start.hpp"
namespace win
{
    // [class StandardComServerCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class standard_com_server_call_t                            
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                      
        _m00 uint32_t dw_apt_id;                                  //{ +0x0090    +0x00d8    +0x0140    +0x00d8    } | ._dwAptId
        _m01 uint1_t  b_free_threaded;                            //{ +0x0094@0  +0x00dc@0  +0x0144@0  +0x00dc@0  } | ._bFreeThreaded
        _m02 uint1_t  b_subscribed_server_transport_call_events;  //{ +0x0094@1  +0x00dc@1  +0x0144@1  +0x00dc@1  } | ._bSubscribedServerTransportCallEvents
                                                                
        SDK_MAGIC_PROPERTIES( "StandardComServerCall.$", 0xf0, true, 0xf3e030453c232bd8 );                                          
        SDK_DYNAMIC_SIZE( standard_com_server_call_t );                                          
    };                                                          
};
#include "magic/standard_com_server_call_t.end.hpp"
