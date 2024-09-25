#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/function_level_device_reset_parameters_t.start.hpp"
namespace wdf
{
    // [struct _FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct function_level_device_reset_parameters_t                       
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                
        _m00 uint32_t                             size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::function<void(int32_t, void*)>* device_reset_completion;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceResetCompletion
        _m02 void*                                completion_context;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CompletionContext
                                                                          
        SDK_NONVOL_PROPERTIES( "_FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS.$", 0x18, true, 0x55a2fa615eef3277 );                        
        SDK_FIXED_SIZE( function_level_device_reset_parameters_t, 0x18 );                        
    };                                                                    
};
#include "magic/function_level_device_reset_parameters_t.end.hpp"
SDK_VERIFY( struct wdf::function_level_device_reset_parameters_t, 0x18 );
