#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi { struct patchlocationlist_t; }
namespace dxgk     { struct allocationlist_t;    }

#include "magic/cancelcommand_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CANCELCOMMAND]
    // => WDK 10 (NV)
    //
    struct cancelcommand_t                                                                               
    {                                                                                                    
        // WDK 10                                                                                        
        //                                                                                               
        _m00 void*                                       h_context;                                        //{ +0x0000    } | .hContext
        _m01 void*                                       p_dma_buffer;                                     //{ +0x0008    } | .pDmaBuffer
        _m02 uint32_t                                    dma_buffer_size;                                  //{ +0x0010    } | .DmaBufferSize
        _m03 uint32_t                                    dma_buffer_submission_start_offset;               //{ +0x0014    } | .DmaBufferSubmissionStartOffset
        _m04 uint32_t                                    dma_buffer_submission_end_offset;                 //{ +0x0018    } | .DmaBufferSubmissionEndOffset
        _m05 void*                                       p_dma_buffer_private_data;                        //{ +0x0020    } | .pDmaBufferPrivateData
        _m06 uint32_t                                    dma_buffer_private_data_size;                     //{ +0x0028    } | .DmaBufferPrivateDataSize
        _m07 uint32_t                                    dma_buffer_private_data_submission_start_offset;  //{ +0x002c    } | .DmaBufferPrivateDataSubmissionStartOffset
        _m08 uint32_t                                    dma_buffer_private_data_submission_end_offset;    //{ +0x0030    } | .DmaBufferPrivateDataSubmissionEndOffset
        _m09 const struct dxgk::allocationlist_t*        p_allocation_list;                                //{ +0x0038    } | .pAllocationList
        _m10 uint32_t                                    allocation_list_size;                             //{ +0x0040    } | .AllocationListSize
        _m11 const struct d3d::ddi::patchlocationlist_t* p_patch_location_list;                            //{ +0x0048    } | .pPatchLocationList
        _m12 uint32_t                                    patch_location_list_size;                         //{ +0x0050    } | .PatchLocationListSize
        _m13 uint32_t                                    patch_location_list_submission_start;             //{ +0x0054    } | .PatchLocationListSubmissionStart
        _m14 uint32_t                                    patch_location_list_submission_length;            //{ +0x0058    } | .PatchLocationListSubmissionLength
        _m15 uint64_t                                    dma_buffer_virtual_address;                       //{ +0x0060    } | .DmaBufferVirtualAddress
        _m16 uint32_t                                    dma_buffer_umd_private_data_size;                 //{ +0x0068    } | .DmaBufferUmdPrivateDataSize
                                                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CANCELCOMMAND.$", 0x0, false, 0xab0320aeaf6b731f );                                                
        SDK_FIXED_SIZE( cancelcommand_t, 0x70 );                                                         
    };                                                                                                   
};
#include "magic/cancelcommand_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cancelcommand_t, 0x70 );
