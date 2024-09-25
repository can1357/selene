#pragma once
#include <sdkgen/support_library.hpp>
#include "wudfmessage_reply_header_t.hpp"

#include "magic/wudfmessage_io_reply_t.start.hpp"
namespace wdf
{
    // [struct _WUDFMESSAGE_IO_REPLY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_io_reply_t                               
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                      
        _m00 struct wdf::wudfmessage_reply_header_t header;       //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                               information;  //{ +0x0008    +0x0008    +0x0008    } | .Information
                                                                
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_IO_REPLY.$", 0x10, true, 0xb03f8f4329d4ec8b );            
        SDK_FIXED_SIZE( wudfmessage_io_reply_t, 0x10 );            
    };                                                          
};
#include "magic/wudfmessage_io_reply_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_io_reply_t, 0x10 );
