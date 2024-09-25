#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/serializer_t.start.hpp"
namespace win
{
    struct i_buffer_t;
    struct i_stream_t;
    struct i_buffer_internal_t;

    // [class Serializer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class serializer_t                                   
    {                                                    
        using p_i_buff_t = sdk::variant<struct win::i_buffer_t*, struct win::i_buffer_internal_t*>;                    
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 struct win::i_stream_t* p_stream;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pStream
        _m01 struct win::i_stream_t* p_original_stream;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pOriginalStream
        _m02 p_i_buff_t              p_i_buff;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pIBuff
        _m03 uint8_t*                buffer;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._buffer
        _m04 uint32_t                n_written;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._nWritten
        _m05 uint32_t                buf_size;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._bufSize
        _m06 uint32_t                operation_size;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._operationSize
        _m07 void*                   handle;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._handle
        _m08 int32_t                 cl_refs;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._clRefs
        _m09 uint32_t                direction;            //{ +0x003c    +0x003c    +0x003c    +0x003c    } | ._direction
        _m10 uint32_t                position;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._position
        _m11 uint32_t                start;                //{ +0x0044    +0x0044    +0x0044    +0x0044    } | ._start
        _m12 uint32_t                dw_max_dest_ctx;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._dwMaxDestCtx
        _m13 uint32_t                dw_current_dest_ctx;  //{ +0x004c    +0x004c    +0x004c    +0x004c    } | ._dwCurrentDestCtx
        _m14 uint32_t                dw_marshal_flags;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._dwMarshalFlags
                                                         
        SDK_MAGIC_PROPERTIES( "Serializer.$", 0x58, true, 0x280e2169f45be76c );                    
        SDK_FIXED_SIZE( serializer_t, 0x58 );                    
    };                                                   
};
#include "magic/serializer_t.end.hpp"
SDK_VERIFY( class win::serializer_t, 0x58 );
