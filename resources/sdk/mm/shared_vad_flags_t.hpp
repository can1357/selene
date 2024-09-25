#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/shared_vad_flags_t.start.hpp"
namespace mm
{
    // [struct _MM_SHARED_VAD_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shared_vad_flags_t                      
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                         
        _m00 uint1_t   lock;                         //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Lock
        _m01 uint1_t   lock_contended;               //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .LockContended
        _m02 uint1_t   delete_in_progress;           //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteInProgress
        _m03 uint1_t   no_change;                    //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .NoChange
        _m04 uint3_t   vad_type;                     //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .VadType
        _m05 uint5_t   protection;                   //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .Protection
        _m06 varuint_t preferred_node;               //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .PreferredNode
        _m07 uint2_t   page_size;                    //{ +0x0000@18 +0x0000@19 +0x0000@18 } | .PageSize
        _m08 uint1_t   private_memory_always_clear;  //{ +0x0000@20 +0x0000@21 +0x0000@20 } | .PrivateMemoryAlwaysClear
        _m09 uint1_t   private_fixup;                //{ +0x0000@21 +0x0000@22 +0x0000@21 } | .PrivateFixup
                                                   
        // Windows 10 v2004, Windows 10 v20H2                            
        //                                         
        _m10 uint1_t   hot_patch_allowed;            //{ +0x0000@22 +0x0000@22 } | .HotPatchAllowed
                                                   
        // Windows 11                              
        //                                         
        _m11 uint2_t   hot_patch_state;              //{ +0x0000@23 } | .HotPatchState
                                                   
        SDK_MAGIC_PROPERTIES( "_MM_SHARED_VAD_FLAGS.$", 0x4, true, 0xf3bace07df8209e8 );                            
        SDK_FIXED_SIZE( shared_vad_flags_t, 0x4 );                            
    };                                             
};
#include "magic/shared_vad_flags_t.end.hpp"
SDK_VERIFY( struct mm::shared_vad_flags_t, 0x4 );
