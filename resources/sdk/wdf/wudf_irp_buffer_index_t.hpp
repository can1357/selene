#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WUDF_IRP_BUFFER_INDEX]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wudf_irp_buffer_index_t : uint8_t
    {                                           
        primary =   0x0,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondary = 0x1,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x2,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
