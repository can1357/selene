#pragma once
#include <sdkgen/support_library.hpp>
#include "heap_event_rundown_range_t.hpp"
#include "../win/system_trace_header_t.hpp"

#include "magic/heap_event_rundown_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_RUNDOWN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_rundown_t                            
    {                                                      
        using ranges_t = sdk::array<struct etw::heap_event_rundown_range_t, 1>;            
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct win::system_trace_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 uint32_t                          flags;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
        _m03 uint32_t                          process_id;   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ProcessId
        _m04 uint32_t                          range_count;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RangeCount
        _m05 ranges_t                          ranges;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Ranges
                                                           
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_RUNDOWN.$", 0x48, true, 0x612dc5a1e6f7c63d );            
        SDK_FIXED_SIZE( heap_event_rundown_t, 0x48 );            
    };                                                     
};
#include "magic/heap_event_rundown_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_rundown_t, 0x48 );
