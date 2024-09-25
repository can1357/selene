#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_unloaded_drivers32_t.start.hpp"
namespace nt
{
    // [struct _DUMP_UNLOADED_DRIVERS32]
    // => WDK 10 (NV)
    //
    struct dump_unloaded_drivers32_t               
    {                                              
        // WDK 10                                  
        //                                         
        _m00 nt::ascii_view32        name;           //{ +0x0000    } | .Name
        _m01 sdk::array<wchar_t, 12> driver_name;    //{ +0x0008    } | .DriverName
        _m02 uint32_t                start_address;  //{ +0x0020    } | .StartAddress
        _m03 uint32_t                end_address;    //{ +0x0024    } | .EndAddress
                                                   
        SDK_NONVOL_PROPERTIES( "_DUMP_UNLOADED_DRIVERS32.$", 0x0, false, 0x936d10c1177b86a1 );              
        SDK_FIXED_SIZE( dump_unloaded_drivers32_t, 0x28 );              
    };                                             
};
#include "magic/dump_unloaded_drivers32_t.end.hpp"
SDK_VERIFY( struct nt::dump_unloaded_drivers32_t, 0x28 );
