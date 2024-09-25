#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_get_drive_parameters_t.start.hpp"
namespace win
{
    // [struct _TAPE_GET_DRIVE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_get_drive_parameters_t        
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint8_t  ecc;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ECC
        _m01 uint8_t  compression;              //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Compression
        _m02 uint8_t  data_padding;             //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .DataPadding
        _m03 uint8_t  report_setmarks;          //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .ReportSetmarks
        _m04 uint32_t default_block_size;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DefaultBlockSize
        _m05 uint32_t maximum_block_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumBlockSize
        _m06 uint32_t minimum_block_size;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MinimumBlockSize
        _m07 uint32_t maximum_partition_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumPartitionCount
        _m08 uint32_t features_low;             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FeaturesLow
        _m09 uint32_t features_high;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FeaturesHigh
        _m10 uint32_t eot_warning_zone_size;    //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .EOTWarningZoneSize
                                              
        SDK_NONVOL_PROPERTIES( "_TAPE_GET_DRIVE_PARAMETERS.$", 0x20, true, 0x2f3eb0290a1a8867 );                        
        SDK_FIXED_SIZE( tape_get_drive_parameters_t, 0x20 );                        
    };                                        
};
#include "magic/tape_get_drive_parameters_t.end.hpp"
SDK_VERIFY( struct win::tape_get_drive_parameters_t, 0x20 );
