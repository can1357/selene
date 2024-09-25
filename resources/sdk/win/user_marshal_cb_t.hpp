#pragma once
#include <sdkgen/support_library.hpp>
#include "user_marshal_cb_type_t.hpp"

#include "magic/user_marshal_cb_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;

    // [struct _USER_MARSHAL_CB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_marshal_cb_t                                
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                  
        _m00 uint32_t                         flags;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct win::midl_stub_message_t* p_stub_msg;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pStubMsg
        _m02 const uint8_t*                   p_reserve;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pReserve
        _m03 uint32_t                         signature;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Signature
        _m04 enum win::user_marshal_cb_type_t cb_type;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CBType
        _m05 const uint8_t*                   p_format;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pFormat
        _m06 const uint8_t*                   p_type_format;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pTypeFormat
                                                            
        SDK_MAGIC_PROPERTIES( "_USER_MARSHAL_CB.$", 0x30, true, 0x1b1ca33b791f8688 );              
        SDK_FIXED_SIZE( user_marshal_cb_t, 0x30 );              
    };                                                      
};
#include "magic/user_marshal_cb_t.end.hpp"
SDK_VERIFY( struct win::user_marshal_cb_t, 0x30 );
