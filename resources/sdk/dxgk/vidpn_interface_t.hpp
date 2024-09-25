#pragma once
#include <sdkgen/support_library.hpp>
#include "vidpn_interface_version_t.hpp"

namespace d3d::ddi  { struct multisamplingmethod_t; }
namespace d3dk::mdt { struct hvidpn_t;              }
namespace d3dk::mdt { struct hvidpnsourcemodeset_t; }
namespace d3dk::mdt { struct hvidpntargetmodeset_t; }
namespace d3dk::mdt { struct hvidpntopology_t;      }

#include "magic/vidpn_interface_t.start.hpp"
namespace dxgk
{
    struct vidpntopology_interface_t;
    struct vidpnsourcemodeset_interface_t;
    struct vidpntargetmodeset_interface_t;

    // [struct _DXGK_VIDPN_INTERFACE]
    // => WDK 10 (NV)
    //
    struct vidpn_interface_t                                                                   
    {                                                                                          
        using dxgkddi_vidpn_gettopology_t =                  sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, struct d3dk::mdt::hvidpntopology_t**, const struct dxgk::vidpntopology_interface_t**)>*;                                    
        using pfn_acquire_source_mode_set_t =                sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const uint32_t, struct d3dk::mdt::hvidpnsourcemodeset_t**, const struct dxgk::vidpnsourcemodeset_interface_t**)>*;                                    
        using dxgkddi_vidpn_releasesourcemodeset_t =         sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const struct d3dk::mdt::hvidpnsourcemodeset_t*)>*;                                    
        using pfn_create_new_source_mode_set_t =             sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const uint32_t, struct d3dk::mdt::hvidpnsourcemodeset_t**, const struct dxgk::vidpnsourcemodeset_interface_t**)>*;                                    
        using dxgkddi_vidpn_assignsourcemodeset_t =          sdk::function<int32_t(struct d3dk::mdt::hvidpn_t*, const uint32_t, const struct d3dk::mdt::hvidpnsourcemodeset_t*)>*;                                    
        using dxgkddi_vidpn_assignmultisamplingmethodset_t = sdk::function<int32_t(struct d3dk::mdt::hvidpn_t*, const uint32_t, const uint64_t, const struct d3d::ddi::multisamplingmethod_t*)>*;                                    
        using pfn_acquire_target_mode_set_t =                sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const uint32_t, struct d3dk::mdt::hvidpntargetmodeset_t**, const struct dxgk::vidpntargetmodeset_interface_t**)>*;                                    
        using dxgkddi_vidpn_releasetargetmodeset_t =         sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const struct d3dk::mdt::hvidpntargetmodeset_t*)>*;                                    
        using pfn_create_new_target_mode_set_t =             sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const uint32_t, struct d3dk::mdt::hvidpntargetmodeset_t**, const struct dxgk::vidpntargetmodeset_interface_t**)>*;                                    
        using dxgkddi_vidpn_assigntargetmodeset_t =          sdk::function<int32_t(struct d3dk::mdt::hvidpn_t*, const uint32_t, const struct d3dk::mdt::hvidpntargetmodeset_t*)>*;                                    
                                                                                               
        // WDK 10                                                                              
        //                                                                                     
        _m00 enum dxgk::vidpn_interface_version_t          version;                              //{ +0x0000    } | .Version
        _m01 dxgkddi_vidpn_gettopology_t                   pfn_get_topology;                     //{ +0x0008    } | .pfnGetTopology
        _m02 pfn_acquire_source_mode_set_t                 pfn_acquire_source_mode_set;          //{ +0x0010    } | .pfnAcquireSourceModeSet
        _m03 dxgkddi_vidpn_releasesourcemodeset_t          pfn_release_source_mode_set;          //{ +0x0018    } | .pfnReleaseSourceModeSet
        _m04 pfn_create_new_source_mode_set_t              pfn_create_new_source_mode_set;       //{ +0x0020    } | .pfnCreateNewSourceModeSet
        _m05 dxgkddi_vidpn_assignsourcemodeset_t           pfn_assign_source_mode_set;           //{ +0x0028    } | .pfnAssignSourceModeSet
        _m06 dxgkddi_vidpn_assignmultisamplingmethodset_t  pfn_assign_multisampling_method_set;  //{ +0x0030    } | .pfnAssignMultisamplingMethodSet
        _m07 pfn_acquire_target_mode_set_t                 pfn_acquire_target_mode_set;          //{ +0x0038    } | .pfnAcquireTargetModeSet
        _m08 dxgkddi_vidpn_releasetargetmodeset_t          pfn_release_target_mode_set;          //{ +0x0040    } | .pfnReleaseTargetModeSet
        _m09 pfn_create_new_target_mode_set_t              pfn_create_new_target_mode_set;       //{ +0x0048    } | .pfnCreateNewTargetModeSet
        _m10 dxgkddi_vidpn_assigntargetmodeset_t           pfn_assign_target_mode_set;           //{ +0x0050    } | .pfnAssignTargetModeSet
                                                                                               
        SDK_NONVOL_PROPERTIES( "_DXGK_VIDPN_INTERFACE.$", 0x0, false, 0xa9bb43b6701b2a44 );                                    
        SDK_FIXED_SIZE( vidpn_interface_t, 0x58 );                                             
    };                                                                                         
};
#include "magic/vidpn_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::vidpn_interface_t, 0x58 );
