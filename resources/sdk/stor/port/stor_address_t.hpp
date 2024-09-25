#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_address_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_ADDRESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_address_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint16_t               type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t               port;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Port
        _m02 uint32_t               address_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AddressLength
        _m03 sdk::array<uint8_t, 1> address_data;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddressData
                                                   
        SDK_MAGIC_PROPERTIES( "_STOR_ADDRESS.$", 0x10, true, 0x654816922194970d );               
        SDK_FIXED_SIZE( stor_address_t, 0x10 );               
    };                                             
};
#include "magic/stor_address_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_address_t, 0x10 );
