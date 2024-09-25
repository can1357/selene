#pragma once
#include <sdkgen/support_library.hpp>
#include "monitor_interface_version_t.hpp"

namespace d3dk::mdt { struct hmonitordescriptorset_t;     }
namespace d3dk::mdt { struct hmonitorfrequencyrangeset_t; }
namespace d3dk::mdt { struct hmonitorsourcemodeset_t;     }

#include "magic/monitor_interface_v2_t.start.hpp"
namespace dxgk
{
    struct targetmode_detail_timing_t;
    struct monitordescriptorset_interface_t;
    struct monitorsourcemodeset_interface_t;
    struct monitorfrequencyrangeset_interface_t;

    // [struct _DXGK_MONITOR_INTERFACE_V2]
    // => WDK 10 (NV)
    //
    struct monitor_interface_v2_t                                                                   
    {                                                                                               
        using dxgkddi_monitor_acquiremonitorsourcemodeset_t =     sdk::function<int32_t(const void*, const uint32_t, struct d3dk::mdt::hmonitorsourcemodeset_t**, const struct dxgk::monitorsourcemodeset_interface_t**)>*;                                        
        using dxgkddi_monitor_releasemonitorsourcemodeset_t =     sdk::function<int32_t(const void*, const struct d3dk::mdt::hmonitorsourcemodeset_t*)>*;                                        
        using dxgkddi_monitor_getmonitorfrequencyrangeset_t =     sdk::function<int32_t(const void*, const uint32_t, struct d3dk::mdt::hmonitorfrequencyrangeset_t**, const struct dxgk::monitorfrequencyrangeset_interface_t**)>*;                                        
        using dxgkddi_monitor_getmonitordescriptorset_t =         sdk::function<int32_t(const void*, const uint32_t, struct d3dk::mdt::hmonitordescriptorset_t**, const struct dxgk::monitordescriptorset_interface_t**)>*;                                        
        using dxgkddi_monitor_getadditionalmonitormodeset_t =     sdk::function<int32_t(const void*, const uint32_t, uint32_t*, struct dxgk::targetmode_detail_timing_t**)>*;                                        
        using dxgkddi_monitor_releaseadditionalmonitormodeset_t = sdk::function<int32_t(const void*, const uint32_t, const struct dxgk::targetmode_detail_timing_t*)>*;                                        
        using pfn_release_additional_monitor_mode_set_t =         dxgkddi_monitor_releaseadditionalmonitormodeset_t ;                                        
                                                                                                    
        // WDK 10                                                                                   
        //                                                                                          
        _m00 enum dxgk::monitor_interface_version_t         version;                                  //{ +0x0000    } | .Version
        _m01 dxgkddi_monitor_acquiremonitorsourcemodeset_t  pfn_acquire_monitor_source_mode_set;      //{ +0x0008    } | .pfnAcquireMonitorSourceModeSet
        _m02 dxgkddi_monitor_releasemonitorsourcemodeset_t  pfn_release_monitor_source_mode_set;      //{ +0x0010    } | .pfnReleaseMonitorSourceModeSet
        _m03 dxgkddi_monitor_getmonitorfrequencyrangeset_t  pfn_get_monitor_frequency_range_set;      //{ +0x0018    } | .pfnGetMonitorFrequencyRangeSet
        _m04 dxgkddi_monitor_getmonitordescriptorset_t      pfn_get_monitor_descriptor_set;           //{ +0x0020    } | .pfnGetMonitorDescriptorSet
        _m05 dxgkddi_monitor_getadditionalmonitormodeset_t  pfn_get_additional_monitor_mode_set;      //{ +0x0028    } | .pfnGetAdditionalMonitorModeSet
        _m06 pfn_release_additional_monitor_mode_set_t      pfn_release_additional_monitor_mode_set;  //{ +0x0030    } | .pfnReleaseAdditionalMonitorModeSet
                                                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_MONITOR_INTERFACE_V2.$", 0x0, false, 0x2242b9fec382949b );                                        
        SDK_FIXED_SIZE( monitor_interface_v2_t, 0x38 );                                             
    };                                                                                              
};
#include "magic/monitor_interface_v2_t.end.hpp"
SDK_VERIFY( struct dxgk::monitor_interface_v2_t, 0x38 );
