#pragma once
#include <sdkgen/support_library.hpp>
#include "mmpte_t.hpp"
#include "../mi/clone_block_flags_t.hpp"

#include "magic/mmclone_block_t.start.hpp"
namespace nt
{
    // [struct _MMCLONE_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmclone_block_t                                               
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                               
        _m00 struct nt::mmpte_t             proto_pte;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProtoPte
                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                             
        //                                                               
        _m01 volatile uint64_t              clone_commit_count;            //{ +0x0010    +0x0010    +0x0010    } | .CloneCommitCount
        _m02 struct mi::clone_block_flags_t u1;                            //{ +0x0010    +0x0010    +0x0010    } | .u1
        _m03 volatile uint64_t              clone_ref_count;               //{ +0x0018    +0x0018    +0x0018    } | .CloneRefCount
                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                               
        _m04 uint64_t                       cross_partition_references;    //{ +0x0008    +0x0008    +0x0008    } | .CrossPartitionReferences
                                                                         
        // Windows 11                                                    
        //                                                               
        _m05 volatile int64_t               entire_field;                  //{ +0x0010    } | .EntireField
        _m06 struct mi::clone_block_flags_t flags;                         //{ +0x0010    } | .Flags
        _m07 uint64_t                       use_count;                     //{ +0x0018    } | .UseCount
                                                                         
        // Windows 10 v1607                                              
        //                                                               
        _m08 uint64_t                       padding_for16_byte_alignment;  //{ +0x0008    } | .PaddingFor16ByteAlignment
                                                                         
        SDK_MAGIC_PROPERTIES( "_MMCLONE_BLOCK.$", 0x20, true, 0x1744cc1a44f8080d );                             
        SDK_FIXED_SIZE( mmclone_block_t, 0x20 );                             
    };                                                                   
};
#include "magic/mmclone_block_t.end.hpp"
SDK_VERIFY( struct nt::mmclone_block_t, 0x20 );
