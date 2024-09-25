#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorManifestResourceFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_manifest_resource_flags_t : int32_t
    {                                                 
        _public =         0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _private =        0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        visibility_mask = 0x7,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
