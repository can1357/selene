#pragma once
#include <sdkgen/support_library.hpp>
#include "com_call_marshaling_direction_t.hpp"

#include "magic/c_ndr_stream_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;

    // [class CNdrStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ndr_stream_t                                                
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                              
        _m00 int32_t                                   ref_count;         //{ +0x0010    +0x0008    +0x0008    +0x0008    } | .RefCount
        _m01 struct win::midl_stub_message_t*          p_stub_msg;        //{ +0x0018    +0x0010    +0x0010    +0x0010    } | .pStubMsg
        _m02 enum win::com_call_marshaling_direction_t direction;         //{ +0x0020    +0x0018    +0x0018    +0x0018    } | .direction
        _m03 uint32_t                                  cb_buffer_length;  //{ +0x0024    +0x001c    +0x001c    +0x001c    } | .cbBufferLength
        _m04 uint32_t                                  position;          //{ +0x0028    +0x0020    +0x0020    +0x0020    } | .position
                                                                        
        SDK_MAGIC_PROPERTIES( "CNdrStream.$", 0x28, true, 0xc79345d4f91d1595 );                 
        SDK_DYNAMIC_SIZE( c_ndr_stream_t );                             
    };                                                                  
};
#include "magic/c_ndr_stream_t.end.hpp"
