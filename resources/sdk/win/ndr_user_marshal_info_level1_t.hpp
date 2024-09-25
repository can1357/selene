#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_user_marshal_info_level1_t.start.hpp"
namespace win
{
    struct i_rpc_channel_buffer_t;

    // [struct _NDR_USER_MARSHAL_INFO_LEVEL1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_user_marshal_info_level1_t                             
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 void*                               buffer;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint32_t                            buffer_size;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BufferSize
        _m02 sdk::function<void*(uint64_t)>*     pfn_allocate;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnAllocate
        _m03 sdk::function<void(void*)>*         pfn_free;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnFree
        _m04 struct win::i_rpc_channel_buffer_t* p_rpc_channel_buffer;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pRpcChannelBuffer
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDR_USER_MARSHAL_INFO_LEVEL1.$", 0x50, true, 0x2ded05b8b178e8a7 );                     
        SDK_FIXED_SIZE( ndr_user_marshal_info_level1_t, 0x50 );                     
    };                                                                
};
#include "magic/ndr_user_marshal_info_level1_t.end.hpp"
SDK_VERIFY( struct win::ndr_user_marshal_info_level1_t, 0x50 );
