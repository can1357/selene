#pragma once
#include <sdkgen/support_library.hpp>
#include "scatterblts_t.hpp"
#include "dirtyregions_t.hpp"
#include "../../nt/luid_t.hpp"
#include "../../tag/rect_t.hpp"
#include "../../tag/point_t.hpp"
#include "../../d3d/ddi/rotation_t.hpp"
#include "../../d3d/ddi/color_space_type_t.hpp"
#include "../../d3d/ddi/flipinterval_type_t.hpp"
#include "../../d3d/ddi/hdr_metadata_type_t.hpp"
#include "../../d3d/ddi/hdr_metadata_hdr10_t.hpp"
#include "flipmodel_presenthistorytokenflags_t.hpp"
#include "../../d3d/ddi/hdr_metadata_hdr10plus_t.hpp"

#include "magic/flipmodel_presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct flipmodel_presenthistorytoken_t                                            
    {                                                                                 
        using flags_t = struct d3dk::mt::flipmodel_presenthistorytokenflags_t;                              
                                                                                      
        // WDK 10                                                                     
        //                                                                            
        _m000 uint64_t                                  fence_value;                    //{ +0x0000    } | .FenceValue
        _m001 uint64_t                                  h_logical_surface;              //{ +0x0008    } | .hLogicalSurface
        _m002 uint64_t                                  dxg_context;                    //{ +0x0010    } | .dxgContext
        _m003 uint32_t                                  vid_pn_source_id;               //{ +0x0018    } | .VidPnSourceId
        _m004 uint32_t                                  swap_chain_index;               //{ +0x001c    } | .SwapChainIndex
        _m005 uint64_t                                  present_limit_semaphore_id;     //{ +0x0020    } | .PresentLimitSemaphoreId
        _m006 enum d3d::ddi::flipinterval_type_t        flip_interval;                  //{ +0x0028    } | .FlipInterval
        _m007 flags_t                                   flags;                          //{ +0x002c    } | .Flags
        _m008 int64_t                                   h_comp_surf;                    //{ +0x0030    } | .hCompSurf
        _m009 struct nt::luid_t                         comp_surf_luid;                 //{ +0x0038    } | .compSurfLuid
        _m010 uint64_t                                  confirmation_cookie;            //{ +0x0040    } | .confirmationCookie
        _m011 uint64_t                                  composition_sync_key;           //{ +0x0048    } | .CompositionSyncKey
        _m012 uint32_t                                  remaining_tokens;               //{ +0x0050    } | .RemainingTokens
        _m013 struct tag::rect_t                        scroll_rect;                    //{ +0x0054    } | .ScrollRect
        _m014 struct tag::point_t                       scroll_offset;                  //{ +0x0064    } | .ScrollOffset
        _m015 uint32_t                                  present_count;                  //{ +0x006c    } | .PresentCount
        _m016 sdk::array<float, 4>                      reveal_color;                   //{ +0x0070    } | .RevealColor
        _m017 enum d3d::ddi::rotation_t                 rotation;                       //{ +0x0080    } | .Rotation
        _m018 struct d3dk::mt::scatterblts_t            scatter_blts;                   //{ +0x0088    } | .ScatterBlts
        _m019 void*                                     h_sync_object;                  //{ +0x0088    } | .hSyncObject
        _m020 enum d3d::ddi::hdr_metadata_type_t        hdr_meta_data_type;             //{ +0x0090    } | .HDRMetaDataType
        _m021 struct d3d::ddi::hdr_metadata_hdr10_t     hdr_meta_data_hdr10;            //{ +0x0094    } | .HDRMetaDataHDR10
        _m022 struct d3d::ddi::hdr_metadata_hdr10plus_t hdr_meta_data_hdr10_plus;       //{ +0x0094    } | .HDRMetaDataHDR10Plus
        _m023 struct tag::rect_t                        source_rect;                    //{ +0x02d4    } | .SourceRect
        _m024 uint32_t                                  dest_width;                     //{ +0x02e4    } | .DestWidth
        _m025 uint32_t                                  dest_height;                    //{ +0x02e8    } | .DestHeight
        _m026 struct tag::rect_t                        target_rect;                    //{ +0x02ec    } | .TargetRect
        _m027 sdk::array<float, 6>                      transform;                      //{ +0x02fc    } | .Transform
        _m028 uint32_t                                  custom_duration;                //{ +0x0314    } | .CustomDuration
        _m029 enum d3d::ddi::flipinterval_type_t        custom_duration_flip_interval;  //{ +0x0318    } | .CustomDurationFlipInterval
        _m030 uint32_t                                  plane_index;                    //{ +0x031c    } | .PlaneIndex
        _m031 enum d3d::ddi::color_space_type_t         color_space;                    //{ +0x0320    } | .ColorSpace
        _m032 struct d3dk::mt::dirtyregions_t           dirty_regions;                  //{ +0x0324    } | .DirtyRegions
                                                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.$", 0x0, false, 0x3feda67bc8f313b5 );                              
        SDK_FIXED_SIZE( flipmodel_presenthistorytoken_t, 0x428 );                              
    };                                                                                
};
#include "magic/flipmodel_presenthistorytoken_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::flipmodel_presenthistorytoken_t, 0x428 );
