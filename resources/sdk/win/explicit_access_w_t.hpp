#pragma once
#include <sdkgen/support_library.hpp>
#include "trustee_w_t.hpp"
#include "access_mode_t.hpp"

#include "magic/explicit_access_w_t.start.hpp"
namespace win
{
    // [struct _EXPLICIT_ACCESS_W]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct explicit_access_w_t                              
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                  
        _m00 uint32_t                grf_access_permissions;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .grfAccessPermissions
        _m01 enum win::access_mode_t grf_access_mode;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .grfAccessMode
        _m02 uint32_t                grf_inheritance;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .grfInheritance
        _m03 struct win::trustee_w_t trustee;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Trustee
                                                            
        SDK_MAGIC_PROPERTIES( "_EXPLICIT_ACCESS_W.$", 0x30, true, 0x5a31c2255a913921 );                       
        SDK_FIXED_SIZE( explicit_access_w_t, 0x30 );                       
    };                                                      
};
#include "magic/explicit_access_w_t.end.hpp"
SDK_VERIFY( struct win::explicit_access_w_t, 0x30 );
