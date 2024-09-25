#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/autoboost_clear_priority_floor_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_AUTOBOOST_CLEAR_PRIORITY_FLOOR_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct autoboost_clear_priority_floor_event_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 void*    lock;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint32_t thread_id;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m02 uint32_t boost_bitmap;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BoostBitmap
                                                 
        SDK_MAGIC_PROPERTIES( "_ETW_AUTOBOOST_CLEAR_PRIORITY_FLOOR_EVENT.$", 0x10, true, 0xe93bee1316ed0c05 );             
        SDK_FIXED_SIZE( autoboost_clear_priority_floor_event_t, 0x10 );             
    };                                           
};
#include "magic/autoboost_clear_priority_floor_event_t.end.hpp"
SDK_VERIFY( struct etw::autoboost_clear_priority_floor_event_t, 0x10 );
