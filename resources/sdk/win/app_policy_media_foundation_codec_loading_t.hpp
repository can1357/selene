#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AppPolicyMediaFoundationCodecLoading]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class app_policy_media_foundation_codec_loading_t : int32_t
    {                                                               
        all =        0x0,                                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inbox_only = 0x1,                                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                              
};
