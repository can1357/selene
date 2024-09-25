#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AddPackageDependencyOptions]
    //  Windows 11
    //
    enum class add_package_dependency_options_t : int32_t
    {                                                    
        none =                      0x0,                   // Windows 11
        prepend_if_rank_collision = 0x1,                   // Windows 11
    };                                                   
};
