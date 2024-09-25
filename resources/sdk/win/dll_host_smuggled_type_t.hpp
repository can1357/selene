#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DllHostSmuggledType]
    //  Windows 11
    //
    enum class dll_host_smuggled_type_t : int32_t
    {                                            
        dll_class_handle = 0x1,                    // Windows 11
        function_pointer = 0x2,                    // Windows 11
    };                                           
};
