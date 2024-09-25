#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_ata_device_id_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_ATA_DEVICE_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_ata_device_id_t                        
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                             
        _m00 sdk::array<uint8_t, 41> model_number;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ModelNumber
        _m01 sdk::array<uint8_t, 9>  firmware_revision;  //{ +0x0029    +0x0029    +0x0029    +0x0029    } | .FirmwareRevision
                                                       
        SDK_MAGIC_PROPERTIES( "_STOR_ATA_DEVICE_ID.$", 0x32, true, 0xad4d6ef821650063 );                  
        SDK_FIXED_SIZE( stor_ata_device_id_t, 0x32 );                  
    };                                                 
};
#include "magic/stor_ata_device_id_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_ata_device_id_t, 0x32 );
