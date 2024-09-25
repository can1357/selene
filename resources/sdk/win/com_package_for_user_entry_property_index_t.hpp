#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComPackageForUserEntryPropertyIndex]
    //  Windows 10 v1607
    //
    enum class com_package_for_user_entry_property_index_t : int32_t
    {                                                               
        install_order =  0x0,                                         // Windows 10 v1607
        num_properties = 0x1,                                         // Windows 10 v1607
    };                                                              
};
