#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_authentication_event_t.hpp"

#include "magic/_802_11_test_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_TEST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_test_t                                                     
    {                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                    
        _m00 uint32_t                                    length;                //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t                                    type;                  //{ +0x0004    +0x0004    +0x0004    } | .Type
        _m02 struct ndis::_802_11_authentication_event_t authentication_event;  //{ +0x0008    +0x0008    +0x0008    } | .AuthenticationEvent
        _m03 int32_t                                     rssi_trigger;          //{ +0x0008    +0x0008    +0x0008    } | .RssiTrigger
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_TEST.$", 0x1c, true, 0x59ed9e33b47e1ecb );                     
        SDK_FIXED_SIZE( _802_11_test_t, 0x1c );                               
    };                                                                        
};
#include "magic/_802_11_test_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_test_t, 0x1c );
