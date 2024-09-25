#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_remote_unknown_t.start.hpp"
namespace win
{
    class c_std_identity_t;

    // [class CRemoteUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_remote_unknown_t                       
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 class win::c_std_identity_t* p_std_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pStdId
                                                   
        SDK_MAGIC_PROPERTIES( "CRemoteUnknown.$", 0x10, true, 0x8a78eda7bcf297bd );         
        SDK_FIXED_SIZE( c_remote_unknown_t, 0x10 );         
    };                                             
};
#include "magic/c_remote_unknown_t.end.hpp"
SDK_VERIFY( class win::c_remote_unknown_t, 0x10 );
