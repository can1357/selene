#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi { struct patchlocationlist_t; }
namespace dxgk     { struct allocationlist_t;    }

#include "magic/render_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RENDER]
    // => WDK 10 (NV)
    //
    struct render_t                                                             
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 const void*                           p_command;                     //{ +0x0000    } | .pCommand
        _m01 uint32_t                              command_length;                //{ +0x0008    } | .CommandLength
        _m02 void*                                 p_dma_buffer;                  //{ +0x0010    } | .pDmaBuffer
        _m03 uint32_t                              dma_size;                      //{ +0x0018    } | .DmaSize
        _m04 void*                                 p_dma_buffer_private_data;     //{ +0x0020    } | .pDmaBufferPrivateData
        _m05 uint32_t                              dma_buffer_private_data_size;  //{ +0x0028    } | .DmaBufferPrivateDataSize
        _m06 struct dxgk::allocationlist_t*        p_allocation_list;             //{ +0x0030    } | .pAllocationList
        _m07 uint32_t                              allocation_list_size;          //{ +0x0038    } | .AllocationListSize
        _m08 struct d3d::ddi::patchlocationlist_t* p_patch_location_list_in;      //{ +0x0040    } | .pPatchLocationListIn
        _m09 uint32_t                              patch_location_list_in_size;   //{ +0x0048    } | .PatchLocationListInSize
        _m10 struct d3d::ddi::patchlocationlist_t* p_patch_location_list_out;     //{ +0x0050    } | .pPatchLocationListOut
        _m11 uint32_t                              patch_location_list_out_size;  //{ +0x0058    } | .PatchLocationListOutSize
        _m12 uint32_t                              multipass_offset;              //{ +0x005c    } | .MultipassOffset
        _m13 uint32_t                              dma_buffer_segment_id;         //{ +0x0060    } | .DmaBufferSegmentId
        _m14 int64_t                               dma_buffer_physical_address;   //{ +0x0068    } | .DmaBufferPhysicalAddress
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RENDER.$", 0x0, false, 0xb3d4655439a814fa );                             
        SDK_FIXED_SIZE( render_t, 0x70 );                                       
    };                                                                          
};
#include "magic/render_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::render_t, 0x70 );
