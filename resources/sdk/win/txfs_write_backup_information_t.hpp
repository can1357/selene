#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_write_backup_information_t.start.hpp"
namespace win
{
    // [struct _TXFS_WRITE_BACKUP_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_write_backup_information_t 
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                 
        _m00 sdk::array<uint8_t, 1> buffer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                                           
        SDK_NONVOL_PROPERTIES( "_TXFS_WRITE_BACKUP_INFORMATION.$", 0x1, true, 0x6926ed38b1d6f388 );       
        SDK_FIXED_SIZE( txfs_write_backup_information_t, 0x1 );       
    };                                     
};
#include "magic/txfs_write_backup_information_t.end.hpp"
SDK_VERIFY( struct win::txfs_write_backup_information_t, 0x1 );
