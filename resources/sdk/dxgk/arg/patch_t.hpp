#pragma once
#include <sdkgen/support_library.hpp>
#include "../patchflags_t.hpp"

namespace d3d::ddi { struct patchlocationlist_t; }
namespace dxgk     { struct allocationlist_t;    }

#include "magic/patch_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_PATCH]
    // => WDK 10 (NV)
    //
    struct patch_t                                                                                       
    {                                                                                                    
        // WDK 10                                                                                        
        //                                                                                               
        _m00 void*                                       h_device;                                         //{ +0x0000    } | .hDevice
        _m01 void*                                       h_context;                                        //{ +0x0000    } | .hContext
        _m02 uint32_t                                    dma_buffer_segment_id;                            //{ +0x0008    } | .DmaBufferSegmentId
        _m03 int64_t                                     dma_buffer_physical_address;                      //{ +0x0010    } | .DmaBufferPhysicalAddress
        _m04 void*                                       p_dma_buffer;                                     //{ +0x0018    } | .pDmaBuffer
        _m05 uint32_t                                    dma_buffer_size;                                  //{ +0x0020    } | .DmaBufferSize
        _m06 uint32_t                                    dma_buffer_submission_start_offset;               //{ +0x0024    } | .DmaBufferSubmissionStartOffset
        _m07 uint32_t                                    dma_buffer_submission_end_offset;                 //{ +0x0028    } | .DmaBufferSubmissionEndOffset
        _m08 void*                                       p_dma_buffer_private_data;                        //{ +0x0030    } | .pDmaBufferPrivateData
        _m09 uint32_t                                    dma_buffer_private_data_size;                     //{ +0x0038    } | .DmaBufferPrivateDataSize
        _m10 uint32_t                                    dma_buffer_private_data_submission_start_offset;  //{ +0x003c    } | .DmaBufferPrivateDataSubmissionStartOffset
        _m11 uint32_t                                    dma_buffer_private_data_submission_end_offset;    //{ +0x0040    } | .DmaBufferPrivateDataSubmissionEndOffset
        _m12 const struct dxgk::allocationlist_t*        p_allocation_list;                                //{ +0x0048    } | .pAllocationList
        _m13 uint32_t                                    allocation_list_size;                             //{ +0x0050    } | .AllocationListSize
        _m14 const struct d3d::ddi::patchlocationlist_t* p_patch_location_list;                            //{ +0x0058    } | .pPatchLocationList
        _m15 uint32_t                                    patch_location_list_size;                         //{ +0x0060    } | .PatchLocationListSize
        _m16 uint32_t                                    patch_location_list_submission_start;             //{ +0x0064    } | .PatchLocationListSubmissionStart
        _m17 uint32_t                                    patch_location_list_submission_length;            //{ +0x0068    } | .PatchLocationListSubmissionLength
        _m18 uint32_t                                    submission_fence_id;                              //{ +0x006c    } | .SubmissionFenceId
        _m19 struct dxgk::patchflags_t                   flags;                                            //{ +0x0070    } | .Flags
        _m20 uint32_t                                    engine_ordinal;                                   //{ +0x0074    } | .EngineOrdinal
                                                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_PATCH.$", 0x0, false, 0xf1923090f7afd999 );                                                
        SDK_FIXED_SIZE( patch_t, 0x78 );                                                                 
    };                                                                                                   
};
#include "magic/patch_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::patch_t, 0x78 );
