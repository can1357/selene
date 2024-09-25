#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_address_t.start.hpp"
namespace nt
{
    // [struct _SCSI_ADDRESS]
    // => WDK 10 (NV)
    //
    struct scsi_address_t         
    {                             
        // WDK 10                 
        //                        
        _m00 uint32_t length;       //{ +0x0000    } | .Length
        _m01 uint8_t  port_number;  //{ +0x0004    } | .PortNumber
        _m02 uint8_t  path_id;      //{ +0x0005    } | .PathId
        _m03 uint8_t  target_id;    //{ +0x0006    } | .TargetId
        _m04 uint8_t  lun;          //{ +0x0007    } | .Lun
                                  
        SDK_NONVOL_PROPERTIES( "_SCSI_ADDRESS.$", 0x0, false, 0xf5117787b9383b96 );            
        SDK_FIXED_SIZE( scsi_address_t, 0x8 );            
    };                            
};
#include "magic/scsi_address_t.end.hpp"
SDK_VERIFY( struct nt::scsi_address_t, 0x8 );
