#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_VAD_ALLOCATION_CELL_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vad_allocation_cell_type_t : int32_t
    {                                              
        bottom_up =                 0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stack_peb_teb =             0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //allocation_cell_maximum = 0x2,             // Windows 10 v1607
        reserved64 =                0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocation_cell_maximum =   0x3,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
