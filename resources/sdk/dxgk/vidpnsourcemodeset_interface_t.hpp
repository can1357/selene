#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt { struct hvidpnsourcemodeset_t; }
namespace d3dk::mdt { struct vidpn_source_mode_t;   }

#include "magic/vidpnsourcemodeset_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIDPNSOURCEMODESET_INTERFACE]
    // => WDK 10 (NV)
    //
    struct vidpnsourcemodeset_interface_t                                                 
    {                                                                                     
        using dxgkddi_vidpnsourcemodeset_getnummodes_t =         sdk::function<int32_t(const struct d3dk::mdt::hvidpnsourcemodeset_t*, uint64_t const*)>*;                             
        using pfn_acquire_first_mode_info_t =                    sdk::function<int32_t(const struct d3dk::mdt::hvidpnsourcemodeset_t*, const struct d3dk::mdt::vidpn_source_mode_t**)>*;                             
        using dxgkddi_vidpnsourcemodeset_acquirenextmodeinfo_t = sdk::function<int32_t(const struct d3dk::mdt::hvidpnsourcemodeset_t*, const struct d3dk::mdt::vidpn_source_mode_t const*, const struct d3dk::mdt::vidpn_source_mode_t**)>*;                             
        using pfn_acquire_next_mode_info_t =                     dxgkddi_vidpnsourcemodeset_acquirenextmodeinfo_t ;                             
        using pfn_acquire_pinned_mode_info_t =                   sdk::function<int32_t(const struct d3dk::mdt::hvidpnsourcemodeset_t*, const struct d3dk::mdt::vidpn_source_mode_t**)>*;                             
        using dxgkddi_vidpnsourcemodeset_releasemodeinfo_t =     sdk::function<int32_t(const struct d3dk::mdt::hvidpnsourcemodeset_t*, const struct d3dk::mdt::vidpn_source_mode_t const*)>*;                             
        using dxgkddi_vidpnsourcemodeset_createnewmodeinfo_t =   sdk::function<int32_t(const struct d3dk::mdt::hvidpnsourcemodeset_t*, struct d3dk::mdt::vidpn_source_mode_t**)>*;                             
        using dxgkddi_vidpnsourcemodeset_addmode_t =             sdk::function<int32_t(struct d3dk::mdt::hvidpnsourcemodeset_t*, struct d3dk::mdt::vidpn_source_mode_t const*)>*;                             
        using dxgkddi_vidpnsourcemodeset_pinmode_t =             sdk::function<int32_t(struct d3dk::mdt::hvidpnsourcemodeset_t*, const uint32_t)>*;                             
                                                                                          
        // WDK 10                                                                         
        //                                                                                
        _m00 dxgkddi_vidpnsourcemodeset_getnummodes_t        pfn_get_num_modes;             //{ +0x0000    } | .pfnGetNumModes
        _m01 pfn_acquire_first_mode_info_t                   pfn_acquire_first_mode_info;   //{ +0x0008    } | .pfnAcquireFirstModeInfo
        _m02 pfn_acquire_next_mode_info_t                    pfn_acquire_next_mode_info;    //{ +0x0010    } | .pfnAcquireNextModeInfo
        _m03 pfn_acquire_pinned_mode_info_t                  pfn_acquire_pinned_mode_info;  //{ +0x0018    } | .pfnAcquirePinnedModeInfo
        _m04 dxgkddi_vidpnsourcemodeset_releasemodeinfo_t    pfn_release_mode_info;         //{ +0x0020    } | .pfnReleaseModeInfo
        _m05 dxgkddi_vidpnsourcemodeset_createnewmodeinfo_t  pfn_create_new_mode_info;      //{ +0x0028    } | .pfnCreateNewModeInfo
        _m06 dxgkddi_vidpnsourcemodeset_addmode_t            pfn_add_mode;                  //{ +0x0030    } | .pfnAddMode
        _m07 dxgkddi_vidpnsourcemodeset_pinmode_t            pfn_pin_mode;                  //{ +0x0038    } | .pfnPinMode
                                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_VIDPNSOURCEMODESET_INTERFACE.$", 0x0, false, 0x983c3677e825b2cc );                             
        SDK_FIXED_SIZE( vidpnsourcemodeset_interface_t, 0x40 );                             
    };                                                                                    
};
#include "magic/vidpnsourcemodeset_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::vidpnsourcemodeset_interface_t, 0x40 );
