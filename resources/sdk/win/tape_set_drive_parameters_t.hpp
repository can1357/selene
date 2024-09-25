#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_set_drive_parameters_t.start.hpp"
namespace win
{
    // [struct _TAPE_SET_DRIVE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_set_drive_parameters_t      
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint8_t  ecc;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ECC
        _m01 uint8_t  compression;            //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Compression
        _m02 uint8_t  data_padding;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .DataPadding
        _m03 uint8_t  report_setmarks;        //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .ReportSetmarks
        _m04 uint32_t eot_warning_zone_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .EOTWarningZoneSize
                                            
        SDK_NONVOL_PROPERTIES( "_TAPE_SET_DRIVE_PARAMETERS.$", 0x8, true, 0xd20128f1f646a50e );                      
        SDK_FIXED_SIZE( tape_set_drive_parameters_t, 0x8 );                      
    };                                      
};
#include "magic/tape_set_drive_parameters_t.end.hpp"
SDK_VERIFY( struct win::tape_set_drive_parameters_t, 0x8 );
