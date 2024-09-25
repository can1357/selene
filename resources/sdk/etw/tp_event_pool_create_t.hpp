#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/tp_event_pool_create_t.start.hpp"
namespace etw
{
    // [struct _ETW_TP_EVENT_POOL_CREATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tp_event_pool_create_t                      
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                             
        _m00 struct win::system_trace_header_t header;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             pool_id;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PoolId
                                                       
        SDK_MAGIC_PROPERTIES( "_ETW_TP_EVENT_POOL_CREATE.$", 0x28, true, 0x87c2fb7c1fd7de1f );        
        SDK_FIXED_SIZE( tp_event_pool_create_t, 0x28 );        
    };                                                 
};
#include "magic/tp_event_pool_create_t.end.hpp"
SDK_VERIFY( struct etw::tp_event_pool_create_t, 0x28 );
