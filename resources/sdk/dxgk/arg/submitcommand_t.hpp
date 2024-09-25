#pragma once
#include <sdkgen/support_library.hpp>
#include "../submitcommandflags_t.hpp"
#include "../../d3d/ddi/flipinterval_type_t.hpp"

#include "magic/submitcommand_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SUBMITCOMMAND]
    // => WDK 10 (NV)
    //
    struct submitcommand_t                                                                      
    {                                                                                           
        // WDK 10                                                                               
        //                                                                                      
        _m00 void*                              h_device;                                         //{ +0x0000    } | .hDevice
        _m01 void*                              h_context;                                        //{ +0x0000    } | .hContext
        _m02 uint32_t                           dma_buffer_segment_id;                            //{ +0x0008    } | .DmaBufferSegmentId
        _m03 int64_t                            dma_buffer_physical_address;                      //{ +0x0010    } | .DmaBufferPhysicalAddress
        _m04 uint32_t                           dma_buffer_size;                                  //{ +0x0018    } | .DmaBufferSize
        _m05 uint32_t                           dma_buffer_submission_start_offset;               //{ +0x001c    } | .DmaBufferSubmissionStartOffset
        _m06 uint32_t                           dma_buffer_submission_end_offset;                 //{ +0x0020    } | .DmaBufferSubmissionEndOffset
        _m07 void*                              p_dma_buffer_private_data;                        //{ +0x0028    } | .pDmaBufferPrivateData
        _m08 uint32_t                           dma_buffer_private_data_size;                     //{ +0x0030    } | .DmaBufferPrivateDataSize
        _m09 uint32_t                           dma_buffer_private_data_submission_start_offset;  //{ +0x0034    } | .DmaBufferPrivateDataSubmissionStartOffset
        _m10 uint32_t                           dma_buffer_private_data_submission_end_offset;    //{ +0x0038    } | .DmaBufferPrivateDataSubmissionEndOffset
        _m11 uint32_t                           submission_fence_id;                              //{ +0x003c    } | .SubmissionFenceId
        _m12 uint32_t                           vid_pn_source_id;                                 //{ +0x0040    } | .VidPnSourceId
        _m13 enum d3d::ddi::flipinterval_type_t flip_interval;                                    //{ +0x0044    } | .FlipInterval
        _m14 struct dxgk::submitcommandflags_t  flags;                                            //{ +0x0048    } | .Flags
        _m15 uint32_t                           engine_ordinal;                                   //{ +0x004c    } | .EngineOrdinal
        _m16 uint64_t                           dma_buffer_virtual_address;                       //{ +0x0050    } | .DmaBufferVirtualAddress
        _m17 uint32_t                           node_ordinal;                                     //{ +0x0058    } | .NodeOrdinal
                                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SUBMITCOMMAND.$", 0x0, false, 0x380c719452ec7b9b );                                                
        SDK_FIXED_SIZE( submitcommand_t, 0x60 );                                                
    };                                                                                          
};
#include "magic/submitcommand_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::submitcommand_t, 0x60 );
