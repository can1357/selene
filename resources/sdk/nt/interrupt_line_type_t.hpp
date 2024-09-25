#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _INTERRUPT_LINE_TYPE]
    //  Windows 11
    //
    enum class interrupt_line_type_t : int32_t 
    {                                          
        invalid_type =                  0x0,     // Windows 11
        unusable =                      0x1,     // Windows 11
        standard_pin =                  0x2,     // Windows 11
        processor_local =               0x3,     // Windows 11
        software_only =                 0x4,     // Windows 11
        software_only_processor_local = 0x5,     // Windows 11
        output_pin =                    0x6,     // Windows 11
        msi =                           0x7,     // Windows 11
    };                                         
};
