#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lunicode_string_t.start.hpp"
namespace win
{
    // [struct _LUNICODE_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lunicode_string_t         
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t length;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint64_t maximum_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumLength
        _m02 wchar_t* buffer;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Buffer
                                     
        SDK_MAGIC_PROPERTIES( "_LUNICODE_STRING.$", 0x18, true, 0xc88df8fc09254a75 );               
        SDK_FIXED_SIZE( lunicode_string_t, 0x18 );               
    };                               
};
#include "magic/lunicode_string_t.end.hpp"
SDK_VERIFY( struct win::lunicode_string_t, 0x18 );
