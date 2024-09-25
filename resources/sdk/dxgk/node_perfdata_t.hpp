#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/node_perfdata_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_NODE_PERFDATA]
    // => WDK 10 (NV)
    //
    struct node_perfdata_t                   
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint64_t frequency;               //{ +0x0000    } | .Frequency
        _m01 uint64_t max_frequency;           //{ +0x0008    } | .MaxFrequency
        _m02 uint64_t max_frequency_oc;        //{ +0x0010    } | .MaxFrequencyOC
        _m03 uint32_t voltage;                 //{ +0x0018    } | .Voltage
        _m04 uint32_t voltage_max;             //{ +0x001c    } | .VoltageMax
        _m05 uint32_t voltage_max_oc;          //{ +0x0020    } | .VoltageMaxOC
        _m06 uint64_t max_transition_latency;  //{ +0x0024    } | .MaxTransitionLatency
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_NODE_PERFDATA.$", 0x0, false, 0xc9afec392bbf457 );                       
        SDK_FIXED_SIZE( node_perfdata_t, 0x2c );                       
    };                                       
};
#include "magic/node_perfdata_t.end.hpp"
SDK_VERIFY( struct dxgk::node_perfdata_t, 0x2c );
