#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntstor_unicode_string_t.start.hpp"
namespace stor::port
{
    // [struct _NTSTOR_UNICODE_STRING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ntstor_unicode_string_t   
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t length;          //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint16_t maximum_length;  //{ +0x0002    +0x0002    +0x0002    } | .MaximumLength
        _m02 wchar_t* buffer;          //{ +0x0008    +0x0008    +0x0008    } | .Buffer
                                     
        SDK_MAGIC_PROPERTIES( "_NTSTOR_UNICODE_STRING.$", 0x10, true, 0xb591079d4c0d25a5 );               
        SDK_FIXED_SIZE( ntstor_unicode_string_t, 0x10 );               
    };                               
};
#include "magic/ntstor_unicode_string_t.end.hpp"
SDK_VERIFY( struct stor::port::ntstor_unicode_string_t, 0x10 );
