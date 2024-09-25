#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_driver_entry32_t.start.hpp"
namespace nt
{
    // [struct _DUMP_DRIVER_ENTRY32]
    // => WDK 10 (NV)
    //
    struct dump_driver_entry32_t                       
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint32_t               driver_name_offset;  //{ +0x0000    } | .DriverNameOffset
        _m01 sdk::array<uint8_t, 1> ldr_entry;           //{ +0x0004    } | .LdrEntry
                                                       
        SDK_NONVOL_PROPERTIES( "_DUMP_DRIVER_ENTRY32.$", 0x0, false, 0x4bd1e4fa7f1e8dd2 );                   
        SDK_FIXED_SIZE( dump_driver_entry32_t, 0x8 );                   
    };                                                 
};
#include "magic/dump_driver_entry32_t.end.hpp"
SDK_VERIFY( struct nt::dump_driver_entry32_t, 0x8 );
