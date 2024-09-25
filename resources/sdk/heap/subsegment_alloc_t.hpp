#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"
#include "event_subsegment_alloc_free_t.hpp"

#include "magic/subsegment_alloc_t.start.hpp"
namespace heap
{
    // [struct _HEAP_SUBSEGMENT_ALLOC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct subsegment_alloc_t                                  
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                     
        _m00 struct win::system_trace_header_t          header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct heap::event_subsegment_alloc_free_t event;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Event
                                                               
        SDK_MAGIC_PROPERTIES( "_HEAP_SUBSEGMENT_ALLOC.$", 0x40, true, 0x6bebadd5490c56fb );       
        SDK_FIXED_SIZE( subsegment_alloc_t, 0x40 );            
    };                                                         
};
#include "magic/subsegment_alloc_t.end.hpp"
SDK_VERIFY( struct heap::subsegment_alloc_t, 0x40 );
