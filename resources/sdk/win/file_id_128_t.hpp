#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_id_128_t.start.hpp"
namespace win
{
    // [struct _FILE_ID_128]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_id_128_t                        
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 sdk::array<uint8_t, 16> identifier;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Identifier
                                                
        SDK_NONVOL_PROPERTIES( "_FILE_ID_128.$", 0x10, true, 0xda3c1aef6bbe158 );           
        SDK_FIXED_SIZE( file_id_128_t, 0x10 );           
    };                                          
};
#include "magic/file_id_128_t.end.hpp"
SDK_VERIFY( struct win::file_id_128_t, 0x10 );
