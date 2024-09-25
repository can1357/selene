#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_INTERRUPT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interrupt_type_t : int32_t
    {                                    
        line_based =    0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        message_based = 0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
