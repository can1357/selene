#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/firmware_error_record_reference_t.start.hpp"
namespace whea
{
    // [struct _WHEA_FIRMWARE_ERROR_RECORD_REFERENCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct firmware_error_record_reference_t
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t  type;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint64_t firmware_record_id;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FirmwareRecordId
                                            
        SDK_NONVOL_PROPERTIES( "_WHEA_FIRMWARE_ERROR_RECORD_REFERENCE.$", 0x10, true, 0x285b67688b7f562b );                   
        SDK_FIXED_SIZE( firmware_error_record_reference_t, 0x10 );                   
    };                                      
};
#include "magic/firmware_error_record_reference_t.end.hpp"
SDK_VERIFY( struct whea::firmware_error_record_reference_t, 0x10 );
