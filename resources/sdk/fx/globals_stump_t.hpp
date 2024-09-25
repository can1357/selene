#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/globals_stump_t.start.hpp"
namespace fx
{
    struct driver_globals_t;

    // [struct FxGlobalsStump]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct globals_stump_t                          
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 struct fx::driver_globals_t* m_globals;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Globals
                                                    
        SDK_MAGIC_PROPERTIES( "FxGlobalsStump.$", 0x8, true, 0xcac2848c7c8e4193 );          
        SDK_FIXED_SIZE( globals_stump_t, 0x8 );          
    };                                              
};
#include "magic/globals_stump_t.end.hpp"
SDK_VERIFY( struct fx::globals_stump_t, 0x8 );
