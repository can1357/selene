#pragma once
#include <sdkgen/support_library.hpp>
#include "presentflags_t.hpp"
#include "../../tag/rect_t.hpp"
#include "presenthistorytoken_t.hpp"
#include "../../d3d/ddi/flipinterval_type_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/present_t.start.hpp"
namespace d3dk::mt
{
    struct present_rgns_t;

    // [struct _D3DKMT_PRESENT]
    // => WDK 10 (NV)
    //
    struct present_t                                                            
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m000 uint32_t                               h_device;                    //{ +0x0000    } | .hDevice
        _m001 uint32_t                               h_context;                   //{ +0x0000    } | .hContext
        _m002 struct win::hwnd_t*                    h_window;                    //{ +0x0008    } | .hWindow
        _m003 uint32_t                               vid_pn_source_id;            //{ +0x0010    } | .VidPnSourceId
        _m004 uint32_t                               h_source;                    //{ +0x0014    } | .hSource
        _m005 uint32_t                               h_destination;               //{ +0x0018    } | .hDestination
        _m006 uint32_t                               color;                       //{ +0x001c    } | .Color
        _m007 struct tag::rect_t                     dst_rect;                    //{ +0x0020    } | .DstRect
        _m008 struct tag::rect_t                     src_rect;                    //{ +0x0030    } | .SrcRect
        _m009 uint32_t                               sub_rect_cnt;                //{ +0x0040    } | .SubRectCnt
        _m010 const struct tag::rect_t*              p_src_sub_rects;             //{ +0x0048    } | .pSrcSubRects
        _m011 uint32_t                               present_count;               //{ +0x0050    } | .PresentCount
        _m012 enum d3d::ddi::flipinterval_type_t     flip_interval;               //{ +0x0054    } | .FlipInterval
        _m013 struct d3dk::mt::presentflags_t        flags;                       //{ +0x0058    } | .Flags
        _m014 uint32_t                               broadcast_context_count;     //{ +0x005c    } | .BroadcastContextCount
        _m015 sdk::array<uint32_t, 64>               broadcast_context;           //{ +0x0060    } | .BroadcastContext
        _m016 void*                                  present_limit_semaphore;     //{ +0x0160    } | .PresentLimitSemaphore
        _m017 struct d3dk::mt::presenthistorytoken_t present_history_token;       //{ +0x0168    } | .PresentHistoryToken
        _m018 struct d3dk::mt::present_rgns_t*       p_present_regions;           //{ +0x05a0    } | .pPresentRegions
        _m019 uint32_t                               h_adapter;                   //{ +0x05a8    } | .hAdapter
        _m020 uint32_t                               h_indirect_context;          //{ +0x05a8    } | .hIndirectContext
        _m021 uint32_t                               duration;                    //{ +0x05ac    } | .Duration
        _m022 uint32_t*                              broadcast_src_allocation;    //{ +0x05b0    } | .BroadcastSrcAllocation
        _m023 uint32_t*                              broadcast_dst_allocation;    //{ +0x05b8    } | .BroadcastDstAllocation
        _m024 uint32_t                               private_driver_data_size;    //{ +0x05c0    } | .PrivateDriverDataSize
        _m025 void*                                  p_private_driver_data;       //{ +0x05c8    } | .pPrivateDriverData
        _m026 uint8_t                                b_optimize_for_composition;  //{ +0x05d0    } | .bOptimizeForComposition
                                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT.$", 0x0, false, 0xfbd27a07ad78f7ad );                           
        SDK_FIXED_SIZE( present_t, 0x5d8 );                                     
    };                                                                          
};
#include "magic/present_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_t, 0x5d8 );
