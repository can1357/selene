#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/range_destroy_t.start.hpp"
namespace heap
{
    // [struct _HEAP_RANGE_DESTROY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct range_destroy_t                                 
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct win::system_trace_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
                                                           
        SDK_MAGIC_PROPERTIES( "_HEAP_RANGE_DESTROY.$", 0x28, true, 0x90cef927a9751636 );            
        SDK_FIXED_SIZE( range_destroy_t, 0x28 );            
    };                                                     
};
#include "magic/range_destroy_t.end.hpp"
SDK_VERIFY( struct heap::range_destroy_t, 0x28 );
