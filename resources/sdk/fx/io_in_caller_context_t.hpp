#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdevice_t;  }
namespace wdf { struct wdfrequest_t; }

#include "magic/io_in_caller_context_t.start.hpp"
namespace fx
{
    // [class FxIoInCallerContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class io_in_caller_context_t                      
    {                                                 
        using pfn_wdf_io_in_caller_context_t = sdk::function<void(struct wdf::wdfdevice_t*, struct wdf::wdfrequest_t*)>*;         
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                            
        _m00 pfn_wdf_io_in_caller_context_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                      
        SDK_MAGIC_PROPERTIES( "FxIoInCallerContext.$", 0x8, true, 0x25abeeb6687faf45 );         
        SDK_FIXED_SIZE( io_in_caller_context_t, 0x8 );         
    };                                                
};
#include "magic/io_in_caller_context_t.end.hpp"
SDK_VERIFY( class fx::io_in_caller_context_t, 0x8 );
