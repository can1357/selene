#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagResourceGateId]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class resource_gate_id_t : int32_t
    {                                      
        process_memory_gate = 0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_memory_gate =  0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
