#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_display_enable_flags_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SYSTEM_DISPLAY_ENABLE_FLAGS]
    // => WDK 10 (NV)
    //
    struct system_display_enable_flags_t
    {                                   
        // WDK 10           
        //                  
        _m00 uint32_t value;              //{ +0x0000    } | .Value
                                        
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SYSTEM_DISPLAY_ENABLE_FLAGS.$", 0x0, false, 0xcfa61efd70ee9aa1 );      
        SDK_FIXED_SIZE( system_display_enable_flags_t, 0x4 );      
    };                                  
};
#include "magic/system_display_enable_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::system_display_enable_flags_t, 0x4 );
