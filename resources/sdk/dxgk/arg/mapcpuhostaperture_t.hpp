#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mapcpuhostaperture_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_MAPCPUHOSTAPERTURE]
    // => WDK 10 (NV)
    //
    struct mapcpuhostaperture_t                  
    {                                            
        // WDK 10                                
        //                                       
        _m00 void*     h_allocation;               //{ +0x0000    } | .hAllocation
        _m01 uint16_t  segment_id;                 //{ +0x0008    } | .SegmentId
        _m02 uint16_t  physical_adapter_index;     //{ +0x000a    } | .PhysicalAdapterIndex
        _m03 uint64_t  number_of_pages;            //{ +0x0010    } | .NumberOfPages
        _m04 uint32_t* p_cpu_host_aperture_pages;  //{ +0x0018    } | .pCpuHostAperturePages
        _m05 uint64_t* p_memory_segment_pages;     //{ +0x0020    } | .pMemorySegmentPages
                                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_MAPCPUHOSTAPERTURE.$", 0x0, false, 0x76d44a40b2ecd39f );                          
        SDK_FIXED_SIZE( mapcpuhostaperture_t, 0x28 );                          
    };                                           
};
#include "magic/mapcpuhostaperture_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::mapcpuhostaperture_t, 0x28 );
