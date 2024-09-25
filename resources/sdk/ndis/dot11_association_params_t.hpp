#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_association_params_t.start.hpp"
namespace ndis
{
    // [struct DOT11_ASSOCIATION_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_association_params_t                                 
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                            
        _m00 struct ndis::object_header_t header;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 6>       bssid;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BSSID
        _m02 uint32_t                     u_assoc_request_i_es_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .uAssocRequestIEsOffset
        _m03 uint32_t                     u_assoc_request_i_es_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uAssocRequestIEsLength
                                                                      
        SDK_MAGIC_PROPERTIES( "DOT11_ASSOCIATION_PARAMS.$", 0x14, true, 0x4d1be9c42035dbe8 );                            
        SDK_FIXED_SIZE( dot11_association_params_t, 0x14 );                            
    };                                                                
};
#include "magic/dot11_association_params_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_association_params_t, 0x14 );
