#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remove_lock_options_v1_15_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REMOVE_LOCK_OPTIONS_V1_15]
    // => Windows 10 v1607
    //
    struct remove_lock_options_v1_15_t
    {                                 
        // Windows 10 v1607      
        //                  
        _m00 uint32_t size;             //{ +0x0000    } | .Size
        _m01 uint32_t flags;            //{ +0x0004    } | .Flags
                                      
        SDK_MAGIC_PROPERTIES( "_WDF_REMOVE_LOCK_OPTIONS_V1_15.$", 0x0, false, 0xa280ec831bbce28a );      
        SDK_FIXED_SIZE( remove_lock_options_v1_15_t, 0x8 );      
    };                                
};
#include "magic/remove_lock_options_v1_15_t.end.hpp"
SDK_VERIFY( struct wdf::remove_lock_options_v1_15_t, 0x8 );
