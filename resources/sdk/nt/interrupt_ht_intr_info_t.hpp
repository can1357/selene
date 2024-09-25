#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interrupt_ht_intr_info_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_HT_INTR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_ht_intr_info_t                                   
    {                                                                 
        union u0_low_part_t                                           
        {                                                             
            struct u4_bits_t                                          
            {                                                         
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
                //                                                    
                _m00 uint1_t mask;                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Mask
                _m01 uint1_t polarity;                                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Polarity
                _m02 uint3_t message_type;                              //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MessageType
                _m03 uint1_t request_eoi;                               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .RequestEOI
                _m04 uint1_t destination_mode;                          //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .DestinationMode
                _m05 uint1_t message_type3;                             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .MessageType3
                _m06 uint8_t destination;                               //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Destination
                _m07 uint8_t vector;                                    //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Vector
                _m08 uint8_t extended_address;                          //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .ExtendedAddress
                                                                      
                SDK_MAGIC_PROPERTIES( "_INTERRUPT_HT_INTR_INFO.LowPart.bits.$", 0x4, true, 0xaea0a4521fb211cf );                                    
                SDK_FIXED_SIZE( u4_bits_t, 0x4 );                                    
            };                                                        
                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
            //                                                        
            _m09 u4_bits_t                    bits;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bits
            _m10 uint32_t                     as_ulong;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                                      
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_HT_INTR_INFO.LowPart.$", 0x4, true, 0x9793c1f990bf6b97 );                   
            SDK_FIXED_SIZE( u0_low_part_t, 0x4 );                     
        };                                                            
                                                                      
        union u8_high_part_t                                          
        {                                                             
            struct u12_bits_t                                         
            {                                                         
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
                //                                                    
                _m12 uint24_t extended_destination;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ExtendedDestination
                _m13 uint1_t  pass_pw;                                  //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .PassPW
                _m14 uint1_t  waiting_for_eoi;                          //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .WaitingForEOI
                                                                      
                SDK_MAGIC_PROPERTIES( "_INTERRUPT_HT_INTR_INFO.HighPart.bits.$", 0x4, true, 0x61b2d693e2fa7315 );                                        
                SDK_FIXED_SIZE( u12_bits_t, 0x4 );                                        
            };                                                        
                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
            //                                                        
            _m15 u12_bits_t                        bits;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bits
            _m16 uint32_t                          as_ulong;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                                      
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_HT_INTR_INFO.HighPart.$", 0x4, true, 0x4dabf55c56c455ff );                   
            SDK_FIXED_SIZE( u8_high_part_t, 0x4 );                    
        };                                                            
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                            
        _m11 u0_low_part_t                                  low_part;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowPart
        _m17 u8_high_part_t                                 high_part;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HighPart
                                                                      
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_HT_INTR_INFO.$", 0x8, true, 0x3ca683843545844 );          
        SDK_FIXED_SIZE( interrupt_ht_intr_info_t, 0x8 );              
    };                                                                
};
#include "magic/interrupt_ht_intr_info_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_ht_intr_info_t::u0_low_part_t::u4_bits_t, 0x4 );
SDK_VERIFY( union nt::interrupt_ht_intr_info_t::u0_low_part_t, 0x4 );
SDK_VERIFY( struct nt::interrupt_ht_intr_info_t::u8_high_part_t::u12_bits_t, 0x4 );
SDK_VERIFY( union nt::interrupt_ht_intr_info_t::u8_high_part_t, 0x4 );
SDK_VERIFY( struct nt::interrupt_ht_intr_info_t, 0x8 );
