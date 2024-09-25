#pragma once
#include <sdkgen/support_library.hpp>
#include "safe_int_error_t.hpp"

#include "magic/safe_int_exception_t.start.hpp"
namespace win
{
    // [class SafeIntException]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class safe_int_exception_t                 
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                     
        _m00 enum win::safe_int_error_t m_code;  //{ +0x0000    +0x0000    +0x0000    } | .m_code
                                               
        SDK_MAGIC_PROPERTIES( "SafeIntException.$", 0x4, true, 0x5cb1393f6afbab79 );       
        SDK_FIXED_SIZE( safe_int_exception_t, 0x4 );       
    };                                         
};
#include "magic/safe_int_exception_t.end.hpp"
SDK_VERIFY( class win::safe_int_exception_t, 0x4 );
