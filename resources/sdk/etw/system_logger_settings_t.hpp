#pragma once
#include <sdkgen/support_library.hpp>
#include "system_logger_t.hpp"
#include "../nt/perfinfo_groupmask_t.hpp"

#include "magic/system_logger_settings_t.start.hpp"
namespace etw
{
    // [struct _ETW_SYSTEM_LOGGER_SETTINGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_logger_settings_t                                                     
    {                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                              
        _m00 sdk::array<struct etw::system_logger_t, 8>      etwp_system_logger;          //{ +0x0000    +0x0000    +0x0000    } | .EtwpSystemLogger
        _m01 volatile uint32_t                               etwp_active_system_loggers;  //{ +0x0010    +0x0010    +0x0010    } | .EtwpActiveSystemLoggers
        _m02 struct nt::perfinfo_groupmask_t                 silo_global_group_mask;      //{ +0x0014    +0x0014    +0x0014    } | .SiloGlobalGroupMask
        _m03 sdk::array<struct nt::perfinfo_groupmask_t, 10> etwp_group_masks;            //{ +0x0034    +0x0034    +0x0034    } | .EtwpGroupMasks
                                                                                        
        SDK_MAGIC_PROPERTIES( "_ETW_SYSTEM_LOGGER_SETTINGS.$", 0x174, true, 0xa4a50fbc95de6fc9 );                           
        SDK_FIXED_SIZE( system_logger_settings_t, 0x174 );                              
    };                                                                                  
};
#include "magic/system_logger_settings_t.end.hpp"
SDK_VERIFY( struct etw::system_logger_settings_t, 0x174 );
