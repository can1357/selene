#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wudfmessage_reply_header_t.start.hpp"
namespace wdf
{
    // [struct _WUDFMESSAGE_REPLY_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_reply_header_t
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int32_t nt_status;        //{ +0x0000    +0x0000    +0x0000    } | .NtStatus
                                     
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_REPLY_HEADER.$", 0x4, true, 0x37150de2c04faa8c );          
        SDK_FIXED_SIZE( wudfmessage_reply_header_t, 0x4 );          
    };                               
};
#include "magic/wudfmessage_reply_header_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_reply_header_t, 0x4 );
