#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_device_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_DEVICE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_device_information_t         
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t number_of_disks;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfDisks
        _m01 uint32_t number_of_floppies;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfFloppies
        _m02 uint32_t number_of_cd_roms;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfCdRoms
        _m03 uint32_t number_of_tapes;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfTapes
        _m04 uint32_t number_of_serial_ports;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfSerialPorts
        _m05 uint32_t number_of_parallel_ports;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumberOfParallelPorts
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_DEVICE_INFORMATION.$", 0x18, true, 0x10e7cf70cd0c90c2 );                         
        SDK_FIXED_SIZE( system_device_information_t, 0x18 );                         
    };                                         
};
#include "magic/system_device_information_t.end.hpp"
SDK_VERIFY( struct win::system_device_information_t, 0x18 );
