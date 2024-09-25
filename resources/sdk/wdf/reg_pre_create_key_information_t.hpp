#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_pre_create_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_PRE_CREATE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_pre_create_key_information_t  
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 nt::unicode_view* complete_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CompleteName
                                             
        SDK_NONVOL_PROPERTIES( "_REG_PRE_CREATE_KEY_INFORMATION.$", 0x8, true, 0x950d6db883793b78 );              
        SDK_FIXED_SIZE( reg_pre_create_key_information_t, 0x8 );              
    };                                       
};
#include "magic/reg_pre_create_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_pre_create_key_information_t, 0x8 );
