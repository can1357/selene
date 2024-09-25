#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hp_env_handle_t.start.hpp"
namespace rtl
{
    // [struct RTL_HP_ENV_HANDLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_env_handle_t          
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                          
        _m00 sdk::array<void*, 2> h;  //{ +0x0000    +0x0000    +0x0000    } | .h
                                    
        SDK_MAGIC_PROPERTIES( "RTL_HP_ENV_HANDLE.$", 0x10, true, 0x44b5262d0c956b16 );  
        SDK_FIXED_SIZE( hp_env_handle_t, 0x10 );  
    };                              
};
#include "magic/hp_env_handle_t.end.hpp"
SDK_VERIFY( struct rtl::hp_env_handle_t, 0x10 );
