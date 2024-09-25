#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_data_set_lb_provisioning_state_v2_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2]
    // => WDK 10 (NV)
    //
    struct device_data_set_lb_provisioning_state_v2_t                  
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 uint32_t                size;                               //{ +0x0000    } | .Size
        _m01 uint32_t                version;                            //{ +0x0004    } | .Version
        _m02 uint64_t                slab_size_in_bytes;                 //{ +0x0008    } | .SlabSizeInBytes
        _m03 uint64_t                slab_offset_delta_in_bytes;         //{ +0x0010    } | .SlabOffsetDeltaInBytes
        _m04 uint32_t                slab_allocation_bit_map_bit_count;  //{ +0x0018    } | .SlabAllocationBitMapBitCount
        _m05 uint32_t                slab_allocation_bit_map_length;     //{ +0x001c    } | .SlabAllocationBitMapLength
        _m06 sdk::array<uint32_t, 1> slab_allocation_bit_map;            //{ +0x0020    } | .SlabAllocationBitMap
                                                                       
        SDK_NONVOL_PROPERTIES( "_DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2.$", 0x0, false, 0xfe8fd5ec8da86dc0 );                                  
        SDK_FIXED_SIZE( device_data_set_lb_provisioning_state_v2_t, 0x28 );                                  
    };                                                                 
};
#include "magic/device_data_set_lb_provisioning_state_v2_t.end.hpp"
SDK_VERIFY( struct nt::device_data_set_lb_provisioning_state_v2_t, 0x28 );
