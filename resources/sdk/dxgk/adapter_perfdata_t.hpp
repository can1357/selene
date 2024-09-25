#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_perfdata_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ADAPTER_PERFDATA]
    // => WDK 10 (NV)
    //
    struct adapter_perfdata_t                 
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint64_t memory_frequency;         //{ +0x0000    } | .MemoryFrequency
        _m01 uint64_t max_memory_frequency;     //{ +0x0008    } | .MaxMemoryFrequency
        _m02 uint64_t max_memory_frequency_oc;  //{ +0x0010    } | .MaxMemoryFrequencyOC
        _m03 uint64_t memory_bandwidth;         //{ +0x0018    } | .MemoryBandwidth
        _m04 uint64_t pcie_bandwidth;           //{ +0x0020    } | .PCIEBandwidth
        _m05 uint32_t fan_rpm;                  //{ +0x0028    } | .FanRPM
        _m06 uint32_t power;                    //{ +0x002c    } | .Power
        _m07 uint32_t temperature;              //{ +0x0030    } | .Temperature
        _m08 uint8_t  power_state_override;     //{ +0x0034    } | .PowerStateOverride
                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_ADAPTER_PERFDATA.$", 0x0, false, 0x85feec46d8c574b5 );                        
        SDK_FIXED_SIZE( adapter_perfdata_t, 0x35 );                        
    };                                        
};
#include "magic/adapter_perfdata_t.end.hpp"
SDK_VERIFY( struct dxgk::adapter_perfdata_t, 0x35 );
