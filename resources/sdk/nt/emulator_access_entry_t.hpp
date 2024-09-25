#pragma once
#include <sdkgen/support_library.hpp>
#include "emulator_port_access_type_t.hpp"

#include "magic/emulator_access_entry_t.start.hpp"
namespace nt
{
    // [struct _EMULATOR_ACCESS_ENTRY]
    // => WDK 10 (NV)
    //
    struct emulator_access_entry_t                                      
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                             base_port;              //{ +0x0000    } | .BasePort
        _m01 uint32_t                             num_consecutive_ports;  //{ +0x0004    } | .NumConsecutivePorts
        _m02 enum nt::emulator_port_access_type_t access_type;            //{ +0x0008    } | .AccessType
        _m03 uint8_t                              access_mode;            //{ +0x000c    } | .AccessMode
        _m04 uint8_t                              string_support;         //{ +0x000d    } | .StringSupport
        _m05 void*                                routine;                //{ +0x0010    } | .Routine
                                                                        
        SDK_NONVOL_PROPERTIES( "_EMULATOR_ACCESS_ENTRY.$", 0x0, false, 0xc9ee2b5e18da5bf7 );                      
        SDK_FIXED_SIZE( emulator_access_entry_t, 0x18 );                      
    };                                                                  
};
#include "magic/emulator_access_entry_t.end.hpp"
SDK_VERIFY( struct nt::emulator_access_entry_t, 0x18 );
