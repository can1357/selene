#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct callback_object_t; }

#include "magic/callbacks_t.start.hpp"
namespace hal
{
    // [struct _HAL_CALLBACKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct callbacks_t                                            
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                        
        _m00 struct nt::callback_object_t* set_system_information;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SetSystemInformation
        _m01 struct nt::callback_object_t* bus_check;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BusCheck
                                                                  
        SDK_NONVOL_PROPERTIES( "_HAL_CALLBACKS.$", 0x10, true, 0x146a858e8dd1e4e9 );                       
        SDK_FIXED_SIZE( callbacks_t, 0x10 );                       
    };                                                            
};
#include "magic/callbacks_t.end.hpp"
SDK_VERIFY( struct hal::callbacks_t, 0x10 );
