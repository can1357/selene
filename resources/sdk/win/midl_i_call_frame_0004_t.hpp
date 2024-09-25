#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/midl_i_call_frame_0004_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [struct __MIDL_ICallFrame_0004]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_call_frame_0004_t                        
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 uint8_t                  f_in;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fIn
        _m01 uint32_t                 dw_dest_context;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwDestContext
        _m02 void*                    pv_dest_context;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvDestContext
        _m03 struct win::i_unknown_t* punk_reserved;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .punkReserved
        _m04 struct nt::guid_t        guid_transfer_syntax;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .guidTransferSyntax
                                                           
        SDK_MAGIC_PROPERTIES( "__MIDL_ICallFrame_0004.$", 0x28, true, 0x4d1ed51b92b440af );                     
        SDK_FIXED_SIZE( midl_i_call_frame_0004_t, 0x28 );                     
    };                                                     
};
#include "magic/midl_i_call_frame_0004_t.end.hpp"
SDK_VERIFY( struct win::midl_i_call_frame_0004_t, 0x28 );
