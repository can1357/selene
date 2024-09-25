#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_fast_ref_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LFH_FAST_REF]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_fast_ref_t       
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 void*    target;     //{ +0x0000    +0x0000    +0x0000    } | .Target
        _m01 uint64_t value;      //{ +0x0000    +0x0000    +0x0000    } | .Value
        _m02 uint12_t ref_count;  //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .RefCount
                                
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_FAST_REF.$", 0x8, true, 0xeab9dbd97f913d34 );          
        SDK_FIXED_SIZE( lfh_fast_ref_t, 0x8 );          
    };                          
};
#include "magic/lfh_fast_ref_t.end.hpp"
SDK_VERIFY( struct heap::lfh_fast_ref_t, 0x8 );
