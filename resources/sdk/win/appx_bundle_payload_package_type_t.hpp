#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class appx_bundle_payload_package_type_t : int32_t
    {                                                      
        application = 0x0,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resource =    0x1,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
