#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_addr_btl8_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_ADDR_BTL8]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_addr_btl8_t          
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t port;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Port
        _m02 uint32_t address_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AddressLength
        _m03 uint8_t  path;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Path
        _m04 uint8_t  target;          //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .Target
        _m05 uint8_t  lun;             //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Lun
                                     
        SDK_MAGIC_PROPERTIES( "_STOR_ADDR_BTL8.$", 0x10, true, 0x11daee4564928b2e );               
        SDK_FIXED_SIZE( stor_addr_btl8_t, 0x10 );               
    };                               
};
#include "magic/stor_addr_btl8_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_addr_btl8_t, 0x10 );
