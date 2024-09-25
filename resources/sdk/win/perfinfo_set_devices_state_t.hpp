#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_set_devices_state_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SET_DEVICES_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_set_devices_state_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t system_state;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemState
        _m01 uint8_t  waking;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Waking
        _m02 uint8_t  shutdown;          //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .Shutdown
        _m03 uint8_t  irp_minor;         //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .IrpMinor
                                       
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SET_DEVICES_STATE.$", 0x8, true, 0xa4edc47686860ec0 );             
        SDK_FIXED_SIZE( perfinfo_set_devices_state_t, 0x8 );             
    };                                 
};
#include "magic/perfinfo_set_devices_state_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_set_devices_state_t, 0x8 );
