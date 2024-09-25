#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/std_exception_data_t.start.hpp"
namespace win
{
    // [struct __std_exception_data]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct std_exception_data_t  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                       
        _m00 const char* what;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._What
        _m01 bool        do_free;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._DoFree
                                 
        SDK_MAGIC_PROPERTIES( "__std_exception_data.$", 0x10, true, 0x4f6c0129a2ff3543 );        
        SDK_FIXED_SIZE( std_exception_data_t, 0x10 );        
    };                           
};
#include "magic/std_exception_data_t.end.hpp"
SDK_VERIFY( struct win::std_exception_data_t, 0x10 );
