#pragma once
#include <sdkgen/support_library.hpp>
#include "event_range_t.hpp"
#include "../win/system_trace_header_t.hpp"

#include "magic/range_log_t.start.hpp"
namespace heap
{
    // [struct _HEAP_RANGE_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct range_log_t                                
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                            
        _m00 struct win::system_trace_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct heap::event_range_t        range;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Range
                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_RANGE_LOG.$", 0x38, true, 0xba0f8aa6bd27afb8 );       
        SDK_FIXED_SIZE( range_log_t, 0x38 );          
    };                                                
};
#include "magic/range_log_t.end.hpp"
SDK_VERIFY( struct heap::range_log_t, 0x38 );
