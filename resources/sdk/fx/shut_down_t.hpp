#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdevice_t; }

#include "magic/shut_down_t.start.hpp"
namespace fx
{
    // [class FxShutDown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class shut_down_t                                                
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                           
        _m00 sdk::function<void(struct wdf::wdfdevice_t*)>* m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                                     
        SDK_MAGIC_PROPERTIES( "FxShutDown.$", 0x8, true, 0x27c9bd329ef786b2 );         
        SDK_FIXED_SIZE( shut_down_t, 0x8 );                          
    };                                                               
};
#include "magic/shut_down_t.end.hpp"
SDK_VERIFY( class fx::shut_down_t, 0x8 );
