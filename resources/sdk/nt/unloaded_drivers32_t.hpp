#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unloaded_drivers32_t.start.hpp"
namespace nt
{
    // [struct _UNLOADED_DRIVERS32]
    // => WDK 10 (NV)
    //
    struct unloaded_drivers32_t             
    {                                       
        // WDK 10                           
        //                                  
        _m00 nt::ascii_view32 name;           //{ +0x0000    } | .Name
        _m01 uint32_t         start_address;  //{ +0x0008    } | .StartAddress
        _m02 uint32_t         end_address;    //{ +0x000c    } | .EndAddress
        _m03 int64_t          current_time;   //{ +0x0010    } | .CurrentTime
                                            
        SDK_NONVOL_PROPERTIES( "_UNLOADED_DRIVERS32.$", 0x0, false, 0x6cdaa1219b1eab3e );              
        SDK_FIXED_SIZE( unloaded_drivers32_t, 0x18 );              
    };                                      
};
#include "magic/unloaded_drivers32_t.end.hpp"
SDK_VERIFY( struct nt::unloaded_drivers32_t, 0x18 );
