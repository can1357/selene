#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/boot_config_t.start.hpp"
namespace etw
{
    // [struct _ETW_BOOT_CONFIG]
    // => Windows 11
    //
    struct boot_config_t                        
    {                                           
        // Windows 11                           
        //                                      
        _m00 uint32_t         max_loggers;        //{ +0x0000    } | .MaxLoggers
        _m01 nt::list_entry_t boot_loggers_list;  //{ +0x0008    } | .BootLoggersList
                                                
        SDK_MAGIC_PROPERTIES( "_ETW_BOOT_CONFIG.$", 0x0, false, 0x8fba404f1c52d101 );                  
        SDK_FIXED_SIZE( boot_config_t, 0x18 );                  
    };                                          
};
#include "magic/boot_config_t.end.hpp"
SDK_VERIFY( struct etw::boot_config_t, 0x18 );
