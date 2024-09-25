#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_energy_estimation_config_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ENERGY_ESTIMATION_CONFIG_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_energy_estimation_config_information_t
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 uint8_t enabled;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
                                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ENERGY_ESTIMATION_CONFIG_INFORMATION.$", 0x1, true, 0xb8507ed896704ce5 );        
        SDK_FIXED_SIZE( system_energy_estimation_config_information_t, 0x1 );        
    };                                                  
};
#include "magic/system_energy_estimation_config_information_t.end.hpp"
SDK_VERIFY( struct win::system_energy_estimation_config_information_t, 0x1 );
