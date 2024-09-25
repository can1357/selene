#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/retrieval_pointer_base_t.start.hpp"
namespace win
{
    // [struct _RETRIEVAL_POINTER_BASE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct retrieval_pointer_base_t   
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 int64_t file_area_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileAreaOffset
                                      
        SDK_NONVOL_PROPERTIES( "_RETRIEVAL_POINTER_BASE.$", 0x8, true, 0x932d737251fef792 );                 
        SDK_FIXED_SIZE( retrieval_pointer_base_t, 0x8 );                 
    };                                
};
#include "magic/retrieval_pointer_base_t.end.hpp"
SDK_VERIFY( struct win::retrieval_pointer_base_t, 0x8 );
