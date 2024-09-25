#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/floppy_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_FLOPPY_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct floppy_device_data_t                             
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                  
        _m00 uint16_t            version;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t            revision;                    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 sdk::array<char, 8> size;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m03 uint32_t            max_density;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxDensity
        _m04 uint32_t            mount_density;               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MountDensity
        _m05 uint8_t             step_rate_head_unload_time;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .StepRateHeadUnloadTime
        _m06 uint8_t             head_load_time;              //{ +0x0015    +0x0015    +0x0015    +0x0015    +0x0015    } | .HeadLoadTime
        _m07 uint8_t             motor_off_time;              //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .MotorOffTime
        _m08 uint8_t             sector_length_code;          //{ +0x0017    +0x0017    +0x0017    +0x0017    +0x0017    } | .SectorLengthCode
        _m09 uint8_t             sector_per_track;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SectorPerTrack
        _m10 uint8_t             read_write_gap_length;       //{ +0x0019    +0x0019    +0x0019    +0x0019    +0x0019    } | .ReadWriteGapLength
        _m11 uint8_t             data_transfer_length;        //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .DataTransferLength
        _m12 uint8_t             format_gap_length;           //{ +0x001b    +0x001b    +0x001b    +0x001b    +0x001b    } | .FormatGapLength
        _m13 uint8_t             format_fill_character;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .FormatFillCharacter
        _m14 uint8_t             head_settle_time;            //{ +0x001d    +0x001d    +0x001d    +0x001d    +0x001d    } | .HeadSettleTime
        _m15 uint8_t             motor_settle_time;           //{ +0x001e    +0x001e    +0x001e    +0x001e    +0x001e    } | .MotorSettleTime
        _m16 uint8_t             maximum_track_value;         //{ +0x001f    +0x001f    +0x001f    +0x001f    +0x001f    } | .MaximumTrackValue
        _m17 uint8_t             data_transfer_rate;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DataTransferRate
                                                            
        SDK_NONVOL_PROPERTIES( "_CM_FLOPPY_DEVICE_DATA.$", 0x24, true, 0xbcc606ea8cdb4673 );                           
        SDK_FIXED_SIZE( floppy_device_data_t, 0x24 );                           
    };                                                      
};
#include "magic/floppy_device_data_t.end.hpp"
SDK_VERIFY( struct cm::floppy_device_data_t, 0x24 );
