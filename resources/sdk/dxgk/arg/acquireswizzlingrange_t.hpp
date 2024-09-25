#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acquireswizzlingrange_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_ACQUIRESWIZZLINGRANGE]
    // => WDK 10 (NV)
    //
    struct acquireswizzlingrange_t           
    {                                        
        // WDK 10                            
        //                                   
        _m00 void*    h_allocation;            //{ +0x0000    } | .hAllocation
        _m01 uint32_t private_driver_data;     //{ +0x0008    } | .PrivateDriverData
        _m02 uint32_t range_id;                //{ +0x000c    } | .RangeId
        _m03 uint32_t segment_id;              //{ +0x0010    } | .SegmentId
        _m04 uint64_t range_size;              //{ +0x0018    } | .RangeSize
        _m05 int64_t  cpu_translated_address;  //{ +0x0020    } | .CPUTranslatedAddress
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_ACQUIRESWIZZLINGRANGE.$", 0x0, false, 0x47ae6ab16a72ea8d );                       
        SDK_FIXED_SIZE( acquireswizzlingrange_t, 0x28 );                       
    };                                       
};
#include "magic/acquireswizzlingrange_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::acquireswizzlingrange_t, 0x28 );
