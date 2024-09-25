#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segmentpreference_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_SEGMENTPREFERENCE]
    // => WDK 10 (NV)
    //
    struct segmentpreference_t    
    {                             
        // WDK 10                 
        //                        
        _m00 uint5_t  segment_id0;  //{ +0x0000@0  } | .SegmentId0
        _m01 uint1_t  direction0;   //{ +0x0000@5  } | .Direction0
        _m02 uint5_t  segment_id1;  //{ +0x0000@6  } | .SegmentId1
        _m03 uint1_t  direction1;   //{ +0x0000@11 } | .Direction1
        _m04 uint5_t  segment_id2;  //{ +0x0000@12 } | .SegmentId2
        _m05 uint1_t  direction2;   //{ +0x0000@17 } | .Direction2
        _m06 uint5_t  segment_id3;  //{ +0x0000@18 } | .SegmentId3
        _m07 uint1_t  direction3;   //{ +0x0000@23 } | .Direction3
        _m08 uint5_t  segment_id4;  //{ +0x0000@24 } | .SegmentId4
        _m09 uint1_t  direction4;   //{ +0x0000@29 } | .Direction4
        _m10 uint32_t value;        //{ +0x0000    } | .Value
                                  
        SDK_NONVOL_PROPERTIES( "_D3DDDI_SEGMENTPREFERENCE.$", 0x0, false, 0xc044315555fdb254 );            
        SDK_FIXED_SIZE( segmentpreference_t, 0x4 );            
    };                            
};
#include "magic/segmentpreference_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::segmentpreference_t, 0x4 );
