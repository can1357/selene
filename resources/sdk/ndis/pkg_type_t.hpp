#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _PKG_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pkg_type_t : int32_t
    {                              
        npnp_pkg = 0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndco_pkg = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_pkg =  0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
