#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flipoverlay_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_FLIPOVERLAY]
    // => WDK 10 (NV)
    //
    struct flipoverlay_t                       
    {                                          
        // WDK 10                              
        //                                     
        _m00 void*    h_source;                  //{ +0x0000    } | .hSource
        _m01 int64_t  src_physical_address;      //{ +0x0008    } | .SrcPhysicalAddress
        _m02 uint32_t src_segment_id;            //{ +0x0010    } | .SrcSegmentId
        _m03 void*    p_private_driver_data;     //{ +0x0018    } | .pPrivateDriverData
        _m04 uint32_t private_driver_data_size;  //{ +0x0020    } | .PrivateDriverDataSize
                                               
        SDK_NONVOL_PROPERTIES( "_DXGKARG_FLIPOVERLAY.$", 0x0, false, 0x6b1fa57db8669576 );                         
        SDK_FIXED_SIZE( flipoverlay_t, 0x28 );                         
    };                                         
};
#include "magic/flipoverlay_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::flipoverlay_t, 0x28 );
