#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SECTION_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class section_information_class_t : int32_t
    {                                               
        section_basic_information =          0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        section_image_information =          0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        section_relocation_information =     0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        section_original_base_information =  0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_section_info_class =           0x4,     // Windows 10 v1607
        section_internal_image_information = 0x4,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_section_info_class =             0x5,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
