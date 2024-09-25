#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipv6_fragment_header_t.start.hpp"
namespace ndis
{
    // [struct _IPV6_FRAGMENT_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ipv6_fragment_header_t      
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint8_t  next_header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextHeader
        _m01 uint8_t  dont_use1;         //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .DontUse1
        _m02 uint1_t  more_fragments;    //{ +0x0002@8  +0x0002@8  +0x0002@8  +0x0002@8  +0x0002@8  } | .MoreFragments
        _m03 uint5_t  dont_use2;         //{ +0x0002@11 +0x0002@11 +0x0002@11 +0x0002@11 +0x0002@11 } | .DontUse2
        _m04 uint16_t offset_and_flags;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .OffsetAndFlags
        _m05 uint32_t id;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Id
                                       
        SDK_NONVOL_PROPERTIES( "_IPV6_FRAGMENT_HEADER.$", 0x8, true, 0x9d4c493f736a137b );                 
        SDK_FIXED_SIZE( ipv6_fragment_header_t, 0x8 );                 
    };                                 
};
#include "magic/ipv6_fragment_header_t.end.hpp"
SDK_VERIFY( struct ndis::ipv6_fragment_header_t, 0x8 );
