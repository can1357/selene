#pragma once
#include <sdkgen/support_library.hpp>
#include "../../tag/rect_t.hpp"
#include "../presentflags_t.hpp"
#include "../../d3d/ddi/flipinterval_type_t.hpp"

namespace d3d::ddi { struct patchlocationlist_t;            }
namespace dxgk     { struct allocationlist_t;               }
namespace dxgk     { struct presentallocationinfo_t;        }
namespace dxgk     { struct presentmultiplaneoverlayinfo_t; }

#include "magic/present_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_PRESENT]
    // => WDK 10 (NV)
    //
    struct present_t                                                                         
    {                                                                                        
        // WDK 10                                                                            
        //                                                                                   
        _m00 void*                                        p_dma_buffer;                        //{ +0x0000    } | .pDmaBuffer
        _m01 uint32_t                                     dma_size;                            //{ +0x0008    } | .DmaSize
        _m02 void*                                        p_dma_buffer_private_data;           //{ +0x0010    } | .pDmaBufferPrivateData
        _m03 uint32_t                                     dma_buffer_private_data_size;        //{ +0x0018    } | .DmaBufferPrivateDataSize
        _m04 struct dxgk::allocationlist_t*               p_allocation_list;                   //{ +0x0020    } | .pAllocationList
        _m05 struct dxgk::presentallocationinfo_t*        p_allocation_info;                   //{ +0x0020    } | .pAllocationInfo
        _m06 struct dxgk::presentmultiplaneoverlayinfo_t* p_present_multi_plane_overlay_info;  //{ +0x0020    } | .pPresentMultiPlaneOverlayInfo
        _m07 struct d3d::ddi::patchlocationlist_t*        p_patch_location_list_out;           //{ +0x0028    } | .pPatchLocationListOut
        _m08 uint32_t                                     patch_location_list_out_size;        //{ +0x0030    } | .PatchLocationListOutSize
        _m09 uint32_t                                     multipass_offset;                    //{ +0x0034    } | .MultipassOffset
        _m10 uint32_t                                     color;                               //{ +0x0038    } | .Color
        _m11 struct tag::rect_t                           dst_rect;                            //{ +0x003c    } | .DstRect
        _m12 struct tag::rect_t                           src_rect;                            //{ +0x004c    } | .SrcRect
        _m13 uint32_t                                     sub_rect_cnt;                        //{ +0x005c    } | .SubRectCnt
        _m14 const struct tag::rect_t*                    p_dst_sub_rects;                     //{ +0x0060    } | .pDstSubRects
        _m15 enum d3d::ddi::flipinterval_type_t           flip_interval;                       //{ +0x0068    } | .FlipInterval
        _m16 struct dxgk::presentflags_t                  flags;                               //{ +0x006c    } | .Flags
        _m17 uint32_t                                     dma_buffer_segment_id;               //{ +0x0070    } | .DmaBufferSegmentId
        _m18 int64_t                                      dma_buffer_physical_address;         //{ +0x0078    } | .DmaBufferPhysicalAddress
        _m19 uint64_t                                     dma_buffer_gpu_virtual_address;      //{ +0x0088    } | .DmaBufferGpuVirtualAddress
        _m20 uint32_t                                     num_src_allocations;                 //{ +0x0090    } | .NumSrcAllocations
        _m21 uint32_t                                     num_dst_allocations;                 //{ +0x0094    } | .NumDstAllocations
        _m22 uint32_t                                     private_driver_data_size;            //{ +0x0098    } | .PrivateDriverDataSize
        _m23 void*                                        p_private_driver_data;               //{ +0x00a0    } | .pPrivateDriverData
                                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_PRESENT.$", 0x0, false, 0x89cedc23103ed0bb );                                   
        SDK_FIXED_SIZE( present_t, 0xa8 );                                                   
    };                                                                                       
};
#include "magic/present_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::present_t, 0xa8 );
