#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_luid_lh_t.start.hpp"
namespace ndis
{
    // [union _NET_LUID_LH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union net_luid_lh_t                        
    {                                          
        struct u0_info_t                       
        {                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
            //                                 
            _m01 uint24_t net_luid_index;        //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .NetLuidIndex
            _m02 uint16_t if_type;               //{ +0x0000@48 +0x0000@48 +0x0000@48 +0x0000@48 } | .IfType
                                               
            SDK_MAGIC_PROPERTIES( "_NET_LUID_LH.Info.$", 0x8, true, 0x117a2c8ae3321734 );                     
            SDK_FIXED_SIZE( u0_info_t, 0x8 );                     
        };                                     
                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                     
        _m00 uint64_t                    value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m03 u0_info_t                   info;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Info
                                               
        SDK_MAGIC_PROPERTIES( "_NET_LUID_LH.$", 0x8, true, 0x99e82a72a6c4bc50 );      
        SDK_FIXED_SIZE( net_luid_lh_t, 0x8 );      
    };                                         
};
#include "magic/net_luid_lh_t.end.hpp"
SDK_VERIFY( struct ndis::net_luid_lh_t::u0_info_t, 0x8 );
SDK_VERIFY( union ndis::net_luid_lh_t, 0x8 );
