#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/log_t.start.hpp"
namespace asl
{
    // [class AslLog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class log_t                  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t log_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogHandle
                                 
        SDK_MAGIC_PROPERTIES( "AslLog.$", 0x8, true, 0x2d0e44455e2f62cc );           
        SDK_FIXED_SIZE( log_t, 0x8 );           
    };                           
};
#include "magic/log_t.end.hpp"
SDK_VERIFY( class asl::log_t, 0x8 );
