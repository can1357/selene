#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setvideoprotectedregion_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIDEOPROTECTEDREGION]
    // => WDK 10 (NV)
    //
    struct setvideoprotectedregion_t         
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 uint32_t segment_index;           //{ +0x0004    } | .SegmentIndex
        _m02 uint32_t vpr_index;               //{ +0x0008    } | .VprIndex
        _m03 uint64_t current_start_offset;    //{ +0x0010    } | .CurrentStartOffset
        _m04 uint64_t current_size;            //{ +0x0018    } | .CurrentSize
        _m05 uint64_t new_start_offset;        //{ +0x0020    } | .NewStartOffset
        _m06 uint64_t new_size;                //{ +0x0028    } | .NewSize
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIDEOPROTECTEDREGION.$", 0x0, false, 0xc14b5a4bd86380fd );                       
        SDK_FIXED_SIZE( setvideoprotectedregion_t, 0x30 );                       
    };                                       
};
#include "magic/setvideoprotectedregion_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvideoprotectedregion_t, 0x30 );
