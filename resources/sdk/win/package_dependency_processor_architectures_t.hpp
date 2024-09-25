#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PackageDependencyProcessorArchitectures]
    //  Windows 11
    //
    enum class package_dependency_processor_architectures_t : int32_t
    {                                                                
        none =    0x0,                                                 // Windows 11
        neutral = 0x1,                                                 // Windows 11
        x86 =     0x2,                                                 // Windows 11
        x64 =     0x4,                                                 // Windows 11
        arm =     0x8,                                                 // Windows 11
        arm64 =   0x10,                                                // Windows 11
        x86a64 =  0x20,                                                // Windows 11
    };                                                               
};
