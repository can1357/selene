#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _SRBEXDATATYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class srbexdatatype_t : int32_t     
    {                                        
        //ms_reserved_start = -0x10000000,     // WDK 10
        //reserved =          -0x1,            // WDK 10
        unknown =             0x0,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bidirectional =       0x1,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_cdb16 =          0x40,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_cdb32 =          0x41,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_cdb_var =        0x42,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nvme_command =        0x43,            // Windows 11
        wmi =                 0x60,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power =               0x61,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pn_p =                0x62,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_info =             0x80,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        passthrough_direct =  0xa0,            // Windows 11
        reserved =            0xff,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ms_reserved_start =   0xf0000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
