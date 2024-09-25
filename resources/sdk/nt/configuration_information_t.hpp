#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/configuration_information_t.start.hpp"
namespace nt
{
    // [struct _CONFIGURATION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct configuration_information_t                  
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint32_t disk_count;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskCount
        _m01 uint32_t floppy_count;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .FloppyCount
        _m02 uint32_t cd_rom_count;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CdRomCount
        _m03 uint32_t tape_count;                         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .TapeCount
        _m04 uint32_t scsi_port_count;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ScsiPortCount
        _m05 uint32_t serial_count;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SerialCount
        _m06 uint32_t parallel_count;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ParallelCount
        _m07 uint8_t  at_disk_primary_address_claimed;    //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .AtDiskPrimaryAddressClaimed
        _m08 uint8_t  at_disk_secondary_address_claimed;  //{ +0x001d    +0x001d    +0x001d    +0x001d    +0x001d    } | .AtDiskSecondaryAddressClaimed
        _m09 uint32_t version;                            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Version
        _m10 uint32_t medium_changer_count;               //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .MediumChangerCount
                                                        
        SDK_NONVOL_PROPERTIES( "_CONFIGURATION_INFORMATION.$", 0x28, true, 0xbb0c97e3f1e16c38 );                                  
        SDK_FIXED_SIZE( configuration_information_t, 0x28 );                                  
    };                                                  
};
#include "magic/configuration_information_t.end.hpp"
SDK_VERIFY( struct nt::configuration_information_t, 0x28 );
