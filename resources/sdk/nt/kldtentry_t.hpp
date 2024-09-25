#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kldtentry_t.start.hpp"
namespace nt
{
    // [struct _KLDTENTRY]
    // => Windows 10 v1607
    //
    struct kldtentry_t                                   
    {                                                    
        union u0_high_word_t                             
        {                                                
            struct u1_bytes_t                            
            {                                            
                // Windows 10 v1607                         
                //                                       
                _m02 uint8_t base_mid;                     //{ +0x0000    } | .BaseMid
                _m03 uint8_t flags1;                       //{ +0x0001    } | .Flags1
                _m04 uint8_t flags2;                       //{ +0x0002    } | .Flags2
                _m05 uint8_t base_hi;                      //{ +0x0003    } | .BaseHi
                                                         
                SDK_MAGIC_PROPERTIES( "_KLDTENTRY.HighWord.Bytes.$", 0x0, false, 0x17325717ac4dad8c );                         
                SDK_FIXED_SIZE( u1_bytes_t, 0x4 );                         
            };                                           
                                                         
            struct u2_bits_t                             
            {                                            
                // Windows 10 v1607                            
                //                                       
                _m07 uint8_t base_mid;                     //{ +0x0000@0  } | .BaseMid
                _m08 uint5_t type;                         //{ +0x0000@8  } | .Type
                _m09 uint2_t dpl;                          //{ +0x0000@13 } | .Dpl
                _m10 uint1_t pres;                         //{ +0x0000@15 } | .Pres
                _m11 uint4_t limit_hi;                     //{ +0x0000@16 } | .LimitHi
                _m12 uint1_t sys;                          //{ +0x0000@20 } | .Sys
                _m13 uint1_t reserved_0;                   //{ +0x0000@21 } | .Reserved_0
                _m14 uint1_t default_big;                  //{ +0x0000@22 } | .Default_Big
                _m15 uint1_t granularity;                  //{ +0x0000@23 } | .Granularity
                _m16 uint8_t base_hi;                      //{ +0x0000@24 } | .BaseHi
                                                         
                SDK_MAGIC_PROPERTIES( "_KLDTENTRY.HighWord.Bits.$", 0x0, false, 0xef2763e003a50986 );                            
                SDK_FIXED_SIZE( u2_bits_t, 0x4 );                            
            };                                           
                                                         
            // Windows 10 v1607                          
            //                                           
            _m06 u1_bytes_t              bytes;            //{ +0x0000    } | .Bytes
            _m17 u2_bits_t               bits;             //{ +0x0000    } | .Bits
                                                         
            SDK_MAGIC_PROPERTIES( "_KLDTENTRY.HighWord.$", 0x0, false, 0xc1299a56cf89e52f );                
            SDK_FIXED_SIZE( u0_high_word_t, 0x4 );                
        };                                               
                                                         
        // Windows 10 v1607                              
        //                                               
        _m00 uint16_t                          limit_low;  //{ +0x0000    } | .LimitLow
        _m01 uint16_t                          base_low;   //{ +0x0002    } | .BaseLow
        _m18 u0_high_word_t                    high_word;  //{ +0x0004    } | .HighWord
                                                         
        SDK_MAGIC_PROPERTIES( "_KLDTENTRY.$", 0x0, false, 0x4c1b39bd5a4d7195 );          
        SDK_FIXED_SIZE( kldtentry_t, 0x8 );              
    };                                                   
};
#include "magic/kldtentry_t.end.hpp"
SDK_VERIFY( struct nt::kldtentry_t::u0_high_word_t::u1_bytes_t, 0x4 );
SDK_VERIFY( struct nt::kldtentry_t::u0_high_word_t::u2_bits_t, 0x4 );
SDK_VERIFY( union nt::kldtentry_t::u0_high_word_t, 0x4 );
SDK_VERIFY( struct nt::kldtentry_t, 0x8 );
