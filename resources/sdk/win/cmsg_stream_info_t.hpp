#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmsg_stream_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_STREAM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_stream_info_t                            
    {                                                    
        using pfn_cmsg_stream_output_t = sdk::function<int32_t(const void*, uint8_t*, uint32_t, int32_t)>*;                  
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                               
        _m00 uint32_t                  cb_content;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbContent
        _m01 pfn_cmsg_stream_output_t  pfn_stream_output;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnStreamOutput
        _m02 void*                     pv_arg;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvArg
                                                         
        SDK_MAGIC_PROPERTIES( "_CMSG_STREAM_INFO.$", 0x18, true, 0xfea08452622c2c99 );                  
        SDK_FIXED_SIZE( cmsg_stream_info_t, 0x18 );                  
    };                                                   
};
#include "magic/cmsg_stream_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_stream_info_t, 0x18 );
