#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _MFND_OPERATION_MODE]
    //  Windows 11
    //
    enum class mfnd_operation_mode_t : int32_t
    {                                         
        single_physical_function =   0x0,       // Windows 11
        multiple_physical_function = 0x1,       // Windows 11
    };                                        
};
