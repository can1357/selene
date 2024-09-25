#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt { struct hmonitordescriptorset_t; }
namespace d3dk::mdt { struct monitor_descriptor_t;    }

#include "magic/monitordescriptorset_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MONITORDESCRIPTORSET_INTERFACE]
    // => WDK 10 (NV)
    //
    struct monitordescriptorset_interface_t                                         
    {                                                                               
        using dxgkddi_monitordescriptorset_getnumdescriptors_t =          sdk::function<int32_t(const struct d3dk::mdt::hmonitordescriptorset_t*, uint64_t const*)>*;                                  
        using pfn_get_num_descriptors_t =                                 dxgkddi_monitordescriptorset_getnumdescriptors_t ;                                  
        using dxgkddi_monitordescriptorset_acquirefirstdescriptorinfo_t = sdk::function<int32_t(const struct d3dk::mdt::hmonitordescriptorset_t*, const struct d3dk::mdt::monitor_descriptor_t**)>*;                                  
        using pfn_acquire_first_descriptor_info_t =                       dxgkddi_monitordescriptorset_acquirefirstdescriptorinfo_t ;                                  
        using dxgkddi_monitordescriptorset_acquirenextdescriptorinfo_t =  sdk::function<int32_t(const struct d3dk::mdt::hmonitordescriptorset_t*, const struct d3dk::mdt::monitor_descriptor_t const*, const struct d3dk::mdt::monitor_descriptor_t**)>*;                                  
        using pfn_acquire_next_descriptor_info_t =                        dxgkddi_monitordescriptorset_acquirenextdescriptorinfo_t ;                                  
        using dxgkddi_monitordescriptorset_releasedescriptorinfo_t =      sdk::function<int32_t(const struct d3dk::mdt::hmonitordescriptorset_t*, const struct d3dk::mdt::monitor_descriptor_t const*)>*;                                  
        using pfn_release_descriptor_info_t =                             dxgkddi_monitordescriptorset_releasedescriptorinfo_t ;                                  
                                                                                    
        // WDK 10                                                                   
        //                                                                          
        _m00 pfn_get_num_descriptors_t            pfn_get_num_descriptors;            //{ +0x0000    } | .pfnGetNumDescriptors
        _m01 pfn_acquire_first_descriptor_info_t  pfn_acquire_first_descriptor_info;  //{ +0x0008    } | .pfnAcquireFirstDescriptorInfo
        _m02 pfn_acquire_next_descriptor_info_t   pfn_acquire_next_descriptor_info;   //{ +0x0010    } | .pfnAcquireNextDescriptorInfo
        _m03 pfn_release_descriptor_info_t        pfn_release_descriptor_info;        //{ +0x0018    } | .pfnReleaseDescriptorInfo
                                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_MONITORDESCRIPTORSET_INTERFACE.$", 0x0, false, 0x8e05bc21de157e1 );                                  
        SDK_FIXED_SIZE( monitordescriptorset_interface_t, 0x20 );                                  
    };                                                                              
};
#include "magic/monitordescriptorset_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::monitordescriptorset_interface_t, 0x20 );
