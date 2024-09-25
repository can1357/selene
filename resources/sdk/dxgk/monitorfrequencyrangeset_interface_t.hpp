#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt { struct hmonitorfrequencyrangeset_t; }
namespace d3dk::mdt { struct monitor_frequency_range_t;   }

#include "magic/monitorfrequencyrangeset_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MONITORFREQUENCYRANGESET_INTERFACE]
    // => WDK 10 (NV)
    //
    struct monitorfrequencyrangeset_interface_t                                               
    {                                                                                         
        using dxgkddi_monitorfrequencyrangeset_getnumfrequencyranges_t =          sdk::function<int32_t(const struct d3dk::mdt::hmonitorfrequencyrangeset_t*, uint64_t const*)>*;                                       
        using pfn_get_num_frequency_ranges_t =                                    dxgkddi_monitorfrequencyrangeset_getnumfrequencyranges_t ;                                       
        using dxgkddi_monitorfrequencyrangeset_acquirefirstfrequencyrangeinfo_t = sdk::function<int32_t(const struct d3dk::mdt::hmonitorfrequencyrangeset_t*, const struct d3dk::mdt::monitor_frequency_range_t**)>*;                                       
        using pfn_acquire_first_frequency_range_info_t =                          dxgkddi_monitorfrequencyrangeset_acquirefirstfrequencyrangeinfo_t ;                                       
        using dxgkddi_monitorfrequencyrangeset_acquirenextfrequencyrangeinfo_t =  sdk::function<int32_t(const struct d3dk::mdt::hmonitorfrequencyrangeset_t*, const struct d3dk::mdt::monitor_frequency_range_t const*, const struct d3dk::mdt::monitor_frequency_range_t**)>*;                                       
        using pfn_acquire_next_frequency_range_info_t =                           dxgkddi_monitorfrequencyrangeset_acquirenextfrequencyrangeinfo_t ;                                       
        using dxgkddi_monitorfrequencyrangeset_releasefrequencyrangeinfo_t =      sdk::function<int32_t(const struct d3dk::mdt::hmonitorfrequencyrangeset_t*, const struct d3dk::mdt::monitor_frequency_range_t const*)>*;                                       
        using pfn_release_frequency_range_info_t =                                dxgkddi_monitorfrequencyrangeset_releasefrequencyrangeinfo_t ;                                       
                                                                                              
        // WDK 10                                                                             
        //                                                                                    
        _m00 pfn_get_num_frequency_ranges_t            pfn_get_num_frequency_ranges;            //{ +0x0000    } | .pfnGetNumFrequencyRanges
        _m01 pfn_acquire_first_frequency_range_info_t  pfn_acquire_first_frequency_range_info;  //{ +0x0008    } | .pfnAcquireFirstFrequencyRangeInfo
        _m02 pfn_acquire_next_frequency_range_info_t   pfn_acquire_next_frequency_range_info;   //{ +0x0010    } | .pfnAcquireNextFrequencyRangeInfo
        _m03 pfn_release_frequency_range_info_t        pfn_release_frequency_range_info;        //{ +0x0018    } | .pfnReleaseFrequencyRangeInfo
                                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_MONITORFREQUENCYRANGESET_INTERFACE.$", 0x0, false, 0x4f1d164297c39432 );                                       
        SDK_FIXED_SIZE( monitorfrequencyrangeset_interface_t, 0x20 );                                       
    };                                                                                        
};
#include "magic/monitorfrequencyrangeset_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::monitorfrequencyrangeset_interface_t, 0x20 );
