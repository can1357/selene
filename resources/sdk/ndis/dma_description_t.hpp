#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/speed_t.hpp"
#include "../dma/width_t.hpp"

#include "magic/dma_description_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_DMA_DESCRIPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_description_t                         
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                           
        _m00 uint8_t           demand_mode;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DemandMode
        _m01 uint8_t           auto_initialize;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .AutoInitialize
        _m02 uint8_t           dma_channel_specified;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DmaChannelSpecified
        _m03 enum dma::width_t dma_width;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DmaWidth
        _m04 enum dma::speed_t dma_speed;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DmaSpeed
        _m05 uint32_t          dma_port;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DmaPort
        _m06 uint32_t          dma_channel;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DmaChannel
                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_DMA_DESCRIPTION.$", 0x14, true, 0xf674a7a0f2dafb69 );                      
        SDK_FIXED_SIZE( dma_description_t, 0x14 );                      
    };                                               
};
#include "magic/dma_description_t.end.hpp"
SDK_VERIFY( struct ndis::dma_description_t, 0x14 );
