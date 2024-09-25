#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComInterfaceRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_interface_registration_entry_property_flags_t : uint64_t
    {                                                                      
        none =                    0x0,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_universal_marshaler = 0x1,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        proxy_stub_clsid =        0x2,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronous_interface =   0x4,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asynchronous_interface =  0x8,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_lib_id =             0x10,                                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_lib_version_number = 0x20,                                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_machine_scope =       0x40,                                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                     
};
