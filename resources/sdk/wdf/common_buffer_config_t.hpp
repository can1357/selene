#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/common_buffer_config_t.start.hpp"
namespace wdf
{
    // [struct _WDF_COMMON_BUFFER_CONFIG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct common_buffer_config_t           
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t alignment_requirement;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AlignmentRequirement
                                            
        SDK_NONVOL_PROPERTIES( "_WDF_COMMON_BUFFER_CONFIG.$", 0x8, true, 0x5336f5d67d6aa180 );                      
        SDK_FIXED_SIZE( common_buffer_config_t, 0x8 );                      
    };                                      
};
#include "magic/common_buffer_config_t.end.hpp"
SDK_VERIFY( struct wdf::common_buffer_config_t, 0x8 );
