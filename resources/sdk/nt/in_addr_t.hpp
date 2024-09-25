#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/in_addr_t.start.hpp"
namespace nt
{
    // [struct in_addr]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct in_addr_t                           
    {                                          
        union u0_s_un_t                        
        {                                      
            struct u5_s_un_b_t                 
            {                                  
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
                //                             
                _m00 uint8_t s_b1;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .s_b1
                _m01 uint8_t s_b2;               //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .s_b2
                _m02 uint8_t s_b3;               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .s_b3
                _m03 uint8_t s_b4;               //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .s_b4
                                               
                SDK_NONVOL_PROPERTIES( "in_addr.S_un.S_un_b.$", 0x4, true, 0x13da87b00d47c9f8 );                 
                SDK_FIXED_SIZE( u5_s_un_b_t, 0x4 );                 
            };                                 
                                               
            struct u10_s_un_w_t                
            {                                  
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
                //                             
                _m05 uint16_t s_w1;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .s_w1
                _m06 uint16_t s_w2;              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .s_w2
                                               
                SDK_NONVOL_PROPERTIES( "in_addr.S_un.S_un_w.$", 0x4, true, 0xc0128c771e0520b5 );                 
                SDK_FIXED_SIZE( u10_s_un_w_t, 0x4 );                 
            };                                 
                                               
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
            //                                 
            _m04 u5_s_un_b_t       s_un_b;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .S_un_b
            _m07 u10_s_un_w_t      s_un_w;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .S_un_w
            _m08 uint32_t          s_addr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .S_addr
                                               
            SDK_NONVOL_PROPERTIES( "in_addr.S_un.$", 0x4, true, 0xde7033ea678c05ce );            
            SDK_FIXED_SIZE( u0_s_un_t, 0x4 );            
        };                                     
                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                     
        _m09 u0_s_un_t                    s_un;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .S_un
                                               
        SDK_NONVOL_PROPERTIES( "in_addr.$", 0x4, true, 0xa1f6c69ef183a88e );     
        SDK_FIXED_SIZE( in_addr_t, 0x4 );      
    };                                         
};
#include "magic/in_addr_t.end.hpp"
SDK_VERIFY( struct nt::in_addr_t::u0_s_un_t::u5_s_un_b_t, 0x4 );
SDK_VERIFY( struct nt::in_addr_t::u0_s_un_t::u10_s_un_w_t, 0x4 );
SDK_VERIFY( union nt::in_addr_t::u0_s_un_t, 0x4 );
SDK_VERIFY( struct nt::in_addr_t, 0x4 );
