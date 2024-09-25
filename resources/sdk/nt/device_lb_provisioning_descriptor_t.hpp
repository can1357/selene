#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_lb_provisioning_descriptor_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_LB_PROVISIONING_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct device_lb_provisioning_descriptor_t          
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t version;                            //{ +0x0000    } | .Version
        _m01 uint32_t size;                               //{ +0x0004    } | .Size
        _m02 uint1_t  thin_provisioning_enabled;          //{ +0x0008@0  } | .ThinProvisioningEnabled
        _m03 uint1_t  thin_provisioning_read_zeros;       //{ +0x0008@1  } | .ThinProvisioningReadZeros
        _m04 uint3_t  anchor_supported;                   //{ +0x0008@2  } | .AnchorSupported
        _m05 uint1_t  unmap_granularity_alignment_valid;  //{ +0x0008@5  } | .UnmapGranularityAlignmentValid
        _m06 uint64_t optimal_unmap_granularity;          //{ +0x0010    } | .OptimalUnmapGranularity
        _m07 uint64_t unmap_granularity_alignment;        //{ +0x0018    } | .UnmapGranularityAlignment
        _m08 uint32_t max_unmap_lba_count;                //{ +0x0020    } | .MaxUnmapLbaCount
        _m09 uint32_t max_unmap_block_descriptor_count;   //{ +0x0024    } | .MaxUnmapBlockDescriptorCount
                                                        
        SDK_NONVOL_PROPERTIES( "_DEVICE_LB_PROVISIONING_DESCRIPTOR.$", 0x0, false, 0x53b0e3c34b6fbac7 );                                  
        SDK_FIXED_SIZE( device_lb_provisioning_descriptor_t, 0x28 );                                  
    };                                                  
};
#include "magic/device_lb_provisioning_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::device_lb_provisioning_descriptor_t, 0x28 );
