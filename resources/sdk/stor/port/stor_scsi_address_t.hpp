#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_scsi_address_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_SCSI_ADDRESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct stor_scsi_address_t 
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2          
        //                     
        _m00 uint8_t path_id;    //{ +0x0000    +0x0000    +0x0000    } | .PathId
        _m01 uint8_t target_id;  //{ +0x0001    +0x0001    +0x0001    } | .TargetId
        _m02 uint8_t lun;        //{ +0x0002    +0x0002    +0x0002    } | .Lun
                               
        SDK_MAGIC_PROPERTIES( "_STOR_SCSI_ADDRESS.$", 0x4, true, 0x1e30e0224b243bc7 );          
        SDK_FIXED_SIZE( stor_scsi_address_t, 0x4 );          
    };                         
};
#include "magic/stor_scsi_address_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_scsi_address_t, 0x4 );
