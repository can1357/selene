#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/d3cold_aux_power_and_timing_aggregation_info_t.start.hpp"
namespace pci
{
    // [struct _PCI_D3COLD_AUX_POWER_AND_TIMING_AGGREGATION_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct d3cold_aux_power_and_timing_aggregation_info_t                   
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                  
        _m00 struct nt::kevent_t         lock;                                //{ +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint32_t                    core_power_rail_on_request_count;    //{ +0x0018    +0x0020    +0x0018    } | .CorePowerRailOnRequestCount
        _m02 uint32_t                    aggregated_auxiliary_power_request;  //{ +0x001c    +0x0024    +0x001c    } | .AggregatedAuxiliaryPowerRequest
        _m03 uint32_t                    aggregated_perst_delay;              //{ +0x0020    +0x0028    +0x0020    } | .AggregatedPerstDelay
        _m04 nt::list_entry_t            function_list_head;                  //{ +0x0028    +0x0030    +0x0028    } | .FunctionListHead
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m05 struct nt::device_object_t* device_object;                       //{ +0x0018    } | .DeviceObject
                                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_D3COLD_AUX_POWER_AND_TIMING_AGGREGATION_INFO.$", 0x38, true, 0x171554cabf67308f );                                   
        SDK_DYNAMIC_SIZE( d3cold_aux_power_and_timing_aggregation_info_t );                                   
    };                                                                      
};
#include "magic/d3cold_aux_power_and_timing_aggregation_info_t.end.hpp"
