#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_segment_element_t.start.hpp"
namespace nt
{
    // [union _FILE_SEGMENT_ELEMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union file_segment_element_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 void*    buffer;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint64_t alignment;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Alignment
                                
        SDK_NONVOL_PROPERTIES( "_FILE_SEGMENT_ELEMENT.$", 0x8, true, 0xd934ee9121cce3a2 );          
        SDK_FIXED_SIZE( file_segment_element_t, 0x8 );          
    };                          
};
#include "magic/file_segment_element_t.end.hpp"
SDK_VERIFY( union nt::file_segment_element_t, 0x8 );
