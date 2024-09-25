#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CoGetTreatAsClassInternalFlags]
    //  Windows 11
    //
    enum class co_get_treat_as_class_internal_flags_t : int32_t
    {                                                          
        _default =                         0x0,                  // Windows 11
        disable_packaged_com_for_testing = 0x80000000,           // Windows 11
    };                                                         
};
