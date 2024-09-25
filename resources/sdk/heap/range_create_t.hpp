#pragma once
#include <sdkgen/support_library.hpp>
#include "event_range_create_t.hpp"
#include "../win/system_trace_header_t.hpp"

#include "magic/range_create_t.start.hpp"
namespace heap
{
    // [struct _HEAP_RANGE_CREATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct range_create_t                             
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                            
        _m00 struct win::system_trace_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct heap::event_range_create_t event;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Event
                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_RANGE_CREATE.$", 0x38, true, 0x488031b336df3ed3 );       
        SDK_FIXED_SIZE( range_create_t, 0x38 );       
    };                                                
};
#include "magic/range_create_t.end.hpp"
SDK_VERIFY( struct heap::range_create_t, 0x38 );
