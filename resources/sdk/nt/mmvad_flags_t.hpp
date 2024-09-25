#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmvad_flags_t.start.hpp"
namespace nt
{
    // [struct _MMVAD_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmvad_flags_t                  
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                
        _m00 uint1_t   delete_in_progress;  //{ +0x0000@19 +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteInProgress
        _m01 uint1_t   no_change;           //{ +0x0000@14 +0x0000@3  +0x0000@3  +0x0000@3  } | .NoChange
        _m02 uint3_t   vad_type;            //{ +0x0000@0  +0x0000@4  +0x0000@4  +0x0000@4  } | .VadType
        _m03 uint5_t   protection;          //{ +0x0000@3  +0x0000@7  +0x0000@7  +0x0000@7  } | .Protection
        _m04 varuint_t preferred_node;      //{ +0x0000@8  +0x0000@12 +0x0000@12 +0x0000@12 } | .PreferredNode
        _m05 uint1_t   private_memory;      //{ +0x0000@15 +0x0000@20 +0x0000@21 +0x0000@20 } | .PrivateMemory
                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                
        _m06 uint1_t   lock;                //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Lock
        _m07 uint1_t   lock_contended;      //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .LockContended
        _m08 uint2_t   page_size;           //{ +0x0000@18 +0x0000@19 +0x0000@18 } | .PageSize
                                          
        // Windows 10 v1607                   
        //                                
        _m09 uint1_t   private_fixup;       //{ +0x0000@16 } | .PrivateFixup
        _m10 uint1_t   many_subsections;    //{ +0x0000@17 } | .ManySubsections
        _m11 uint1_t   enclave;             //{ +0x0000@18 } | .Enclave
        _m12 uint1_t   page_size64k;        //{ +0x0000@20 } | .PageSize64K
                                          
        SDK_MAGIC_PROPERTIES( "_MMVAD_FLAGS.$", 0x4, true, 0x94989d5145342b87 );                   
        SDK_FIXED_SIZE( mmvad_flags_t, 0x4 );                   
    };                                    
};
#include "magic/mmvad_flags_t.end.hpp"
SDK_VERIFY( struct nt::mmvad_flags_t, 0x4 );
