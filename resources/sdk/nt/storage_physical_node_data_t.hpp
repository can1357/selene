#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_physical_node_data_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PHYSICAL_NODE_DATA]
    // => WDK 10 (NV)
    //
    struct storage_physical_node_data_t   
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t node_id;              //{ +0x0000    } | .NodeId
        _m01 uint32_t adapter_count;        //{ +0x0004    } | .AdapterCount
        _m02 uint32_t adapter_data_length;  //{ +0x0008    } | .AdapterDataLength
        _m03 uint32_t adapter_data_offset;  //{ +0x000c    } | .AdapterDataOffset
        _m04 uint32_t device_count;         //{ +0x0010    } | .DeviceCount
        _m05 uint32_t device_data_length;   //{ +0x0014    } | .DeviceDataLength
        _m06 uint32_t device_data_offset;   //{ +0x0018    } | .DeviceDataOffset
                                          
        SDK_NONVOL_PROPERTIES( "_STORAGE_PHYSICAL_NODE_DATA.$", 0x0, false, 0xef7bf4efa9fe36e5 );                    
        SDK_FIXED_SIZE( storage_physical_node_data_t, 0x28 );                    
    };                                    
};
#include "magic/storage_physical_node_data_t.end.hpp"
SDK_VERIFY( struct nt::storage_physical_node_data_t, 0x28 );
