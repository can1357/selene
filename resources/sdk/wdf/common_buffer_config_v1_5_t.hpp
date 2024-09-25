#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/common_buffer_config_v1_5_t.start.hpp"
namespace wdf
{
    // [struct _WDF_COMMON_BUFFER_CONFIG_V1_5]
    // => Windows 10 v1607
    //
    struct common_buffer_config_v1_5_t      
    {                                       
        // Windows 10 v1607                      
        //                                  
        _m00 uint32_t size;                   //{ +0x0000    } | .Size
        _m01 uint32_t alignment_requirement;  //{ +0x0004    } | .AlignmentRequirement
                                            
        SDK_MAGIC_PROPERTIES( "_WDF_COMMON_BUFFER_CONFIG_V1_5.$", 0x0, false, 0xa3edb34e7f52b229 );                      
        SDK_FIXED_SIZE( common_buffer_config_v1_5_t, 0x8 );                      
    };                                      
};
#include "magic/common_buffer_config_v1_5_t.end.hpp"
SDK_VERIFY( struct wdf::common_buffer_config_v1_5_t, 0x8 );
