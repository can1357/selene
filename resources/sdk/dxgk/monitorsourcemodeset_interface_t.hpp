#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt { struct hmonitorsourcemodeset_t; }
namespace d3dk::mdt { struct monitor_source_mode_t;   }

#include "magic/monitorsourcemodeset_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MONITORSOURCEMODESET_INTERFACE]
    // => WDK 10 (NV)
    //
    struct monitorsourcemodeset_interface_t                                                  
    {                                                                                        
        using dxgkddi_monitorsourcemodeset_getnummodes_t =         sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, uint64_t const*)>*;                                
        using pfn_acquire_preferred_mode_info_t =                  sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, const struct d3dk::mdt::monitor_source_mode_t**)>*;                                
        using pfn_acquire_first_mode_info_t =                      sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, const struct d3dk::mdt::monitor_source_mode_t**)>*;                                
        using dxgkddi_monitorsourcemodeset_acquirenextmodeinfo_t = sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, const struct d3dk::mdt::monitor_source_mode_t const*, const struct d3dk::mdt::monitor_source_mode_t**)>*;                                
        using pfn_acquire_next_mode_info_t =                       dxgkddi_monitorsourcemodeset_acquirenextmodeinfo_t ;                                
        using dxgkddi_monitorsourcemodeset_createnewmodeinfo_t =   sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, struct d3dk::mdt::monitor_source_mode_t**)>*;                                
        using pfn_create_new_mode_info_t =                         dxgkddi_monitorsourcemodeset_createnewmodeinfo_t ;                                
        using dxgkddi_monitorsourcemodeset_addmode_t =             sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, struct d3dk::mdt::monitor_source_mode_t const*)>*;                                
        using dxgkddi_monitorsourcemodeset_releasemodeinfo_t =     sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, const struct d3dk::mdt::monitor_source_mode_t const*)>*;                                
                                                                                             
        // WDK 10                                                                            
        //                                                                                   
        _m00 dxgkddi_monitorsourcemodeset_getnummodes_t      pfn_get_num_modes;                //{ +0x0000    } | .pfnGetNumModes
        _m01 pfn_acquire_preferred_mode_info_t               pfn_acquire_preferred_mode_info;  //{ +0x0008    } | .pfnAcquirePreferredModeInfo
        _m02 pfn_acquire_first_mode_info_t                   pfn_acquire_first_mode_info;      //{ +0x0010    } | .pfnAcquireFirstModeInfo
        _m03 pfn_acquire_next_mode_info_t                    pfn_acquire_next_mode_info;       //{ +0x0018    } | .pfnAcquireNextModeInfo
        _m04 pfn_create_new_mode_info_t                      pfn_create_new_mode_info;         //{ +0x0020    } | .pfnCreateNewModeInfo
        _m05 dxgkddi_monitorsourcemodeset_addmode_t          pfn_add_mode;                     //{ +0x0028    } | .pfnAddMode
        _m06 dxgkddi_monitorsourcemodeset_releasemodeinfo_t  pfn_release_mode_info;            //{ +0x0030    } | .pfnReleaseModeInfo
                                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_MONITORSOURCEMODESET_INTERFACE.$", 0x0, false, 0x171cb63588c35945 );                                
        SDK_FIXED_SIZE( monitorsourcemodeset_interface_t, 0x38 );                                
    };                                                                                       
};
#include "magic/monitorsourcemodeset_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::monitorsourcemodeset_interface_t, 0x38 );
