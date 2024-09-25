#pragma once
#include <sdkgen/support_library.hpp>
#include "refcount_stack_entry_t.hpp"

#include "magic/refcount_stack_block_t.start.hpp"
namespace ndis
{
    struct refcount_stack_block_t;

    // [struct _NDIS_REFCOUNT_STACK_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refcount_stack_block_t                              
    {                                                          
        using references_t =   sdk::array<struct ndis::refcount_stack_entry_t, 6>;             
        using dereferences_t = sdk::array<struct ndis::refcount_stack_entry_t, 6>;             
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                     
        _m00 struct ndis::refcount_stack_block_t* next;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 references_t                         references;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .References
        _m02 dereferences_t                       dereferences;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Dereferences
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_REFCOUNT_STACK_BLOCK.$", 0x38, true, 0x73e619f706c86f0b );             
        SDK_FIXED_SIZE( refcount_stack_block_t, 0x38 );             
    };                                                         
};
#include "magic/refcount_stack_block_t.end.hpp"
SDK_VERIFY( struct ndis::refcount_stack_block_t, 0x38 );
