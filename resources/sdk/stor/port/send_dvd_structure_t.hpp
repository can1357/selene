#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/send_dvd_structure_t.start.hpp"
namespace stor::port
{
    // [struct _SEND_DVD_STRUCTURE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct send_dvd_structure_t                           
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                lun;                    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 uint8_t                format;                 //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .Format
        _m03 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ParameterListLength
        _m04 uint8_t                control;                //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_SEND_DVD_STRUCTURE.$", 0xc, true, 0x3b0217dc4e7fe38 );                      
        SDK_FIXED_SIZE( send_dvd_structure_t, 0xc );                      
    };                                                    
};
#include "magic/send_dvd_structure_t.end.hpp"
SDK_VERIFY( struct stor::port::send_dvd_structure_t, 0xc );
