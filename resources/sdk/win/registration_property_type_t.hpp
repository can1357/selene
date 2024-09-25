#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum RegistrationPropertyType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class registration_property_type_t : uint32_t
    {                                                 
        required_string =              0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_guid =                0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_multi_string =        0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_expandable_string =   0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_bool =                0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_u_int32 =             0x5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_u_int32_range =       0x6,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_u_int64 =             0x7,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_security_descriptor = 0x8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional_string =              0x9,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional_guid =                0xa,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional_multi_string =        0xb,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional_expandable_string =   0xc,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional_bool =                0xd,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional_u_int32 =             0xe,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional_u_int32_range =       0xf,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional_security_descriptor = 0x10,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        property_store_in_sub_key =    0x11,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
