#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_perfdata_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADAPTER_PERFDATA]
    // => WDK 10 (NV)
    //
    struct adapter_perfdata_t                 
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t physical_adapter_index;   //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 uint64_t memory_frequency;         //{ +0x0008    } | .MemoryFrequency
        _m02 uint64_t max_memory_frequency;     //{ +0x0010    } | .MaxMemoryFrequency
        _m03 uint64_t max_memory_frequency_oc;  //{ +0x0018    } | .MaxMemoryFrequencyOC
        _m04 uint64_t memory_bandwidth;         //{ +0x0020    } | .MemoryBandwidth
        _m05 uint64_t pcie_bandwidth;           //{ +0x0028    } | .PCIEBandwidth
        _m06 uint32_t fan_rpm;                  //{ +0x0030    } | .FanRPM
        _m07 uint32_t power;                    //{ +0x0034    } | .Power
        _m08 uint32_t temperature;              //{ +0x0038    } | .Temperature
        _m09 uint8_t  power_state_override;     //{ +0x003c    } | .PowerStateOverride
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTER_PERFDATA.$", 0x0, false, 0x377fd6d9f6510651 );                        
        SDK_FIXED_SIZE( adapter_perfdata_t, 0x40 );                        
    };                                        
};
#include "magic/adapter_perfdata_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adapter_perfdata_t, 0x40 );
