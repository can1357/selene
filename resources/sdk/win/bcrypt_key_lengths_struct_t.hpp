#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_key_lengths_struct_t.start.hpp"
namespace win
{
    // [struct __BCRYPT_KEY_LENGTHS_STRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_key_lengths_struct_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t dw_min_length;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMinLength
        _m01 uint32_t dw_max_length;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMaxLength
        _m02 uint32_t dw_increment;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwIncrement
                                      
        SDK_MAGIC_PROPERTIES( "__BCRYPT_KEY_LENGTHS_STRUCT.$", 0xc, true, 0x4428de077715c374 );              
        SDK_FIXED_SIZE( bcrypt_key_lengths_struct_t, 0xc );              
    };                                
};
#include "magic/bcrypt_key_lengths_struct_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_key_lengths_struct_t, 0xc );
