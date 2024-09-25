#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_GENERAL_ERROR_CODE]
    //  WDK 10
    //
    enum class general_error_code_t : int32_t
    {                                        
        page_fault =          0x0,             // WDK 10
        invalid_instruction = 0x1,             // WDK 10
    };                                       
};
