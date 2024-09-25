#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/width_t.hpp"

namespace cm { struct partial_resource_descriptor_t; }

#include "magic/dma_system_profile_config_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_17]
    // => Windows 10 v1607
    //
    struct dma_system_profile_config_v1_17_t                           
    {                                                                  
        // Windows 10 v1607                                            
        //                                                             
        _m00 uint32_t                                  size;             //{ +0x0000    } | .Size
        _m01 uint8_t                                   demand_mode;      //{ +0x0004    } | .DemandMode
        _m02 uint8_t                                   looped_transfer;  //{ +0x0005    } | .LoopedTransfer
        _m03 enum dma::width_t                         dma_width;        //{ +0x0008    } | .DmaWidth
        _m04 int64_t                                   device_address;   //{ +0x0010    } | .DeviceAddress
        _m05 struct cm::partial_resource_descriptor_t* dma_descriptor;   //{ +0x0018    } | .DmaDescriptor
                                                                       
        SDK_MAGIC_PROPERTIES( "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_17.$", 0x0, false, 0xad70b47110db87e4 );                
        SDK_FIXED_SIZE( dma_system_profile_config_v1_17_t, 0x20 );                
    };                                                                 
};
#include "magic/dma_system_profile_config_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::dma_system_profile_config_v1_17_t, 0x20 );
