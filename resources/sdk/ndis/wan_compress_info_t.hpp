#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wan_compress_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_COMPRESS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_compress_info_t                                      
    {                                                               
        struct u0_proprietary_t                                     
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                      
            _m04 sdk::array<uint8_t, 3>  comp_oui;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CompOUI
            _m05 uint8_t                 comp_sub_type;               //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .CompSubType
            _m06 sdk::array<uint8_t, 32> comp_values;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CompValues
                                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_WAN_COMPRESS_INFO.Proprietary.$", 0x24, true, 0xdb3ed305de12bad3 );                           
            SDK_FIXED_SIZE( u0_proprietary_t, 0x24 );                           
        };                                                          
                                                                    
        struct u4__public_t                                         
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                                      
            _m08 sdk::array<uint8_t, 32> comp_values;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CompValues
                                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_WAN_COMPRESS_INFO.Public.$", 0x20, true, 0x5de90547ac363317 );                         
            SDK_FIXED_SIZE( u4__public_t, 0x20 );                         
        };                                                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                          
        _m00 sdk::array<uint8_t, 8>                    session_key;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionKey
        _m01 uint32_t                                  ms_comp_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MSCompType
        _m02 uint8_t                                   comp_type;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CompType
        _m03 uint16_t                                  comp_length;   //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .CompLength
        _m07 u0_proprietary_t                          proprietary;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Proprietary
        _m09 u4__public_t                              _public;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Public
                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_COMPRESS_INFO.$", 0x34, true, 0x4e2739d8403f3e48 );             
        SDK_FIXED_SIZE( wan_compress_info_t, 0x34 );                
    };                                                              
};
#include "magic/wan_compress_info_t.end.hpp"
SDK_VERIFY( struct ndis::wan_compress_info_t::u0_proprietary_t, 0x24 );
SDK_VERIFY( struct ndis::wan_compress_info_t::u4__public_t, 0x20 );
SDK_VERIFY( struct ndis::wan_compress_info_t, 0x34 );
