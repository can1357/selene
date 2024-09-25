#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/alloc_context_t.start.hpp"
namespace halp
{
    // [struct _HALP_ALLOC_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct alloc_context_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                
        _m00 nt::list_entry_t buffer_list;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferList
        _m01 uint64_t         lock;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lock
                                          
        SDK_MAGIC_PROPERTIES( "_HALP_ALLOC_CONTEXT.$", 0x18, true, 0x72931eb4eb5a2750 );            
        SDK_FIXED_SIZE( alloc_context_t, 0x18 );            
    };                                    
};
#include "magic/alloc_context_t.end.hpp"
SDK_VERIFY( struct halp::alloc_context_t, 0x18 );
