#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/log_register_context_t.start.hpp"
namespace hal
{
    // [struct _HAL_LOG_REGISTER_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct log_register_context_t                                        
    {                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                               
        _m00 sdk::function<void(uint32_t, void*, uint32_t)>* log_routine;  //{ +0x0000    +0x0000    +0x0000    } | .LogRoutine
        _m01 uint32_t                                        flag;         //{ +0x0008    +0x0008    +0x0008    } | .Flag
                                                                         
        SDK_MAGIC_PROPERTIES( "_HAL_LOG_REGISTER_CONTEXT.$", 0x10, true, 0xa46f54240296d0fc );            
        SDK_FIXED_SIZE( log_register_context_t, 0x10 );                  
    };                                                                   
};
#include "magic/log_register_context_t.end.hpp"
SDK_VERIFY( struct hal::log_register_context_t, 0x10 );
