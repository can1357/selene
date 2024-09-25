#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_SCSI_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scsi_device_data_t         
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint16_t version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t revision;         //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 uint8_t  host_identifier;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .HostIdentifier
                                      
        SDK_NONVOL_PROPERTIES( "_CM_SCSI_DEVICE_DATA.$", 0x6, true, 0x113c3cbfff929260 );                
        SDK_FIXED_SIZE( scsi_device_data_t, 0x6 );                
    };                                
};
#include "magic/scsi_device_data_t.end.hpp"
SDK_VERIFY( struct cm::scsi_device_data_t, 0x6 );
