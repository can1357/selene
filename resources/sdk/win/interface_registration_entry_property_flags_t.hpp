#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum InterfaceRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interface_registration_entry_property_flags_t : uint64_t
    {                                                                  
        none =             0x0,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_name =   0x1,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        proxy_stub_clsid = 0x2,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                 
};
