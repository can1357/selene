#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_user_marshal_info_t.hpp"

#include "magic/c_user_marshal_info_t.start.hpp"
namespace win
{
    // [class CUserMarshalInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_user_marshal_info_t                                    
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 int32_t                             rpc_status;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._RpcStatus
        _m01 uint8_t*                            p_supplied_buffer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pSuppliedBuffer
        _m02 struct win::ndr_user_marshal_info_t marshal_info;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._MarshalInfo
                                                                   
        SDK_MAGIC_PROPERTIES( "CUserMarshalInfo.$", 0x68, true, 0xa5c9102b63df69c7 );                  
        SDK_FIXED_SIZE( c_user_marshal_info_t, 0x68 );                  
    };                                                             
};
#include "magic/c_user_marshal_info_t.end.hpp"
SDK_VERIFY( class win::c_user_marshal_info_t, 0x68 );
