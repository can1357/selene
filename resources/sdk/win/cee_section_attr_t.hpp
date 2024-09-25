#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CeeSectionAttr]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cee_section_attr_t : int32_t
    {                                      
        none =       0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_only =  0x40000040,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        execute =    0x60000020,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_write = 0xc0000040,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
