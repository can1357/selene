#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_create_extended_params_t.start.hpp"
namespace wdf
{
    // [struct _POOL_CREATE_EXTENDED_PARAMS]
    // => Windows 11
    //
    struct pool_create_extended_params_t
    {                                   
        // Windows 11         
        //                    
        _m00 uint32_t version;            //{ +0x0000    } | .Version
                                        
        SDK_MAGIC_PROPERTIES( "_POOL_CREATE_EXTENDED_PARAMS.$", 0x0, false, 0x5cf42a4b6350b551 );        
        SDK_FIXED_SIZE( pool_create_extended_params_t, 0x4 );        
    };                                  
};
#include "magic/pool_create_extended_params_t.end.hpp"
SDK_VERIFY( struct wdf::pool_create_extended_params_t, 0x4 );
