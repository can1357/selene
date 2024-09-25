#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/add_reserved_parameters_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_ADD_RESERVED_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct add_reserved_parameters_t                    
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                              
        _m00 struct nt::device_object_t* reserve_device;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReserveDevice
                                                        
        SDK_NONVOL_PROPERTIES( "_ARBITER_ADD_RESERVED_PARAMETERS.$", 0x8, true, 0xebe6ce569fe857d3 );               
        SDK_FIXED_SIZE( add_reserved_parameters_t, 0x8 );               
    };                                                  
};
#include "magic/add_reserved_parameters_t.end.hpp"
SDK_VERIFY( struct arbiter::add_reserved_parameters_t, 0x8 );
