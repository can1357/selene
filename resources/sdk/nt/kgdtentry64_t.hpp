#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kgdtentry64_t.start.hpp"
namespace nt
{
    // [union _KGDTENTRY64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union kgdtentry64_t                           
    {                                             
        struct u0_bytes_t                         
        {                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                    
            _m02 uint8_t base_middle;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseMiddle
            _m03 uint8_t flags1;                    //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags1
            _m04 uint8_t flags2;                    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags2
            _m05 uint8_t base_high;                 //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .BaseHigh
                                                  
            SDK_MAGIC_PROPERTIES( "_KGDTENTRY64.Bytes.$", 0x4, true, 0xa7a46cdb0c362179 );                         
            SDK_FIXED_SIZE( u0_bytes_t, 0x4 );                         
        };                                        
                                                  
        struct u4_bits_t                          
        {                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                    
            _m07 uint8_t base_middle;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .BaseMiddle
            _m08 uint5_t type;                      //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Type
            _m09 uint2_t dpl;                       //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .Dpl
            _m10 uint1_t present;                   //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .Present
            _m11 uint4_t limit_high;                //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .LimitHigh
            _m12 uint1_t system;                    //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .System
            _m13 uint1_t long_mode;                 //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .LongMode
            _m14 uint1_t default_big;               //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .DefaultBig
            _m15 uint1_t granularity;               //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .Granularity
            _m16 uint8_t base_high;                 //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .BaseHigh
                                                  
            SDK_MAGIC_PROPERTIES( "_KGDTENTRY64.Bits.$", 0x4, true, 0x3a70c0bf2bf94246 );                         
            SDK_FIXED_SIZE( u4_bits_t, 0x4 );                         
        };                                        
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 uint16_t                limit_low;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LimitLow
        _m01 uint16_t                base_low;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BaseLow
        _m06 u0_bytes_t              bytes;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Bytes
        _m17 u4_bits_t               bits;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Bits
        _m18 uint32_t                base_upper;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BaseUpper
        _m19 uint32_t                must_be_zero;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MustBeZero
        _m20 int64_t                 data_low;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataLow
        _m21 int64_t                 data_high;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataHigh
                                                  
        SDK_MAGIC_PROPERTIES( "_KGDTENTRY64.$", 0x10, true, 0x84fe169b071cb45f );             
        SDK_DYNAMIC_SIZE( kgdtentry64_t );             
    };                                            
};
#include "magic/kgdtentry64_t.end.hpp"
SDK_VERIFY( struct nt::kgdtentry64_t::u0_bytes_t, 0x4 );
SDK_VERIFY( struct nt::kgdtentry64_t::u4_bits_t, 0x4 );
