#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CreatePackageDependencyOptions]
    //  Windows 11
    //
    enum class create_package_dependency_options_t : int32_t
    {                                                       
        none =                                0x0,            // Windows 11
        do_not_verify_dependency_resolution = 0x1,            // Windows 11
        scope_is_system =                     0x2,            // Windows 11
    };                                                      
};
