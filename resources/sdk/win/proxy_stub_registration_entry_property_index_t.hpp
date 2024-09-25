#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ProxyStubRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class proxy_stub_registration_entry_property_index_t : uint32_t
    {                                                                   
        description =              0x0,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path =                 0x1,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_package_relative_path = 0x2,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_properties =         0x2,                                   // Windows 10 v1607
        num_properties =           0x3,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                  
};
