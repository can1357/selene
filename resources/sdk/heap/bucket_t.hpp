#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bucket_t.start.hpp"
namespace heap
{
    // [struct _HEAP_BUCKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bucket_t                        
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                 
        _m00 uint16_t         block_units;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BlockUnits
        _m01 uint8_t          size_index;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SizeIndex
        _m02 volatile uint1_t use_affinity;  //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .UseAffinity
        _m03 volatile uint2_t debug_flags;   //{ +0x0003@1  +0x0003@1  +0x0003@1  +0x0003@1  } | .DebugFlags
        _m04 volatile uint8_t flags;         //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Flags
                                           
        SDK_MAGIC_PROPERTIES( "_HEAP_BUCKET.$", 0x4, true, 0x840910f70d0ff69a );             
        SDK_FIXED_SIZE( bucket_t, 0x4 );             
    };                                     
};
#include "magic/bucket_t.end.hpp"
SDK_VERIFY( struct heap::bucket_t, 0x4 );
