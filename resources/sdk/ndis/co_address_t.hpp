#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_address_t.start.hpp"
namespace ndis
{
    // [struct _CO_ADDRESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_address_t                          
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 uint32_t               address_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AddressSize
        _m01 sdk::array<uint8_t, 1> address;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Address
                                                 
        SDK_MAGIC_PROPERTIES( "_CO_ADDRESS.$", 0x8, true, 0xfb00985cce26dbf8 );             
        SDK_FIXED_SIZE( co_address_t, 0x8 );             
    };                                           
};
#include "magic/co_address_t.end.hpp"
SDK_VERIFY( struct ndis::co_address_t, 0x8 );
