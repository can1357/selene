#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_data_set_topology_id_query_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DATA_SET_TOPOLOGY_ID_QUERY_OUTPUT]
    // => WDK 10 (NV)
    //
    struct device_data_set_topology_id_query_output_t     
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint64_t                topology_range_bytes;  //{ +0x0000    } | .TopologyRangeBytes
        _m01 sdk::array<uint8_t, 16> topology_id;           //{ +0x0008    } | .TopologyId
                                                          
        SDK_NONVOL_PROPERTIES( "_DEVICE_DATA_SET_TOPOLOGY_ID_QUERY_OUTPUT.$", 0x0, false, 0xb0e8d659b8b645df );                     
        SDK_FIXED_SIZE( device_data_set_topology_id_query_output_t, 0x18 );                     
    };                                                    
};
#include "magic/device_data_set_topology_id_query_output_t.end.hpp"
SDK_VERIFY( struct nt::device_data_set_topology_id_query_output_t, 0x18 );
