#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDK_OBJECT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ndk_object_type_t : int32_t
    {                                     
        undefined =       0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adapter =         0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        qp =              0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cq =              0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mr =              0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mw =              0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pd =              0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_endpoint = 0x7,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        connector =       0x8,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        listener =        0x9,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        srq =             0xa,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =             0xb,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
