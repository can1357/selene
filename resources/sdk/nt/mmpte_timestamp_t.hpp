#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpte_timestamp_t.start.hpp"
namespace nt
{
    // [struct _MMPTE_TIMESTAMP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpte_timestamp_t            
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint1_t  must_be_zero;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MustBeZero
        _m01 uint5_t  protection;         //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Protection
        _m02 uint1_t  prototype;          //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Prototype
        _m03 uint1_t  transition;         //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Transition
        _m04 uint4_t  page_file_low;      //{ +0x0000@1  +0x0000@12 +0x0000@12 +0x0000@12 } | .PageFileLow
        _m05 uint32_t global_time_stamp;  //{ +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 } | .GlobalTimeStamp
                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m06 uint1_t  swizzle_bit;        //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .SwizzleBit
                                        
        SDK_MAGIC_PROPERTIES( "_MMPTE_TIMESTAMP.$", 0x8, true, 0xb22c50c24ccbae44 );                  
        SDK_FIXED_SIZE( mmpte_timestamp_t, 0x8 );                  
    };                                  
};
#include "magic/mmpte_timestamp_t.end.hpp"
SDK_VERIFY( struct nt::mmpte_timestamp_t, 0x8 );
