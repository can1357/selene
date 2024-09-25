#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum KSPIN_DATAFLOW]
    //  Windows 10 v1607
    //
    enum class kspin_dataflow_t : int32_t
    {                                    
        in =  0x1,                         // Windows 10 v1607
        out = 0x2,                         // Windows 10 v1607
    };                                   
};
