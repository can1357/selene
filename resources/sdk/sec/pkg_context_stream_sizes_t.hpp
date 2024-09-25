#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_stream_sizes_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_StreamSizes]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_stream_sizes_t    
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t cb_header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbHeader
        _m01 uint32_t cb_trailer;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbTrailer
        _m02 uint32_t cb_maximum_message;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbMaximumMessage
        _m03 uint32_t c_buffers;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cBuffers
        _m04 uint32_t cb_block_size;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbBlockSize
                                         
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_StreamSizes.$", 0x14, true, 0x7e652ca2d1e5e839 );                   
        SDK_FIXED_SIZE( pkg_context_stream_sizes_t, 0x14 );                   
    };                                   
};
#include "magic/pkg_context_stream_sizes_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_stream_sizes_t, 0x14 );
