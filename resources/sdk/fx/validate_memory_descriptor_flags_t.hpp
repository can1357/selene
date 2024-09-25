#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxValidateMemoryDescriptorFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class validate_memory_descriptor_flags_t : int32_t
    {                                                      
        null_allowed =      0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_buffer_allowed = 0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
