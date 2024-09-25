#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_marshaling_stream_on_user_marshal_callback_t.start.hpp"
namespace win
{
    struct user_marshal_cb_t;

    // [class CMarshalingStreamOnUserMarshalCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_marshaling_stream_on_user_marshal_callback_t        
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                      
        _m00 volatile uint32_t                    c_refs;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
        _m01 uint8_t const*                       p_buffer;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pBuffer
        _m02 const uint64_t                       cb_buffer_max;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._cbBufferMax
        _m03 uint64_t                             cb_buffer;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._cbBuffer
        _m04 uint8_t*                             p_position;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pPosition
        _m05 struct win::user_marshal_cb_t const* p_context;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pContext
                                                                
        SDK_MAGIC_PROPERTIES( "CMarshalingStreamOnUserMarshalCallback.$", 0x38, true, 0x729c549167f7e640 );              
        SDK_FIXED_SIZE( c_marshaling_stream_on_user_marshal_callback_t, 0x38 );              
    };                                                          
};
#include "magic/c_marshaling_stream_on_user_marshal_callback_t.end.hpp"
SDK_VERIFY( class win::c_marshaling_stream_on_user_marshal_callback_t, 0x38 );
