#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/wmi_provider_control_t.hpp"

namespace wdf { struct wdfwmiprovider_t; }

#include "magic/wmi_provider_function_control_callback_t.start.hpp"
namespace fx
{
    // [struct FxWmiProviderFunctionControlCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_provider_function_control_callback_t            
    {                                                          
        using pfn_wdf_wmi_provider_function_control_t = sdk::function<int32_t(struct wdf::wdfwmiprovider_t*, enum wdf::wmi_provider_control_t, uint8_t)>*;         
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                     
        _m00 pfn_wdf_wmi_provider_function_control_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                               
        SDK_MAGIC_PROPERTIES( "FxWmiProviderFunctionControlCallback.$", 0x8, true, 0xc472555dec03d5e6 );         
        SDK_FIXED_SIZE( wmi_provider_function_control_callback_t, 0x8 );         
    };                                                         
};
#include "magic/wmi_provider_function_control_callback_t.end.hpp"
SDK_VERIFY( struct fx::wmi_provider_function_control_callback_t, 0x8 );
