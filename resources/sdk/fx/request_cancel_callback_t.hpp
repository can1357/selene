#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfrequest_t; }

#include "magic/request_cancel_callback_t.start.hpp"
namespace fx
{
    // [class FxRequestCancelCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class request_cancel_callback_t                                   
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                            
        _m00 sdk::function<void(struct wdf::wdfrequest_t*)>* m_cancel;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Cancel
                                                                      
        SDK_MAGIC_PROPERTIES( "FxRequestCancelCallback.$", 0x8, true, 0x40738c8464edef44 );         
        SDK_FIXED_SIZE( request_cancel_callback_t, 0x8 );             
    };                                                                
};
#include "magic/request_cancel_callback_t.end.hpp"
SDK_VERIFY( class fx::request_cancel_callback_t, 0x8 );
