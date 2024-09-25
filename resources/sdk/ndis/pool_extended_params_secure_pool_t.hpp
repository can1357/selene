#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_extended_params_secure_pool_t.start.hpp"
namespace ndis
{
    // [struct _POOL_EXTENDED_PARAMS_SECURE_POOL]
    // => Windows 11
    //
    struct pool_extended_params_secure_pool_t
    {                                        
        // Windows 11                    
        //                               
        _m00 void*    secure_pool_handle;      //{ +0x0000    } | .SecurePoolHandle
        _m01 void*    buffer;                  //{ +0x0008    } | .Buffer
        _m02 uint64_t cookie;                  //{ +0x0010    } | .Cookie
        _m03 uint32_t secure_pool_flags;       //{ +0x0018    } | .SecurePoolFlags
                                             
        SDK_MAGIC_PROPERTIES( "_POOL_EXTENDED_PARAMS_SECURE_POOL.$", 0x0, false, 0xb29284a8840e9feb );                   
        SDK_FIXED_SIZE( pool_extended_params_secure_pool_t, 0x20 );                   
    };                                       
};
#include "magic/pool_extended_params_secure_pool_t.end.hpp"
SDK_VERIFY( struct ndis::pool_extended_params_secure_pool_t, 0x20 );
