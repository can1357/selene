#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wow64_ldt_entry_t.start.hpp"
namespace win
{
    // [struct _WOW64_LDT_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wow64_ldt_entry_t                             
    {                                                    
        union u0_high_word_t                             
        {                                                
            struct u4_bytes_t                            
            {                                            
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
                //                                       
                _m02 uint8_t base_mid;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseMid
                _m03 uint8_t flags1;                       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags1
                _m04 uint8_t flags2;                       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags2
                _m05 uint8_t base_hi;                      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .BaseHi
                                                         
                SDK_MAGIC_PROPERTIES( "_WOW64_LDT_ENTRY.HighWord.Bytes.$", 0x4, true, 0x41421f1e07e944d1 );                         
                SDK_FIXED_SIZE( u4_bytes_t, 0x4 );                         
            };                                           
                                                         
            struct u8_bits_t                             
            {                                            
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
                //                                       
                _m07 uint8_t base_mid;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .BaseMid
                _m08 uint5_t type;                         //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Type
                _m09 uint2_t dpl;                          //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .Dpl
                _m10 uint1_t pres;                         //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .Pres
                _m11 uint4_t limit_hi;                     //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .LimitHi
                _m12 uint1_t sys;                          //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .Sys
                _m13 uint1_t reserved_0;                   //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .Reserved_0
                _m14 uint1_t default_big;                  //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .Default_Big
                _m15 uint1_t granularity;                  //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .Granularity
                _m16 uint8_t base_hi;                      //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .BaseHi
                                                         
                SDK_MAGIC_PROPERTIES( "_WOW64_LDT_ENTRY.HighWord.Bits.$", 0x4, true, 0x66de351491aa1279 );                            
                SDK_FIXED_SIZE( u8_bits_t, 0x4 );                            
            };                                           
                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
            //                                           
            _m06 u4_bytes_t              bytes;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bytes
            _m17 u8_bits_t               bits;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bits
                                                         
            SDK_MAGIC_PROPERTIES( "_WOW64_LDT_ENTRY.HighWord.$", 0x4, true, 0x7f15cd3611471882 );                
            SDK_FIXED_SIZE( u0_high_word_t, 0x4 );                
        };                                               
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                               
        _m00 uint16_t                          limit_low;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LimitLow
        _m01 uint16_t                          base_low;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BaseLow
        _m18 u0_high_word_t                    high_word;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HighWord
                                                         
        SDK_MAGIC_PROPERTIES( "_WOW64_LDT_ENTRY.$", 0x8, true, 0x2793e185dcd08ad9 );          
        SDK_FIXED_SIZE( wow64_ldt_entry_t, 0x8 );          
    };                                                   
};
#include "magic/wow64_ldt_entry_t.end.hpp"
SDK_VERIFY( struct win::wow64_ldt_entry_t::u0_high_word_t::u4_bytes_t, 0x4 );
SDK_VERIFY( struct win::wow64_ldt_entry_t::u0_high_word_t::u8_bits_t, 0x4 );
SDK_VERIFY( union win::wow64_ldt_entry_t::u0_high_word_t, 0x4 );
SDK_VERIFY( struct win::wow64_ldt_entry_t, 0x8 );
