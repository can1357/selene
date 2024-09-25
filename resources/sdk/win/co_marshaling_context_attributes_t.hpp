#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CO_MARSHALING_CONTEXT_ATTRIBUTES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class co_marshaling_context_attributes_t : int32_t
    {                                                      
        source_is_app_container =       0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_1 =  0x80000000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_2 =  0x80000001,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_3 =  0x80000002,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_4 =  0x80000003,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_5 =  0x80000004,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_6 =  0x80000005,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_7 =  0x80000006,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_8 =  0x80000007,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_9 =  0x80000008,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_10 = 0x80000009,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_11 = 0x8000000a,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_12 = 0x8000000b,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_13 = 0x8000000c,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_14 = 0x8000000d,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_15 = 0x8000000e,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_16 = 0x8000000f,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_17 = 0x80000010,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        context_attribute_reserved_18 = 0x80000011,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
