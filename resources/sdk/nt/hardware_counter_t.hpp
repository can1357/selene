#pragma once
#include <sdkgen/support_library.hpp>
#include "hardware_counter_type_t.hpp"

#include "magic/hardware_counter_t.start.hpp"
namespace nt
{
    // [struct _HARDWARE_COUNTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hardware_counter_t                       
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                          
        _m00 enum nt::hardware_counter_type_t type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint64_t                         index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Index
                                                    
        SDK_NONVOL_PROPERTIES( "_HARDWARE_COUNTER.$", 0x10, true, 0xf9cfafc55672cf1 );      
        SDK_FIXED_SIZE( hardware_counter_t, 0x10 );      
    };                                              
};
#include "magic/hardware_counter_t.end.hpp"
SDK_VERIFY( struct nt::hardware_counter_t, 0x10 );
