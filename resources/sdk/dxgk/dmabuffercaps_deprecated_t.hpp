#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dmabuffercaps_deprecated_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DMABUFFERCAPS_DEPRECATED]
    // => WDK 10 (NV)
    //
    struct dmabuffercaps_deprecated_t                                 
    {                                                                 
        struct u0_present_dma_buffer_t                                
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m00 uint32_t size;                                         //{ +0x0000    } | .Size
            _m01 uint32_t private_driver_data_size;                     //{ +0x0004    } | .PrivateDriverDataSize
            _m02 uint32_t segment_id;                                   //{ +0x0008    } | .SegmentId
                                                                      
            SDK_NONVOL_PROPERTIES( "_DXGK_DMABUFFERCAPS_DEPRECATED.PresentDmaBuffer.$", 0x0, false, 0x2c251acd014c5b53 );                                            
            SDK_FIXED_SIZE( u0_present_dma_buffer_t, 0x50 );                                            
        };                                                            
                                                                      
        struct u1_paging_dma_buffer_t                                 
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m04 uint32_t size;                                         //{ +0x0000    } | .Size
            _m05 uint32_t private_driver_data_size;                     //{ +0x0004    } | .PrivateDriverDataSize
            _m06 uint32_t segment_id;                                   //{ +0x0008    } | .SegmentId
                                                                      
            SDK_NONVOL_PROPERTIES( "_DXGK_DMABUFFERCAPS_DEPRECATED.PagingDmaBuffer.$", 0x0, false, 0x75151cbed24f9b76 );                                            
            SDK_FIXED_SIZE( u1_paging_dma_buffer_t, 0x50 );                                            
        };                                                            
                                                                      
        // WDK 10                                                     
        //                                                            
        _m03 u0_present_dma_buffer_t               present_dma_buffer;  //{ +0x0000    } | .PresentDmaBuffer
        _m07 u0_present_dma_buffer_t               paging_dma_buffer;   //{ +0x0050    } | .PagingDmaBuffer
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_DMABUFFERCAPS_DEPRECATED.$", 0x0, false, 0x1d40335f690f520e );                   
        SDK_FIXED_SIZE( dmabuffercaps_deprecated_t, 0xa0 );                   
    };                                                                
};
#include "magic/dmabuffercaps_deprecated_t.end.hpp"
SDK_VERIFY( struct dxgk::dmabuffercaps_deprecated_t::u0_present_dma_buffer_t, 0x50 );
SDK_VERIFY( struct dxgk::dmabuffercaps_deprecated_t::u1_paging_dma_buffer_t, 0x50 );
SDK_VERIFY( struct dxgk::dmabuffercaps_deprecated_t, 0xa0 );
