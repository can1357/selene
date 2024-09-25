#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"

#include "magic/hv_dma_hybrid_passthrough_reserved_regions_t.start.hpp"
namespace hal
{
    // [struct _HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS]
    // => Windows 11
    //
    struct hv_dma_hybrid_passthrough_reserved_regions_t        
    {                                                          
        // Windows 11                                          
        //                                                     
        _m00 uint64_t                 unit_size_pages;           //{ +0x0000    } | .UnitSizePages
        _m01 struct rtl::bitmap_t     reserved_unit_map;         //{ +0x0008    } | .ReservedUnitMap
        _m02 sdk::array<uint32_t, 16> reserved_unit_map_buffer;  //{ +0x0018    } | .ReservedUnitMapBuffer
                                                               
        SDK_MAGIC_PROPERTIES( "_HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS.$", 0x0, false, 0xaf6027a072ffd42c );                         
        SDK_FIXED_SIZE( hv_dma_hybrid_passthrough_reserved_regions_t, 0x58 );                         
    };                                                         
};
#include "magic/hv_dma_hybrid_passthrough_reserved_regions_t.end.hpp"
SDK_VERIFY( struct hal::hv_dma_hybrid_passthrough_reserved_regions_t, 0x58 );
