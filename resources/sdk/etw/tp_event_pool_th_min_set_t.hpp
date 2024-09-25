#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/tp_event_pool_th_min_set_t.start.hpp"
namespace etw
{
    // [struct _ETW_TP_EVENT_POOL_TH_MIN_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tp_event_pool_th_min_set_t                     
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                
        _m00 struct win::system_trace_header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             pool_id;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PoolId
        _m02 uint32_t                          thread_num;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ThreadNum
                                                          
        SDK_MAGIC_PROPERTIES( "_ETW_TP_EVENT_POOL_TH_MIN_SET.$", 0x30, true, 0x2a5fb6d4d466e743 );           
        SDK_FIXED_SIZE( tp_event_pool_th_min_set_t, 0x30 );           
    };                                                    
};
#include "magic/tp_event_pool_th_min_set_t.end.hpp"
SDK_VERIFY( struct etw::tp_event_pool_th_min_set_t, 0x30 );
