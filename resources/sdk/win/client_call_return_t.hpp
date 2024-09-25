#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_call_return_t.start.hpp"
namespace win
{
    // [union _CLIENT_CALL_RETURN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union client_call_return_t
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 void*   pointer;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Pointer
        _m01 int64_t simple;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Simple
                              
        SDK_MAGIC_PROPERTIES( "_CLIENT_CALL_RETURN.$", 0x8, true, 0x7fb09bbd74abbe1 );        
        SDK_FIXED_SIZE( client_call_return_t, 0x8 );        
    };                        
};
#include "magic/client_call_return_t.end.hpp"
SDK_VERIFY( union win::client_call_return_t, 0x8 );
