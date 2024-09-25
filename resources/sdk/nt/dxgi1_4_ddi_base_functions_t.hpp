#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi { struct ddi_arg_blt1_t;                                    }
namespace dxgi { struct ddi_arg_blt_t;                                     }
namespace dxgi { struct ddi_arg_checkmultiplaneoverlaycolorspacesupport_t; }
namespace dxgi { struct ddi_arg_checkpresentdurationsupport_t;             }
namespace dxgi { struct ddi_arg_get_gamma_control_caps_t;                  }
namespace dxgi { struct ddi_arg_getmultiplaneoverlaycaps_t;                }
namespace dxgi { struct ddi_arg_getmultiplaneoverlaygroupcaps_t;           }
namespace dxgi { struct ddi_arg_offerresources_t;                          }
namespace dxgi { struct ddi_arg_present1_t;                                }
namespace dxgi { struct ddi_arg_present_t;                                 }
namespace dxgi { struct ddi_arg_presentmultiplaneoverlay1_t;               }
namespace dxgi { struct ddi_arg_presentmultiplaneoverlay_t;                }
namespace dxgi { struct ddi_arg_queryresourceresidency_t;                  }
namespace dxgi { struct ddi_arg_reclaimresources_t;                        }
namespace dxgi { struct ddi_arg_resolvesharedresource_t;                   }
namespace dxgi { struct ddi_arg_rotate_resource_identities_t;              }
namespace dxgi { struct ddi_arg_setdisplaymode_t;                          }
namespace dxgi { struct ddi_arg_setresourcepriority_t;                     }
namespace dxgi { struct ddi_arg_trimresidencyset_t;                        }

#include "magic/dxgi1_4_ddi_base_functions_t.start.hpp"
namespace nt
{
    // [struct DXGI1_4_DDI_BASE_FUNCTIONS]
    // => WDK 10 (NV)
    //
    struct dxgi1_4_ddi_base_functions_t                                                                           
    {                                                                                                             
        using pfn_present_t =                                      sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*;                                                 
        using pfn_get_gamma_caps_t =                               sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*;                                                 
        using pfn_set_display_mode_t =                             sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*;                                                 
        using pfn_set_resource_priority_t =                        sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*;                                                 
        using pfn_query_resource_residency_t =                     sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*;                                                 
        using pfn_rotate_resource_identities_t =                   sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*;                                                 
        using pfn_blt_t =                                          sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*;                                                 
        using pfn_resolve_shared_resource_t =                      sdk::function<sdk::hresult(struct dxgi::ddi_arg_resolvesharedresource_t*)>*;                                                 
        using pfn_blt1_t =                                         sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt1_t*)>*;                                                 
        using pfn_offer_resources_t =                              sdk::function<sdk::hresult(struct dxgi::ddi_arg_offerresources_t*)>*;                                                 
        using pfn_reclaim_resources_t =                            sdk::function<sdk::hresult(struct dxgi::ddi_arg_reclaimresources_t*)>*;                                                 
        using pfn_get_multiplane_overlay_caps_t =                  sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaycaps_t*)>*;                                                 
        using pfn_get_multiplane_overlay_group_caps_t =            sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaygroupcaps_t*)>*;                                                 
        using pfn_present_multiplane_overlay_t =                   sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay_t*)>*;                                                 
        using pfn_present1_t =                                     sdk::function<sdk::hresult(struct dxgi::ddi_arg_present1_t*)>*;                                                 
        using pfn_check_present_duration_support_t =               sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkpresentdurationsupport_t*)>*;                                                 
        using pfn_trim_residency_set_t =                           sdk::function<sdk::hresult(struct dxgi::ddi_arg_trimresidencyset_t*)>*;                                                 
        using pfn_check_multiplane_overlay_color_space_support_t = sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkmultiplaneoverlaycolorspacesupport_t*)>*;                                                 
        using pfn_present_multiplane_overlay1_t =                  sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay1_t*)>*;                                                 
                                                                                                                  
        // WDK 10                                                                                                 
        //                                                                                                        
        _m00 pfn_present_t                                       pfn_present;                                       //{ +0x0000    } | .pfnPresent
        _m01 pfn_get_gamma_caps_t                                pfn_get_gamma_caps;                                //{ +0x0008    } | .pfnGetGammaCaps
        _m02 pfn_set_display_mode_t                              pfn_set_display_mode;                              //{ +0x0010    } | .pfnSetDisplayMode
        _m03 pfn_set_resource_priority_t                         pfn_set_resource_priority;                         //{ +0x0018    } | .pfnSetResourcePriority
        _m04 pfn_query_resource_residency_t                      pfn_query_resource_residency;                      //{ +0x0020    } | .pfnQueryResourceResidency
        _m05 pfn_rotate_resource_identities_t                    pfn_rotate_resource_identities;                    //{ +0x0028    } | .pfnRotateResourceIdentities
        _m06 pfn_blt_t                                           pfn_blt;                                           //{ +0x0030    } | .pfnBlt
        _m07 pfn_resolve_shared_resource_t                       pfn_resolve_shared_resource;                       //{ +0x0038    } | .pfnResolveSharedResource
        _m08 pfn_blt1_t                                          pfn_blt1;                                          //{ +0x0040    } | .pfnBlt1
        _m09 pfn_offer_resources_t                               pfn_offer_resources;                               //{ +0x0048    } | .pfnOfferResources
        _m10 pfn_reclaim_resources_t                             pfn_reclaim_resources;                             //{ +0x0050    } | .pfnReclaimResources
        _m11 pfn_get_multiplane_overlay_caps_t                   pfn_get_multiplane_overlay_caps;                   //{ +0x0058    } | .pfnGetMultiplaneOverlayCaps
        _m12 pfn_get_multiplane_overlay_group_caps_t             pfn_get_multiplane_overlay_group_caps;             //{ +0x0060    } | .pfnGetMultiplaneOverlayGroupCaps
        _m13 sdk::function<sdk::hresult(void*)>*                 pfn_reserved1;                                     //{ +0x0068    } | .pfnReserved1
        _m14 pfn_present_multiplane_overlay_t                    pfn_present_multiplane_overlay;                    //{ +0x0070    } | .pfnPresentMultiplaneOverlay
        _m15 sdk::function<sdk::hresult(void*)>*                 pfn_reserved2;                                     //{ +0x0078    } | .pfnReserved2
        _m16 pfn_present1_t                                      pfn_present1;                                      //{ +0x0080    } | .pfnPresent1
        _m17 pfn_check_present_duration_support_t                pfn_check_present_duration_support;                //{ +0x0088    } | .pfnCheckPresentDurationSupport
        _m18 pfn_trim_residency_set_t                            pfn_trim_residency_set;                            //{ +0x0090    } | .pfnTrimResidencySet
        _m19 pfn_check_multiplane_overlay_color_space_support_t  pfn_check_multiplane_overlay_color_space_support;  //{ +0x0098    } | .pfnCheckMultiplaneOverlayColorSpaceSupport
        _m20 pfn_present_multiplane_overlay1_t                   pfn_present_multiplane_overlay1;                   //{ +0x00a0    } | .pfnPresentMultiplaneOverlay1
                                                                                                                  
        SDK_NONVOL_PROPERTIES( "DXGI1_4_DDI_BASE_FUNCTIONS.$", 0x0, false, 0x9a0920a436cd3933 );                                                 
        SDK_FIXED_SIZE( dxgi1_4_ddi_base_functions_t, 0xa8 );                                                     
    };                                                                                                            
};
#include "magic/dxgi1_4_ddi_base_functions_t.end.hpp"
SDK_VERIFY( struct nt::dxgi1_4_ddi_base_functions_t, 0xa8 );
