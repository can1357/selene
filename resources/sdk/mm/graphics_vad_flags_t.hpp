#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/graphics_vad_flags_t.start.hpp"
namespace mm
{
    // [struct _MM_GRAPHICS_VAD_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct graphics_vad_flags_t                  
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                       
        _m00 uint1_t   lock;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Lock
        _m01 uint1_t   lock_contended;             //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .LockContended
        _m02 uint1_t   delete_in_progress;         //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteInProgress
        _m03 uint1_t   no_change;                  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .NoChange
        _m04 uint3_t   vad_type;                   //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .VadType
        _m05 uint5_t   protection;                 //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .Protection
        _m06 varuint_t preferred_node;             //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .PreferredNode
        _m07 uint2_t   page_size;                  //{ +0x0000@18 +0x0000@19 +0x0000@18 } | .PageSize
        _m08 uint1_t   private_memory_always_set;  //{ +0x0000@20 +0x0000@21 +0x0000@20 } | .PrivateMemoryAlwaysSet
        _m09 uint1_t   write_watch;                //{ +0x0000@21 +0x0000@22 +0x0000@21 } | .WriteWatch
        _m10 uint1_t   fixed_large_page_size;      //{ +0x0000@22 +0x0000@23 +0x0000@22 } | .FixedLargePageSize
        _m11 uint1_t   zero_fill_pages_optional;   //{ +0x0000@23 +0x0000@24 +0x0000@23 } | .ZeroFillPagesOptional
        _m12 uint1_t   graphics_always_set;        //{ +0x0000@24 +0x0000@25 +0x0000@24 } | .GraphicsAlwaysSet
        _m13 uint1_t   graphics_use_coherent_bus;  //{ +0x0000@25 +0x0000@26 +0x0000@25 } | .GraphicsUseCoherentBus
        _m14 uint1_t   graphics_no_cache;          //{ +0x0000@26 +0x0000@27 +0x0000@26 } | .GraphicsNoCache
        _m15 uint3_t   graphics_page_protection;   //{ +0x0000@27 +0x0000@28 +0x0000@27 } | .GraphicsPageProtection
                                                 
        SDK_MAGIC_PROPERTIES( "_MM_GRAPHICS_VAD_FLAGS.$", 0x4, true, 0x3f3fc8746534805b );                          
        SDK_FIXED_SIZE( graphics_vad_flags_t, 0x4 );                          
    };                                           
};
#include "magic/graphics_vad_flags_t.end.hpp"
SDK_VERIFY( struct mm::graphics_vad_flags_t, 0x4 );
