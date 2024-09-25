#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;                      }
namespace win { struct i_channel_wrapper_vtbl_t;    }
namespace win { struct i_rpc_channel_buffer_t;      }
namespace win { struct i_rpc_channel_buffer_vtbl_t; }

#include "magic/channel_wrapper_t.start.hpp"
namespace tag
{
    // [struct tagChannelWrapper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct channel_wrapper_t                                                       
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                         
        _m00 const struct win::i_rpc_channel_buffer_vtbl_t* lp_vtbl;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpVtbl
        _m01 int32_t                                        ref_count;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefCount
        _m02 const struct nt::guid_t*                       p_iid;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pIID
        _m03 struct win::i_rpc_channel_buffer_t*            p_channel;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pChannel
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                         
        _m04 const struct win::i_channel_wrapper_vtbl_t*    p_channel_wrapper_vtbl;  //{ +0x0020    +0x0020    +0x0020    } | .pChannelWrapperVtbl
                                                                                   
        SDK_MAGIC_PROPERTIES( "tagChannelWrapper.$", 0x28, true, 0xfa53a99d412168af );                       
        SDK_DYNAMIC_SIZE( channel_wrapper_t );                                     
    };                                                                             
};
#include "magic/channel_wrapper_t.end.hpp"
