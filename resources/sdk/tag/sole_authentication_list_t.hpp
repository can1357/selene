#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sole_authentication_list_t.start.hpp"
namespace tag
{
    struct sole_authentication_info_t;

    // [struct tagSOLE_AUTHENTICATION_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sole_authentication_list_t                            
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                       
        _m00 uint32_t                                c_auth_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cAuthInfo
        _m01 struct tag::sole_authentication_info_t* a_auth_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .aAuthInfo
                                                                 
        SDK_MAGIC_PROPERTIES( "tagSOLE_AUTHENTICATION_LIST.$", 0x10, true, 0x20938f48c32ade6e );            
        SDK_FIXED_SIZE( sole_authentication_list_t, 0x10 );            
    };                                                           
};
#include "magic/sole_authentication_list_t.end.hpp"
SDK_VERIFY( struct tag::sole_authentication_list_t, 0x10 );
