#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_set_devices_state_ret_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SET_DEVICES_STATE_RET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_set_devices_state_ret_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 int32_t status;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Status
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SET_DEVICES_STATE_RET.$", 0x4, true, 0x8348998d70db32dc );       
        SDK_FIXED_SIZE( perfinfo_set_devices_state_ret_t, 0x4 );       
    };                                     
};
#include "magic/perfinfo_set_devices_state_ret_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_set_devices_state_ret_t, 0x4 );
