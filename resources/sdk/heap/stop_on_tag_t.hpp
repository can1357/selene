#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stop_on_tag_t.start.hpp"
namespace heap
{
    // [struct _HEAP_STOP_ON_TAG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stop_on_tag_t                 
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t heap_and_tag_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeapAndTagIndex
        _m01 uint16_t tag_index;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TagIndex
        _m02 uint16_t heap_index;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HeapIndex
                                         
        SDK_MAGIC_PROPERTIES( "_HEAP_STOP_ON_TAG.$", 0x4, true, 0x67d29f92072c7591 );                   
        SDK_FIXED_SIZE( stop_on_tag_t, 0x4 );                   
    };                                   
};
#include "magic/stop_on_tag_t.end.hpp"
SDK_VERIFY( struct heap::stop_on_tag_t, 0x4 );
