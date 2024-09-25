#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_send_options_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REQUEST_SEND_OPTIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_send_options_t
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 int64_t  timeout;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Timeout
                                 
        SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_SEND_OPTIONS.$", 0x10, true, 0x9d7a9be9bc397f72 );        
        SDK_FIXED_SIZE( request_send_options_t, 0x10 );        
    };                           
};
#include "magic/request_send_options_t.end.hpp"
SDK_VERIFY( struct wdf::request_send_options_t, 0x10 );
