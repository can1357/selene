#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxCxInvokeCallbackSubType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cx_invoke_callback_sub_type_t : uint8_t
    {                                                 
        pre_callback =  0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        post_callback = 0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
