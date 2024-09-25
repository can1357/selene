#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _VDMSERVICECLASS]
    //  WDK 10
    //
    enum class vdmserviceclass_t : int32_t
    {                                     
        start_execution =         0x0,      // WDK 10
        queue_interrupt =         0x1,      // WDK 10
        delay_interrupt =         0x2,      // WDK 10
        initialize =              0x3,      // WDK 10
        features =                0x4,      // WDK 10
        set_int21_handler =       0x5,      // WDK 10
        query_dir =               0x6,      // WDK 10
        printer_direct_io_open =  0x7,      // WDK 10
        printer_direct_io_close = 0x8,      // WDK 10
        printer_initialize =      0x9,      // WDK 10
        set_ldt_entries =         0xa,      // WDK 10
        set_process_ldt_info =    0xb,      // WDK 10
        adlib_emulation =         0xc,      // WDK 10
        pm_cli_control =          0xd,      // WDK 10
        query_vdm_process =       0xe,      // WDK 10
    };                                    
};
