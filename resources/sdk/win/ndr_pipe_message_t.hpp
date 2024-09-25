#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_pipe_message_t.start.hpp"
namespace win
{
    struct generic_pipe_type_t;
    struct midl_stub_message_t;

    // [struct _NDR_PIPE_MESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_pipe_message_t                               
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                  
        _m00 uint16_t                         signature;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t                         pipe_id;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .PipeId
        _m02 uint16_t                         pipe_status;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PipeStatus
        _m03 uint16_t                         pipe_flags;     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .PipeFlags
        _m04 const uint8_t*                   p_type_format;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTypeFormat
        _m05 struct win::midl_stub_message_t* p_stub_msg;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pStubMsg
        _m06 struct win::generic_pipe_type_t* p_pipe_object;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pPipeObject
                                                            
        SDK_MAGIC_PROPERTIES( "_NDR_PIPE_MESSAGE.$", 0x20, true, 0xf83bf9ea749bd714 );              
        SDK_FIXED_SIZE( ndr_pipe_message_t, 0x20 );              
    };                                                      
};
#include "magic/ndr_pipe_message_t.end.hpp"
SDK_VERIFY( struct win::ndr_pipe_message_t, 0x20 );
