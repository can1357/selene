#pragma once
#include <sdkgen/support_library.hpp>
#include "user_stgmedium_t.hpp"

#include "magic/user_flag_stgmedium_t.start.hpp"
namespace win
{
    // [struct _userFLAG_STGMEDIUM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_flag_stgmedium_t                           
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 int32_t                      context_flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextFlags
        _m01 int32_t                      f_pass_ownership;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fPassOwnership
        _m02 struct win::user_stgmedium_t stgmed;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Stgmed
                                                           
        SDK_MAGIC_PROPERTIES( "_userFLAG_STGMEDIUM.$", 0x10, true, 0x92c2c32fb0ad6965 );                 
        SDK_FIXED_SIZE( user_flag_stgmedium_t, 0x10 );                 
    };                                                     
};
#include "magic/user_flag_stgmedium_t.end.hpp"
SDK_VERIFY( struct win::user_flag_stgmedium_t, 0x10 );
