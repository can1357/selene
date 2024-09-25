#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/clipdata_t.start.hpp"
namespace tag
{
    // [struct tagCLIPDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct clipdata_t             
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t cb_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t  ul_clip_fmt;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulClipFmt
        _m02 uint8_t* p_clip_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pClipData
                                  
        SDK_MAGIC_PROPERTIES( "tagCLIPDATA.$", 0x10, true, 0xbcc7a56c54f27ca );            
        SDK_FIXED_SIZE( clipdata_t, 0x10 );            
    };                            
};
#include "magic/clipdata_t.end.hpp"
SDK_VERIFY( struct tag::clipdata_t, 0x10 );
