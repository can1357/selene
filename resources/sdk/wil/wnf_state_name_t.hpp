#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wnf_state_name_t.start.hpp"
namespace wil
{
    // [struct __WIL__WNF_STATE_NAME]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnf_state_name_t               
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint32_t, 2> data;  //{ +0x0000    +0x0000    +0x0000    } | .Data
                                          
        SDK_MAGIC_PROPERTIES( "__WIL__WNF_STATE_NAME.$", 0x8, true, 0xd908342da19c1c51 );     
        SDK_FIXED_SIZE( wnf_state_name_t, 0x8 );     
    };                                    
};
#include "magic/wnf_state_name_t.end.hpp"
SDK_VERIFY( struct wil::wnf_state_name_t, 0x8 );
