#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_dos_device_state_t.start.hpp"
namespace obp
{
    // [struct _OBP_SYSTEM_DOS_DEVICE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_dos_device_state_t                     
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                               
        _m00 uint32_t                 global_device_map;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GlobalDeviceMap
        _m01 sdk::array<uint32_t, 26> local_device_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LocalDeviceCount
                                                         
        SDK_MAGIC_PROPERTIES( "_OBP_SYSTEM_DOS_DEVICE_STATE.$", 0x6c, true, 0x4932dfc430315e8c );                   
        SDK_FIXED_SIZE( system_dos_device_state_t, 0x6c );                   
    };                                                   
};
#include "magic/system_dos_device_state_t.end.hpp"
SDK_VERIFY( struct obp::system_dos_device_state_t, 0x6c );
