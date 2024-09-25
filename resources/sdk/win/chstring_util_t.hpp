#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/chstring_util_t.start.hpp"
namespace win
{
    struct hstring_t;

    // [class CHSTRINGUtil]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class chstring_util_t                         
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                        
        _m00 struct win::hstring_t const*& string;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._string
                                                  
        SDK_MAGIC_PROPERTIES( "CHSTRINGUtil.$", 0x8, true, 0x66f16d9d640e3986 );       
        SDK_FIXED_SIZE( chstring_util_t, 0x8 );       
    };                                            
};
#include "magic/chstring_util_t.end.hpp"
SDK_VERIFY( class win::chstring_util_t, 0x8 );
