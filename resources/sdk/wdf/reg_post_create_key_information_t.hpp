#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_post_create_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_POST_CREATE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_post_create_key_information_t 
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 nt::unicode_view* complete_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CompleteName
        _m01 void*             object;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Object
        _m02 int32_t           status;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Status
                                             
        SDK_NONVOL_PROPERTIES( "_REG_POST_CREATE_KEY_INFORMATION.$", 0x18, true, 0xc93bfb1c1c06d112 );              
        SDK_FIXED_SIZE( reg_post_create_key_information_t, 0x18 );              
    };                                       
};
#include "magic/reg_post_create_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_post_create_key_information_t, 0x18 );
