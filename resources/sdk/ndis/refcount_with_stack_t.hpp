#pragma once
#include <sdkgen/support_library.hpp>
#include "refcount_stack_block_t.hpp"

#include "magic/refcount_with_stack_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_REFCOUNT_WITH_STACK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refcount_with_stack_t                                               
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                     
        _m00 struct ndis::refcount_stack_block_t block;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Block
        _m01 uint1_t                             reference_allocation_failed;    //{ +0x0038@0  +0x0038@0  +0x0038@0  +0x0038@0  } | .ReferenceAllocationFailed
        _m02 uint15_t                            total_references;               //{ +0x0038@1  +0x0038@1  +0x0038@1  +0x0038@1  } | .TotalReferences
        _m03 uint1_t                             dereference_allocation_failed;  //{ +0x0038@16 +0x0038@16 +0x0038@16 +0x0038@16 } | .DereferenceAllocationFailed
        _m04 uint15_t                            total_dereferences;             //{ +0x0038@17 +0x0038@17 +0x0038@17 +0x0038@17 } | .TotalDereferences
                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_REFCOUNT_WITH_STACK.$", 0x40, true, 0xd537a0830885d0e3 );                              
        SDK_FIXED_SIZE( refcount_with_stack_t, 0x40 );                              
    };                                                                         
};
#include "magic/refcount_with_stack_t.end.hpp"
SDK_VERIFY( struct ndis::refcount_with_stack_t, 0x40 );
