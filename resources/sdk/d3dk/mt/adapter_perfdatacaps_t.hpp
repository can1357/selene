#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_perfdatacaps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADAPTER_PERFDATACAPS]
    // => WDK 10 (NV)
    //
    struct adapter_perfdatacaps_t            
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 uint64_t max_memory_bandwidth;    //{ +0x0008    } | .MaxMemoryBandwidth
        _m02 uint64_t max_pcie_bandwidth;      //{ +0x0010    } | .MaxPCIEBandwidth
        _m03 uint32_t max_fan_rpm;             //{ +0x0018    } | .MaxFanRPM
        _m04 uint32_t temperature_max;         //{ +0x001c    } | .TemperatureMax
        _m05 uint32_t temperature_warning;     //{ +0x0020    } | .TemperatureWarning
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTER_PERFDATACAPS.$", 0x0, false, 0x3341a673f4d642d6 );                       
        SDK_FIXED_SIZE( adapter_perfdatacaps_t, 0x28 );                       
    };                                       
};
#include "magic/adapter_perfdatacaps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adapter_perfdatacaps_t, 0x28 );
