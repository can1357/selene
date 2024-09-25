#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wudf_semaphore_t.start.hpp"
namespace wdf
{
    // [struct WUDF_SEMAPHORE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudf_semaphore_t
    {                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 void* value;    //{ +0x0000    +0x0000    +0x0000    } | .Value
                           
        SDK_MAGIC_PROPERTIES( "WUDF_SEMAPHORE.$", 0x8, true, 0xa7f5c7d9ff0c305 );      
        SDK_FIXED_SIZE( wudf_semaphore_t, 0x8 );      
    };                     
};
#include "magic/wudf_semaphore_t.end.hpp"
SDK_VERIFY( struct wdf::wudf_semaphore_t, 0x8 );
