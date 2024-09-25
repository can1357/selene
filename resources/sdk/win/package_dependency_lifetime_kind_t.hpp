#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PackageDependencyLifetimeKind]
    //  Windows 11
    //
    enum class package_dependency_lifetime_kind_t : int32_t
    {                                                      
        process =      0x0,                                  // Windows 11
        file_path =    0x1,                                  // Windows 11
        registry_key = 0x2,                                  // Windows 11
    };                                                     
};
