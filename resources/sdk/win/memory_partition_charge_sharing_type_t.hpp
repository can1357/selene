#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MEMORY_PARTITION_CHARGE_SHARING_TYPE]
    //  Windows 11
    //
    enum class memory_partition_charge_sharing_type_t : int32_t
    {                                                          
        _virtual = 0x0,                                          // Windows 11
        physical = 0x1,                                          // Windows 11
        maximum =  0x2,                                          // Windows 11
    };                                                         
};
