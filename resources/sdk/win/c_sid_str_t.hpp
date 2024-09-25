#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_sid_str_t.start.hpp"
namespace win
{
    // [class CSidStr]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_sid_str_t       
    {                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 wchar_t* p_sid;  //{ +0x0000    +0x0000    +0x0000    } | ._pSid
                            
        SDK_MAGIC_PROPERTIES( "CSidStr.$", 0x8, true, 0xac321e0409fa0a60 );      
        SDK_FIXED_SIZE( c_sid_str_t, 0x8 );      
    };                      
};
#include "magic/c_sid_str_t.end.hpp"
SDK_VERIFY( class win::c_sid_str_t, 0x8 );
