#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_address_family_t.start.hpp"
namespace ndis
{
    // [struct CO_ADDRESS_FAMILY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_address_family_t       
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t address_family;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AddressFamily
        _m01 uint32_t major_version;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorVersion
        _m02 uint32_t minor_version;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinorVersion
                                     
        SDK_MAGIC_PROPERTIES( "CO_ADDRESS_FAMILY.$", 0xc, true, 0xc208033c6218d51f );               
        SDK_FIXED_SIZE( co_address_family_t, 0xc );               
    };                               
};
#include "magic/co_address_family_t.end.hpp"
SDK_VERIFY( struct ndis::co_address_family_t, 0xc );
