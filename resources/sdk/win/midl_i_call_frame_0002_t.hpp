#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_i_call_frame_0002_t.start.hpp"
namespace win
{
    // [struct __MIDL_ICallFrame_0002]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_call_frame_0002_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint8_t  f_in;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fIn
        _m01 uint8_t  f_out;         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .fOut
        _m02 uint32_t stack_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .stackOffset
        _m03 uint32_t cb_param;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbParam
                                   
        SDK_MAGIC_PROPERTIES( "__MIDL_ICallFrame_0002.$", 0xc, true, 0x2a470330e16371a9 );             
        SDK_FIXED_SIZE( midl_i_call_frame_0002_t, 0xc );             
    };                             
};
#include "magic/midl_i_call_frame_0002_t.end.hpp"
SDK_VERIFY( struct win::midl_i_call_frame_0002_t, 0xc );
