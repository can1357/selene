#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unmapcpuhostaperture_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_UNMAPCPUHOSTAPERTURE]
    // => WDK 10 (NV)
    //
    struct unmapcpuhostaperture_t                
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint64_t  number_of_pages;            //{ +0x0000    } | .NumberOfPages
        _m01 uint32_t* p_cpu_host_aperture_pages;  //{ +0x0008    } | .pCpuHostAperturePages
        _m02 uint16_t  segment_id;                 //{ +0x0010    } | .SegmentId
        _m03 uint16_t  physical_adapter_index;     //{ +0x0012    } | .PhysicalAdapterIndex
                                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_UNMAPCPUHOSTAPERTURE.$", 0x0, false, 0x6c5a0b6829cb95dc );                          
        SDK_FIXED_SIZE( unmapcpuhostaperture_t, 0x18 );                          
    };                                           
};
#include "magic/unmapcpuhostaperture_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::unmapcpuhostaperture_t, 0x18 );
