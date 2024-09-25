#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_unloaded_drivers64_t.start.hpp"
namespace nt
{
    // [struct _DUMP_UNLOADED_DRIVERS64]
    // => WDK 10 (NV)
    //
    struct dump_unloaded_drivers64_t               
    {                                              
        // WDK 10                                  
        //                                         
        _m00 nt::ascii_view          name;           //{ +0x0000    } | .Name
        _m01 sdk::array<wchar_t, 12> driver_name;    //{ +0x0010    } | .DriverName
        _m02 uint64_t                start_address;  //{ +0x0028    } | .StartAddress
        _m03 uint64_t                end_address;    //{ +0x0030    } | .EndAddress
                                                   
        SDK_NONVOL_PROPERTIES( "_DUMP_UNLOADED_DRIVERS64.$", 0x0, false, 0xec585fc8475a18c4 );              
        SDK_FIXED_SIZE( dump_unloaded_drivers64_t, 0x38 );              
    };                                             
};
#include "magic/dump_unloaded_drivers64_t.end.hpp"
SDK_VERIFY( struct nt::dump_unloaded_drivers64_t, 0x38 );
