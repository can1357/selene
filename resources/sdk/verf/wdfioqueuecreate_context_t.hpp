#pragma once
#include <sdkgen/support_library.hpp>
#include "common_context_header_t.hpp"
#include "../wdf/io_queue_config_t.hpp"

#include "magic/wdfioqueuecreate_context_t.start.hpp"
namespace verf
{
    // [struct _VF_WDFIOQUEUECREATE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfioqueuecreate_context_t                                      
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                 
        _m00 struct verf::common_context_header_t common_header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommonHeader
        _m01 struct wdf::io_queue_config_t        io_queue_config_original;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoQueueConfigOriginal
                                                                           
        SDK_MAGIC_PROPERTIES( "_VF_WDFIOQUEUECREATE_CONTEXT.$", 0x68, true, 0x3788c5f7e400f31 );                         
        SDK_FIXED_SIZE( wdfioqueuecreate_context_t, 0x68 );                         
    };                                                                     
};
#include "magic/wdfioqueuecreate_context_t.end.hpp"
SDK_VERIFY( struct verf::wdfioqueuecreate_context_t, 0x68 );
