#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/orpc_init_args_t.start.hpp"
namespace win
{
    struct i_orpc_debug_notify_t;

    // [struct ORPC_INIT_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct orpc_init_args_t                                        
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                         
        _m00 struct win::i_orpc_debug_notify_t* lp_intf_orpc_debug;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpIntfOrpcDebug
        _m01 void*                              pv_psn;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvPSN
        _m02 uint32_t                           dw_reserved1;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwReserved1
        _m03 uint32_t                           dw_reserved2;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwReserved2
                                                                   
        SDK_MAGIC_PROPERTIES( "ORPC_INIT_ARGS.$", 0x18, true, 0xf2ac288d0df2082c );                   
        SDK_FIXED_SIZE( orpc_init_args_t, 0x18 );                   
    };                                                             
};
#include "magic/orpc_init_args_t.end.hpp"
SDK_VERIFY( struct win::orpc_init_args_t, 0x18 );
