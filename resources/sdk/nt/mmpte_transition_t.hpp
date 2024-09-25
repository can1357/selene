#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpte_transition_t.start.hpp"
namespace nt
{
    // [struct _MMPTE_TRANSITION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpte_transition_t               
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                  
        _m00 uint1_t   valid;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
        _m01 uint1_t   write;                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Write
        _m02 uint1_t   io_tracker;            //{ +0x0000@4  +0x0000@3  +0x0000@3  +0x0000@3  } | .IoTracker
        _m03 uint5_t   protection;            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Protection
        _m04 uint1_t   prototype;             //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Prototype
        _m05 uint1_t   transition;            //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Transition
        _m06 varuint_t page_frame_number;     //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PageFrameNumber
                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                  
        _m07 uint1_t   swizzle_bit;           //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .SwizzleBit
                                            
        // Windows 11                       
        //                                  
        _m08 uint1_t   on_standby_lookaside;  //{ +0x0000@2  } | .OnStandbyLookaside
                                            
        SDK_MAGIC_PROPERTIES( "_MMPTE_TRANSITION.$", 0x8, true, 0x8d735b23e3d2729e );                     
        SDK_FIXED_SIZE( mmpte_transition_t, 0x8 );                     
    };                                      
};
#include "magic/mmpte_transition_t.end.hpp"
SDK_VERIFY( struct nt::mmpte_transition_t, 0x8 );
