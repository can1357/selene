#pragma once
#include <sdkgen/support_library.hpp>
#include "handle_revocation_info_t.hpp"
#include "../ob/extended_user_info_t.hpp"

#include "magic/object_footer_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_FOOTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_footer_t                                              
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                              
        _m00 struct nt::handle_revocation_info_t handle_revocation_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleRevocationInfo
        _m01 struct ob::extended_user_info_t     extended_user_info;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtendedUserInfo
                                                                        
        SDK_MAGIC_PROPERTIES( "_OBJECT_FOOTER.$", 0x30, true, 0x86de7375a4cbb8cb );                       
        SDK_FIXED_SIZE( object_footer_t, 0x30 );                        
    };                                                                  
};
#include "magic/object_footer_t.end.hpp"
SDK_VERIFY( struct nt::object_footer_t, 0x30 );
