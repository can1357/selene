#pragma once
#include <sdkgen/support_library.hpp>
#include "process_energy_values_t.hpp"
#include "process_energy_values_extension_t.hpp"

#include "magic/process_extended_energy_values_t.start.hpp"
namespace nt
{
    // [struct _PROCESS_EXTENDED_ENERGY_VALUES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_extended_energy_values_t                         
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                          
        _m00 struct nt::process_energy_values_t           base;       //{ +0x0000    +0x0000    +0x0000    } | .Base
        _m01 struct nt::process_energy_values_extension_t extension;  //{ +0x0110    +0x0110    +0x0110    } | .Extension
                                                                    
        SDK_MAGIC_PROPERTIES( "_PROCESS_EXTENDED_ENERGY_VALUES.$", 0x1b0, true, 0xa83db4b995923cbc );          
        SDK_FIXED_SIZE( process_extended_energy_values_t, 0x1b0 );          
    };                                                              
};
#include "magic/process_extended_energy_values_t.end.hpp"
SDK_VERIFY( struct nt::process_extended_energy_values_t, 0x1b0 );
