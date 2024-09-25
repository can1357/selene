#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_space_flags_t.start.hpp"
namespace mm
{
    // [struct _MM_SESSION_SPACE_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_space_flags_t                
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                      
        _m00 uint1_t   initialized;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Initialized
        _m01 uint1_t   delete_pending;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DeletePending
        _m02 uint1_t   ws_initialized;            //{ +0x0000@4  +0x0000@4  +0x0000@2  +0x0000@4  } | .WsInitialized
        _m03 uint1_t   object_initialized;        //{ +0x0000@6  +0x0000@6  +0x0000@3  +0x0000@6  } | .ObjectInitialized
        _m04 varuint_t filler;                    //{ +0x0000@8  +0x0000@10 +0x0000@4  +0x0000@10 } | .Filler
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                         
        //                                      
        _m05 uint1_t   pool_initialized;          //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .PoolInitialized
        _m06 uint1_t   dynamic_va_initialized;    //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .DynamicVaInitialized
        _m07 uint1_t   pool_destroyed;            //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .PoolDestroyed
        _m08 uint1_t   leaked_pool_deliberately;  //{ +0x0000@7  +0x0000@9  +0x0000@9  } | .LeakedPoolDeliberately
                                                
        // Windows 10 v2004, Windows 10 v20H2                         
        //                                      
        _m09 uint1_t   session_heap_initialized;  //{ +0x0000@7  +0x0000@7  } | .SessionHeapInitialized
        _m10 uint1_t   session_heap_destroyed;    //{ +0x0000@8  +0x0000@8  } | .SessionHeapDestroyed
                                                
        SDK_MAGIC_PROPERTIES( "_MM_SESSION_SPACE_FLAGS.$", 0x4, true, 0xd28743e6ec2d1ea );                         
        SDK_FIXED_SIZE( session_space_flags_t, 0x4 );                         
    };                                          
};
#include "magic/session_space_flags_t.end.hpp"
SDK_VERIFY( struct mm::session_space_flags_t, 0x4 );
