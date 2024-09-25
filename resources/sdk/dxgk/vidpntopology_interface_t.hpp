#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt { struct hvidpntopology_t;     }
namespace d3dk::mdt { struct vidpn_present_path_t; }

#include "magic/vidpntopology_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIDPNTOPOLOGY_INTERFACE]
    // => WDK 10 (NV)
    //
    struct vidpntopology_interface_t                                                            
    {                                                                                           
        using dxgkddi_vidpntopology_getnumpaths_t =               sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, uint64_t*)>*;                                  
        using dxgkddi_vidpntopology_getnumpathsfromsource_t =     sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const uint32_t, uint64_t*)>*;                                  
        using dxgkddi_vidpntopology_enumpathtargetsfromsource_t = sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const uint32_t, const uint64_t, uint32_t*)>*;                                  
        using pfn_enum_path_targets_from_source_t =               dxgkddi_vidpntopology_enumpathtargetsfromsource_t ;                                  
        using dxgkddi_vidpntopology_getpathsourcefromtarget_t =   sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const uint32_t, uint32_t*)>*;                                  
        using dxgkddi_vidpntopology_acquirepathinfo_t =           sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const uint32_t, const uint32_t, const struct d3dk::mdt::vidpn_present_path_t**)>*;                                  
        using dxgkddi_vidpntopology_acquirefirstpathinfo_t =      sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const struct d3dk::mdt::vidpn_present_path_t**)>*;                                  
        using dxgkddi_vidpntopology_acquirenextpathinfo_t =       sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const struct d3dk::mdt::vidpn_present_path_t const*, const struct d3dk::mdt::vidpn_present_path_t**)>*;                                  
        using dxgkddi_vidpntopology_updatepathsupportinfo_t =     sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const struct d3dk::mdt::vidpn_present_path_t*)>*;                                  
        using dxgkddi_vidpntopology_releasepathinfo_t =           sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const struct d3dk::mdt::vidpn_present_path_t const*)>*;                                  
        using dxgkddi_vidpntopology_createnewpathinfo_t =         sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, struct d3dk::mdt::vidpn_present_path_t**)>*;                                  
        using dxgkddi_vidpntopology_addpath_t =                   sdk::function<int32_t(struct d3dk::mdt::hvidpntopology_t*, struct d3dk::mdt::vidpn_present_path_t*)>*;                                  
        using dxgkddi_vidpntopology_removepath_t =                sdk::function<int32_t(const struct d3dk::mdt::hvidpntopology_t*, const uint32_t, const uint32_t)>*;                                  
                                                                                                
        // WDK 10                                                                               
        //                                                                                      
        _m00 dxgkddi_vidpntopology_getnumpaths_t              pfn_get_num_paths;                  //{ +0x0000    } | .pfnGetNumPaths
        _m01 dxgkddi_vidpntopology_getnumpathsfromsource_t    pfn_get_num_paths_from_source;      //{ +0x0008    } | .pfnGetNumPathsFromSource
        _m02 pfn_enum_path_targets_from_source_t              pfn_enum_path_targets_from_source;  //{ +0x0010    } | .pfnEnumPathTargetsFromSource
        _m03 dxgkddi_vidpntopology_getpathsourcefromtarget_t  pfn_get_path_source_from_target;    //{ +0x0018    } | .pfnGetPathSourceFromTarget
        _m04 dxgkddi_vidpntopology_acquirepathinfo_t          pfn_acquire_path_info;              //{ +0x0020    } | .pfnAcquirePathInfo
        _m05 dxgkddi_vidpntopology_acquirefirstpathinfo_t     pfn_acquire_first_path_info;        //{ +0x0028    } | .pfnAcquireFirstPathInfo
        _m06 dxgkddi_vidpntopology_acquirenextpathinfo_t      pfn_acquire_next_path_info;         //{ +0x0030    } | .pfnAcquireNextPathInfo
        _m07 dxgkddi_vidpntopology_updatepathsupportinfo_t    pfn_update_path_support_info;       //{ +0x0038    } | .pfnUpdatePathSupportInfo
        _m08 dxgkddi_vidpntopology_releasepathinfo_t          pfn_release_path_info;              //{ +0x0040    } | .pfnReleasePathInfo
        _m09 dxgkddi_vidpntopology_createnewpathinfo_t        pfn_create_new_path_info;           //{ +0x0048    } | .pfnCreateNewPathInfo
        _m10 dxgkddi_vidpntopology_addpath_t                  pfn_add_path;                       //{ +0x0050    } | .pfnAddPath
        _m11 dxgkddi_vidpntopology_removepath_t               pfn_remove_path;                    //{ +0x0058    } | .pfnRemovePath
                                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_VIDPNTOPOLOGY_INTERFACE.$", 0x0, false, 0x323d9fe78bbcbaa );                                  
        SDK_FIXED_SIZE( vidpntopology_interface_t, 0x60 );                                      
    };                                                                                          
};
#include "magic/vidpntopology_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::vidpntopology_interface_t, 0x60 );
