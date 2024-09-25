#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class RttiParser]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class rtti_parser_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "RttiParser.$", 0x1, true, 0xd09d99462aa11ef7 );
        SDK_FIXED_SIZE( rtti_parser_t, 0x1 );
    };                 
};
SDK_VERIFY( class win::rtti_parser_t, 0x1 );
