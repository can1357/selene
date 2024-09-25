#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/presentmultiplaneoverlaylist_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PRESENTMULTIPLANEOVERLAYLIST]
    // => WDK 10 (NV)
    //
    struct presentmultiplaneoverlaylist_t          
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint32_t layer_index;                   //{ +0x0000    } | .LayerIndex
        _m01 int32_t  enabled;                       //{ +0x0004    } | .Enabled
        _m02 void*    h_device_specific_allocation;  //{ +0x0008    } | .hDeviceSpecificAllocation
        _m03 uint5_t  segment_id;                    //{ +0x0010@0  } | .SegmentId
        _m04 int64_t  physical_address;              //{ +0x0018    } | .PhysicalAddress
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_PRESENTMULTIPLANEOVERLAYLIST.$", 0x0, false, 0x758759055cb02ab5 );                             
        SDK_FIXED_SIZE( presentmultiplaneoverlaylist_t, 0x20 );                             
    };                                             
};
#include "magic/presentmultiplaneoverlaylist_t.end.hpp"
SDK_VERIFY( struct dxgk::presentmultiplaneoverlaylist_t, 0x20 );
