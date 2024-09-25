#pragma once
#include <sdkgen/support_library.hpp>
#include "wudfmessage_t.hpp"

#include "magic/wudfmessage_header_t.start.hpp"
namespace wdf
{
    // [struct _WUDFMESSAGE_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_header_t              
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 enum wdf::wudfmessage_t message;  //{ +0x0000    +0x0000    +0x0000    } | .Message
                                             
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_HEADER.$", 0x1, true, 0xaf2a387296e5f8a );        
        SDK_FIXED_SIZE( wudfmessage_header_t, 0x1 );        
    };                                       
};
#include "magic/wudfmessage_header_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_header_t, 0x1 );
