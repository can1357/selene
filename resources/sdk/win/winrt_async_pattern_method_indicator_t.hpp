#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WinrtAsyncPatternMethodIndicator]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class winrt_async_pattern_method_indicator_t : uint32_t
    {                                                           
        not_associated_with_winrt_async_pattern =      0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async_method_via_winrt_async_channel =         0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async_method_via_classic_channel =             0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operation_object_method_via_classic_channel =  0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completed_handler_method_via_classic_channel = 0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        progress_handler_method_via_classic_channel =  0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
