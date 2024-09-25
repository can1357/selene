#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_read_backup_information_out_t.start.hpp"
namespace win
{
    // [struct _TXFS_READ_BACKUP_INFORMATION_OUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_read_backup_information_out_t     
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 uint32_t               buffer_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferLength
        _m01 sdk::array<uint8_t, 1> buffer;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                                                  
        SDK_NONVOL_PROPERTIES( "_TXFS_READ_BACKUP_INFORMATION_OUT.$", 0x4, true, 0x283bbefbe97dfc3e );              
        SDK_FIXED_SIZE( txfs_read_backup_information_out_t, 0x4 );              
    };                                            
};
#include "magic/txfs_read_backup_information_out_t.end.hpp"
SDK_VERIFY( struct win::txfs_read_backup_information_out_t, 0x4 );
