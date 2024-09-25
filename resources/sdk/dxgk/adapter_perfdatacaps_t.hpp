#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_perfdatacaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ADAPTER_PERFDATACAPS]
    // => WDK 10 (NV)
    //
    struct adapter_perfdatacaps_t          
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint64_t max_memory_bandwidth;  //{ +0x0000    } | .MaxMemoryBandwidth
        _m01 uint64_t max_pcie_bandwidth;    //{ +0x0008    } | .MaxPCIEBandwidth
        _m02 uint32_t max_fan_rpm;           //{ +0x0010    } | .MaxFanRPM
        _m03 uint32_t temperature_max;       //{ +0x0014    } | .TemperatureMax
        _m04 uint32_t temperature_warning;   //{ +0x0018    } | .TemperatureWarning
                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_ADAPTER_PERFDATACAPS.$", 0x0, false, 0xdf2d0820db44c890 );                     
        SDK_FIXED_SIZE( adapter_perfdatacaps_t, 0x1c );                     
    };                                     
};
#include "magic/adapter_perfdatacaps_t.end.hpp"
SDK_VERIFY( struct dxgk::adapter_perfdatacaps_t, 0x1c );
