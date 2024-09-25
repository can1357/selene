#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComPackageInstallOrderEntryPropertyIndex]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_package_install_order_entry_property_index_t : int32_t
    {                                                                    
        install_order =  0x0,                                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_properties = 0x1,                                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                   
};
