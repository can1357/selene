#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cache_manager_callback_functions_t.start.hpp"
namespace nt
{
    // [struct _CACHE_MANAGER_CALLBACK_FUNCTIONS]
    // => Windows 11
    //
    struct cache_manager_callback_functions_t                                  
    {                                                                          
        using acquire_for_lazy_write_ex_t = sdk::function<uint8_t(void*, uint32_t, uint32_t*)>*;                          
                                                                               
        // Windows 11                                                          
        //                                                                     
        _m00 acquire_for_lazy_write_ex_t             acquire_for_lazy_write_ex;  //{ +0x0000    } | .AcquireForLazyWriteEx
        _m01 sdk::function<void(void*)>*             release_from_lazy_write;    //{ +0x0008    } | .ReleaseFromLazyWrite
        _m02 sdk::function<uint8_t(void*, uint8_t)>* acquire_for_read_ahead;     //{ +0x0010    } | .AcquireForReadAhead
        _m03 sdk::function<void(void*)>*             release_from_read_ahead;    //{ +0x0018    } | .ReleaseFromReadAhead
                                                                               
        SDK_MAGIC_PROPERTIES( "_CACHE_MANAGER_CALLBACK_FUNCTIONS.$", 0x0, false, 0x2a264eba4c541e46 );                          
        SDK_FIXED_SIZE( cache_manager_callback_functions_t, 0x20 );                          
    };                                                                         
};
#include "magic/cache_manager_callback_functions_t.end.hpp"
SDK_VERIFY( struct nt::cache_manager_callback_functions_t, 0x20 );
