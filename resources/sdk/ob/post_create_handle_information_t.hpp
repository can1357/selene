#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/post_create_handle_information_t.start.hpp"
namespace ob
{
    // [struct _OB_POST_CREATE_HANDLE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct post_create_handle_information_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t granted_access;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GrantedAccess
                                           
        SDK_NONVOL_PROPERTIES( "_OB_POST_CREATE_HANDLE_INFORMATION.$", 0x4, true, 0xd93d960b9798595 );               
        SDK_FIXED_SIZE( post_create_handle_information_t, 0x4 );               
    };                                     
};
#include "magic/post_create_handle_information_t.end.hpp"
SDK_VERIFY( struct ob::post_create_handle_information_t, 0x4 );
