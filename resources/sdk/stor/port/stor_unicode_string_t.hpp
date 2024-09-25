#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_unicode_string_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_UNICODE_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_unicode_string_t     
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t length;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint16_t maximum_length;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MaximumLength
        _m02 wchar_t* buffer;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                                     
        SDK_MAGIC_PROPERTIES( "_STOR_UNICODE_STRING.$", 0x10, true, 0x838a7c0ca6bf1ee1 );               
        SDK_FIXED_SIZE( stor_unicode_string_t, 0x10 );               
    };                               
};
#include "magic/stor_unicode_string_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_unicode_string_t, 0x10 );
