#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/int13_drive_parameter_t.start.hpp"
namespace cm
{
    // [struct _CM_INT13_DRIVE_PARAMETER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct int13_drive_parameter_t      
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t drive_select;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DriveSelect
        _m01 uint32_t max_cylinders;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .MaxCylinders
        _m02 uint16_t sectors_per_track;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .SectorsPerTrack
        _m03 uint16_t max_heads;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxHeads
        _m04 uint16_t number_drives;      //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .NumberDrives
                                        
        SDK_NONVOL_PROPERTIES( "_CM_INT13_DRIVE_PARAMETER.$", 0xc, true, 0xdfb5ac58d751ac47 );                  
        SDK_FIXED_SIZE( int13_drive_parameter_t, 0xc );                  
    };                                  
};
#include "magic/int13_drive_parameter_t.end.hpp"
SDK_VERIFY( struct cm::int13_drive_parameter_t, 0xc );
