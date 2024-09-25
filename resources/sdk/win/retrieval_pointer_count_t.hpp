#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/retrieval_pointer_count_t.start.hpp"
namespace win
{
    // [struct RETRIEVAL_POINTER_COUNT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct retrieval_pointer_count_t
    {                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t extent_count;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtentCount
                                    
        SDK_NONVOL_PROPERTIES( "RETRIEVAL_POINTER_COUNT.$", 0x4, true, 0xe084893c0da42ea0 );             
        SDK_FIXED_SIZE( retrieval_pointer_count_t, 0x4 );             
    };                              
};
#include "magic/retrieval_pointer_count_t.end.hpp"
SDK_VERIFY( struct win::retrieval_pointer_count_t, 0x4 );
