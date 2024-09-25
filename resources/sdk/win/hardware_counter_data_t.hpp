#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/hardware_counter_type_t.hpp"

#include "magic/hardware_counter_data_t.start.hpp"
namespace win
{
    // [struct _HARDWARE_COUNTER_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hardware_counter_data_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                          
        _m00 enum nt::hardware_counter_type_t type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint64_t                         value;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                                    
        SDK_MAGIC_PROPERTIES( "_HARDWARE_COUNTER_DATA.$", 0x10, true, 0xf61309c00a382c99 );      
        SDK_DYNAMIC_SIZE( hardware_counter_data_t );      
    };                                              
};
#include "magic/hardware_counter_data_t.end.hpp"
