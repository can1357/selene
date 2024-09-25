#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_nominal_performance_descriptor_t.start.hpp"
namespace nt
{
    // [struct _CDROM_NOMINAL_PERFORMANCE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct cdrom_nominal_performance_descriptor_t     
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 sdk::array<uint8_t, 4> start_lba;          //{ +0x0000    } | .StartLba
        _m01 sdk::array<uint8_t, 4> start_performance;  //{ +0x0004    } | .StartPerformance
        _m02 sdk::array<uint8_t, 4> end_lba;            //{ +0x0008    } | .EndLba
        _m03 sdk::array<uint8_t, 4> end_performance;    //{ +0x000c    } | .EndPerformance
                                                      
        SDK_NONVOL_PROPERTIES( "_CDROM_NOMINAL_PERFORMANCE_DESCRIPTOR.$", 0x0, false, 0x313b3f2d0beb16d0 );                  
        SDK_FIXED_SIZE( cdrom_nominal_performance_descriptor_t, 0x10 );                  
    };                                                
};
#include "magic/cdrom_nominal_performance_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_nominal_performance_descriptor_t, 0x10 );
