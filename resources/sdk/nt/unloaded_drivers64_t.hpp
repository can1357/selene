#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unloaded_drivers64_t.start.hpp"
namespace nt
{
    // [struct _UNLOADED_DRIVERS64]
    // => WDK 10 (NV)
    //
    struct unloaded_drivers64_t           
    {                                     
        // WDK 10                         
        //                                
        _m00 nt::ascii_view name;           //{ +0x0000    } | .Name
        _m01 uint64_t       start_address;  //{ +0x0010    } | .StartAddress
        _m02 uint64_t       end_address;    //{ +0x0018    } | .EndAddress
        _m03 int64_t        current_time;   //{ +0x0020    } | .CurrentTime
                                          
        SDK_NONVOL_PROPERTIES( "_UNLOADED_DRIVERS64.$", 0x0, false, 0xc464b1a72beecd32 );              
        SDK_FIXED_SIZE( unloaded_drivers64_t, 0x28 );              
    };                                    
};
#include "magic/unloaded_drivers64_t.end.hpp"
SDK_VERIFY( struct nt::unloaded_drivers64_t, 0x28 );
