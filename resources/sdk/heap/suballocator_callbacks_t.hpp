#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/suballocator_callbacks_t.start.hpp"
namespace heap
{
    // [struct _HEAP_SUBALLOCATOR_CALLBACKS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct suballocator_callbacks_t  
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t allocate;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Allocate
        _m01 uint64_t free;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Free
        _m02 uint64_t commit;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Commit
        _m03 uint64_t decommit;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Decommit
        _m04 uint64_t extend_context;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtendContext
                                     
        SDK_MAGIC_PROPERTIES( "_HEAP_SUBALLOCATOR_CALLBACKS.$", 0x28, true, 0x8385b64a25bdd2e5 );               
        SDK_FIXED_SIZE( suballocator_callbacks_t, 0x28 );               
    };                               
};
#include "magic/suballocator_callbacks_t.end.hpp"
SDK_VERIFY( struct heap::suballocator_callbacks_t, 0x28 );
