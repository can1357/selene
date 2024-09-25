#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getcaptureaddress_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_GETCAPTUREADDRESS]
    // => WDK 10 (NV)
    //
    struct getcaptureaddress_t         
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t h_allocation;      //{ +0x0000    } | .hAllocation
        _m01 uint32_t segment_id;        //{ +0x0004    } | .SegmentId
        _m02 int64_t  physical_address;  //{ +0x0008    } | .PhysicalAddress
                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_GETCAPTUREADDRESS.$", 0x0, false, 0x2707b68d7bee5c64 );                 
        SDK_FIXED_SIZE( getcaptureaddress_t, 0x10 );                 
    };                                 
};
#include "magic/getcaptureaddress_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::getcaptureaddress_t, 0x10 );
