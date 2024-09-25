#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_interference_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_INTERFERENCE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_interference_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint64_t count;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
                                               
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_INTERFERENCE_INFORMATION.$", 0x8, true, 0x66db4a2415461430 );      
        SDK_FIXED_SIZE( jobobject_interference_information_t, 0x8 );      
    };                                         
};
#include "magic/jobobject_interference_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_interference_information_t, 0x8 );
