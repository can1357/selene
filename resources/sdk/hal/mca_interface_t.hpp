#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mca_interface_t.start.hpp"
namespace hal
{
    // [struct _HAL_MCA_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mca_interface_t                                         
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                         
        _m00 sdk::function<void()>*                  lock;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 sdk::function<void()>*                  unlock;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Unlock
        _m02 sdk::function<int32_t(uint8_t, void*)>* read_register;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadRegister
                                                                   
        SDK_NONVOL_PROPERTIES( "_HAL_MCA_INTERFACE.$", 0x18, true, 0x5981fbcc01416837 );              
        SDK_FIXED_SIZE( mca_interface_t, 0x18 );                   
    };                                                             
};
#include "magic/mca_interface_t.end.hpp"
SDK_VERIFY( struct hal::mca_interface_t, 0x18 );
