#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/node_perfdata_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_NODE_PERFDATA]
    // => WDK 10 (NV)
    //
    struct node_perfdata_t                   
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t node_ordinal;            //{ +0x0000    } | .NodeOrdinal
        _m01 uint32_t physical_adapter_index;  //{ +0x0004    } | .PhysicalAdapterIndex
        _m02 uint64_t frequency;               //{ +0x0008    } | .Frequency
        _m03 uint64_t max_frequency;           //{ +0x0010    } | .MaxFrequency
        _m04 uint64_t max_frequency_oc;        //{ +0x0018    } | .MaxFrequencyOC
        _m05 uint32_t voltage;                 //{ +0x0020    } | .Voltage
        _m06 uint32_t voltage_max;             //{ +0x0024    } | .VoltageMax
        _m07 uint32_t voltage_max_oc;          //{ +0x0028    } | .VoltageMaxOC
        _m08 uint64_t max_transition_latency;  //{ +0x0030    } | .MaxTransitionLatency
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_NODE_PERFDATA.$", 0x0, false, 0x5f1bc9d4bf5b8726 );                       
        SDK_FIXED_SIZE( node_perfdata_t, 0x38 );                       
    };                                       
};
#include "magic/node_perfdata_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::node_perfdata_t, 0x38 );
