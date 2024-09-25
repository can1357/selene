#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_additional_ie_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_ADDITIONAL_IE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_additional_ie_t                                 
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct ndis::object_header_t header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_beacon_i_es_offset;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uBeaconIEsOffset
        _m02 uint32_t                     u_beacon_i_es_length;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uBeaconIEsLength
        _m03 uint32_t                     u_response_i_es_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .uResponseIEsOffset
        _m04 uint32_t                     u_response_i_es_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uResponseIEsLength
                                                                 
        SDK_MAGIC_PROPERTIES( "_DOT11_ADDITIONAL_IE.$", 0x14, true, 0x79f403bb1d717c69 );                       
        SDK_FIXED_SIZE( dot11_additional_ie_t, 0x14 );                       
    };                                                           
};
#include "magic/dot11_additional_ie_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_additional_ie_t, 0x14 );
