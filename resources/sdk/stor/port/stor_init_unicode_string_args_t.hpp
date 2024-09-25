#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_init_unicode_string_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_INIT_UNICODE_STRING_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_init_unicode_string_args_t     
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                     
        _m00 void*          destination_string;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DestinationString
        _m01 const wchar_t* source_string;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceString
                                               
        SDK_MAGIC_PROPERTIES( "_STOR_INIT_UNICODE_STRING_ARGS.$", 0x10, true, 0x61ebc38d70557410 );                   
        SDK_FIXED_SIZE( stor_init_unicode_string_args_t, 0x10 );                   
    };                                         
};
#include "magic/stor_init_unicode_string_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_init_unicode_string_args_t, 0x10 );
