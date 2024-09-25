#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_cd_t.start.hpp"
namespace stor::port
{
    // [struct _READ_CD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_cd_t                                      
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                relative_address;       //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .RelativeAddress
        _m02 uint3_t                expected_sector_type;   //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .ExpectedSectorType
        _m03 uint3_t                lun;                    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m04 sdk::array<uint8_t, 4> starting_lba;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingLBA
        _m05 sdk::array<uint8_t, 3> transfer_blocks;        //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .TransferBlocks
        _m06 uint2_t                error_flags;            //{ +0x0009@1  +0x0009@1  +0x0009@1  +0x0009@1  +0x0009@1  } | .ErrorFlags
        _m07 uint1_t                include_edc;            //{ +0x0009@3  +0x0009@3  +0x0009@3  +0x0009@3  +0x0009@3  } | .IncludeEDC
        _m08 uint1_t                include_user_data;      //{ +0x0009@4  +0x0009@4  +0x0009@4  +0x0009@4  +0x0009@4  } | .IncludeUserData
        _m09 uint2_t                header_code;            //{ +0x0009@5  +0x0009@5  +0x0009@5  +0x0009@5  +0x0009@5  } | .HeaderCode
        _m10 uint1_t                include_sync_data;      //{ +0x0009@7  +0x0009@7  +0x0009@7  +0x0009@7  +0x0009@7  } | .IncludeSyncData
        _m11 uint3_t                sub_channel_selection;  //{ +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  } | .SubChannelSelection
        _m12 uint8_t                control;                //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_READ_CD.$", 0xc, true, 0x16461ba6ebc2dd7d );                      
        SDK_FIXED_SIZE( read_cd_t, 0xc );                      
    };                                                    
};
#include "magic/read_cd_t.end.hpp"
SDK_VERIFY( struct stor::port::read_cd_t, 0xc );
