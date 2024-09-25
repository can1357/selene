#pragma once
#include <sdkgen/support_library.hpp>
#include "ssid_identifier_authority_t.hpp"

#include "magic/stream_sid_t.start.hpp"
namespace tag
{
    // [struct tagSTREAM_SID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stream_sid_t                                                   
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                
        _m00 uint8_t                                 revision;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m01 uint8_t                                 sub_authority_count;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .SubAuthorityCount
        _m02 struct tag::ssid_identifier_authority_t identifier_authority;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .IdentifierAuthority
        _m03 sdk::array<uint32_t, 1>                 sub_authority;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubAuthority
                                                                          
        SDK_MAGIC_PROPERTIES( "tagSTREAM_SID.$", 0xc, true, 0xec3bb5cd58cf259e );                     
        SDK_FIXED_SIZE( stream_sid_t, 0xc );                              
    };                                                                    
};
#include "magic/stream_sid_t.end.hpp"
SDK_VERIFY( struct tag::stream_sid_t, 0xc );
