#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MIG_XML_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mig_xml_type_t : int32_t
    {                                  
        unknown =         0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed =         0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixed =           0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        needs_reinstall = 0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hard_blocked =    0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        soft_blocked =    0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ask_wer =         0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =             0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
