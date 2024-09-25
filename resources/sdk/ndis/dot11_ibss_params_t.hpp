#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_ibss_params_t.start.hpp"
namespace ndis
{
    // [struct DOT11_IBSS_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_ibss_params_t                          
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 struct ndis::object_header_t header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint8_t                      b_join_only;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bJoinOnly
        _m02 uint32_t                     u_i_es_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uIEsOffset
        _m03 uint32_t                     u_i_es_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .uIEsLength
                                                        
        SDK_MAGIC_PROPERTIES( "DOT11_IBSS_PARAMS.$", 0x10, true, 0xabff3a6cf8f862d8 );              
        SDK_FIXED_SIZE( dot11_ibss_params_t, 0x10 );              
    };                                                  
};
#include "magic/dot11_ibss_params_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_ibss_params_t, 0x10 );
