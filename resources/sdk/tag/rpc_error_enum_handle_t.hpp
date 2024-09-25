#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rpc_error_enum_handle_t.start.hpp"
namespace tag
{
    // [struct tagRPC_ERROR_ENUM_HANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rpc_error_enum_handle_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t signature;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 void*    current_pos;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentPos
        _m02 void*    head;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Head
                                  
        SDK_MAGIC_PROPERTIES( "tagRPC_ERROR_ENUM_HANDLE.$", 0x18, true, 0x20b8d8cf5e462780 );            
        SDK_FIXED_SIZE( rpc_error_enum_handle_t, 0x18 );            
    };                            
};
#include "magic/rpc_error_enum_handle_t.end.hpp"
SDK_VERIFY( struct tag::rpc_error_enum_handle_t, 0x18 );
