#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refcount_stack_entry_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_REFCOUNT_STACK_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refcount_stack_entry_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint26_t stack;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Stack
        _m01 uint6_t  ref_count;   //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .RefCount
                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_REFCOUNT_STACK_ENTRY.$", 0x4, true, 0x27fcee0c1b5ff498 );          
        SDK_FIXED_SIZE( refcount_stack_entry_t, 0x4 );          
    };                           
};
#include "magic/refcount_stack_entry_t.end.hpp"
SDK_VERIFY( struct ndis::refcount_stack_entry_t, 0x4 );
