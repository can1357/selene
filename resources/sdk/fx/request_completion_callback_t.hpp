#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct request_completion_params_t; }
namespace wdf { struct wdfiotarget_t;               }
namespace wdf { struct wdfrequest_t;                }

#include "magic/request_completion_callback_t.start.hpp"
namespace fx
{
    // [class FxRequestCompletionCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class request_completion_callback_t                         
    {                                                           
        using pfn_wdf_request_completion_routine_t = sdk::function<void(struct wdf::wdfrequest_t*, struct wdf::wdfiotarget_t*, struct wdf::request_completion_params_t*, void*)>*;             
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                      
        _m00 pfn_wdf_request_completion_routine_t  m_completion;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Completion
                                                                
        SDK_MAGIC_PROPERTIES( "FxRequestCompletionCallback.$", 0x8, true, 0xeae88ace992337c );             
        SDK_FIXED_SIZE( request_completion_callback_t, 0x8 );             
    };                                                          
};
#include "magic/request_completion_callback_t.end.hpp"
SDK_VERIFY( class fx::request_completion_callback_t, 0x8 );
