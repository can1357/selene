#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cache_manager_callbacks_t.start.hpp"
namespace nt
{
    // [struct _CACHE_MANAGER_CALLBACKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cache_manager_callbacks_t                                         
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                   
        _m00 sdk::function<uint8_t(void*, uint8_t)>* acquire_for_lazy_write;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AcquireForLazyWrite
        _m01 sdk::function<void(void*)>*             release_from_lazy_write;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ReleaseFromLazyWrite
        _m02 sdk::function<uint8_t(void*, uint8_t)>* acquire_for_read_ahead;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AcquireForReadAhead
        _m03 sdk::function<void(void*)>*             release_from_read_ahead;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ReleaseFromReadAhead
                                                                             
        SDK_NONVOL_PROPERTIES( "_CACHE_MANAGER_CALLBACKS.$", 0x20, true, 0xfa32eefda152f88e );                        
        SDK_FIXED_SIZE( cache_manager_callbacks_t, 0x20 );                        
    };                                                                       
};
#include "magic/cache_manager_callbacks_t.end.hpp"
SDK_VERIFY( struct nt::cache_manager_callbacks_t, 0x20 );
