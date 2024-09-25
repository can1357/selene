#pragma once
#include <sdkgen/support_library.hpp>
#include "cache_manager_callback_functions_t.hpp"

#include "magic/cache_manager_callbacks_ex_t.start.hpp"
namespace nt
{
    // [struct _CACHE_MANAGER_CALLBACKS_EX]
    // => Windows 11
    //
    struct cache_manager_callbacks_ex_t                              
    {                                                                
        // Windows 11                                                
        //                                                           
        _m00 uint16_t                                      version;    //{ +0x0000    } | .Version
        _m01 uint16_t                                      size;       //{ +0x0002    } | .Size
        _m02 struct nt::cache_manager_callback_functions_t functions;  //{ +0x0008    } | .Functions
                                                                     
        SDK_MAGIC_PROPERTIES( "_CACHE_MANAGER_CALLBACKS_EX.$", 0x0, false, 0x55554139215c5bee );          
        SDK_FIXED_SIZE( cache_manager_callbacks_ex_t, 0x28 );          
    };                                                               
};
#include "magic/cache_manager_callbacks_ex_t.end.hpp"
SDK_VERIFY( struct nt::cache_manager_callbacks_ex_t, 0x28 );
