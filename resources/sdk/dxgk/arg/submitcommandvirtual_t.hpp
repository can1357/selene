#pragma once
#include <sdkgen/support_library.hpp>
#include "../submitcommandflags_t.hpp"
#include "../../d3d/ddi/flipinterval_type_t.hpp"

#include "magic/submitcommandvirtual_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SUBMITCOMMANDVIRTUAL]
    // => WDK 10 (NV)
    //
    struct submitcommandvirtual_t                                                
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 void*                              h_context;                         //{ +0x0000    } | .hContext
        _m01 uint64_t                           dma_buffer_virtual_address;        //{ +0x0008    } | .DmaBufferVirtualAddress
        _m02 uint32_t                           dma_buffer_size;                   //{ +0x0010    } | .DmaBufferSize
        _m03 void*                              p_dma_buffer_private_data;         //{ +0x0018    } | .pDmaBufferPrivateData
        _m04 uint32_t                           dma_buffer_private_data_size;      //{ +0x0020    } | .DmaBufferPrivateDataSize
        _m05 uint32_t                           dma_buffer_umd_private_data_size;  //{ +0x0024    } | .DmaBufferUmdPrivateDataSize
        _m06 uint32_t                           submission_fence_id;               //{ +0x0028    } | .SubmissionFenceId
        _m07 uint32_t                           vid_pn_source_id;                  //{ +0x002c    } | .VidPnSourceId
        _m08 enum d3d::ddi::flipinterval_type_t flip_interval;                     //{ +0x0030    } | .FlipInterval
        _m09 struct dxgk::submitcommandflags_t  flags;                             //{ +0x0034    } | .Flags
        _m10 uint32_t                           engine_ordinal;                    //{ +0x0038    } | .EngineOrdinal
        _m11 uint32_t                           node_ordinal;                      //{ +0x003c    } | .NodeOrdinal
                                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SUBMITCOMMANDVIRTUAL.$", 0x0, false, 0x9226aff9c1cb7d48 );                                 
        SDK_FIXED_SIZE( submitcommandvirtual_t, 0x40 );                                 
    };                                                                           
};
#include "magic/submitcommandvirtual_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::submitcommandvirtual_t, 0x40 );
