#pragma once
#include <sdkgen/support_library.hpp>
#include "lba_t.hpp"
#include "msf_t.hpp"

#include "magic/play_cd_t.start.hpp"
namespace stor::port
{
    // [struct _PLAY_CD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct play_cd_t                                       
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 uint8_t                  operation_code;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                  cmsf;                  //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .CMSF
        _m02 uint3_t                  expected_sector_type;  //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .ExpectedSectorType
        _m03 uint3_t                  lun;                   //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m04 struct stor::port::lba_t lba;                   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LBA
        _m05 struct stor::port::msf_t msf;                   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .MSF
        _m06 uint1_t                  audio;                 //{ +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  } | .Audio
        _m07 uint1_t                  composite;             //{ +0x000a@1  +0x000a@1  +0x000a@1  +0x000a@1  +0x000a@1  } | .Composite
        _m08 uint1_t                  port1;                 //{ +0x000a@2  +0x000a@2  +0x000a@2  +0x000a@2  +0x000a@2  } | .Port1
        _m09 uint1_t                  port2;                 //{ +0x000a@3  +0x000a@3  +0x000a@3  +0x000a@3  +0x000a@3  } | .Port2
        _m10 uint1_t                  speed;                 //{ +0x000a@7  +0x000a@7  +0x000a@7  +0x000a@7  +0x000a@7  } | .Speed
        _m11 uint8_t                  control;               //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                           
        SDK_NONVOL_PROPERTIES( "_PLAY_CD.$", 0xc, true, 0x7dbbd9ebc03c3852 );                     
        SDK_FIXED_SIZE( play_cd_t, 0xc );                     
    };                                                     
};
#include "magic/play_cd_t.end.hpp"
SDK_VERIFY( struct stor::port::play_cd_t, 0xc );
