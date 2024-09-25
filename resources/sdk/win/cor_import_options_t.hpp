#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorImportOptions]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_import_options_t : int32_t
    {                                        
        _default =              0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_type_defs =         0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_method_defs =       0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_field_defs =        0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_properties =        0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_events =            0x10,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_custom_attributes = 0x20,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_exported_types =    0x40,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =                   0xff,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
