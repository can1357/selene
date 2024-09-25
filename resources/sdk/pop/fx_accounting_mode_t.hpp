#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_FX_ACCOUNTING_MODE]
    //  Windows 11
    //
    enum class fx_accounting_mode_t : int32_t
    {                                        
        disabled = 0x0,                        // Windows 11
        basic =    0x1,                        // Windows 11
        enhanced = 0x2,                        // Windows 11
        max =      0x3,                        // Windows 11
    };                                       
};
