#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDK_OPERATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ndk_operation_type_t : int32_t
    {                                        
        receive =                0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send =                   0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fast_register =          0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bind =                   0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalidate =             0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read =                   0x20,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        write =                  0x40,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_and_invalidate = 0x8001,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
