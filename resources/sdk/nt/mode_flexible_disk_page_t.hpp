#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_flexible_disk_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_FLEXIBLE_DISK_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_flexible_disk_page_t                          
    {                                                         
        // WDK 10                                             
        //                                                    
        _m000 uint6_t                page_code;                 //{ +0x0000@0  } | .PageCode
        _m001 uint1_t                page_savable;              //{ +0x0000@7  } | .PageSavable
        _m002 uint8_t                page_length;               //{ +0x0001    } | .PageLength
        _m003 sdk::array<uint8_t, 2> transfer_rate;             //{ +0x0002    } | .TransferRate
        _m004 uint8_t                number_of_heads;           //{ +0x0004    } | .NumberOfHeads
        _m005 uint8_t                sectors_per_track;         //{ +0x0005    } | .SectorsPerTrack
        _m006 sdk::array<uint8_t, 2> bytes_per_sector;          //{ +0x0006    } | .BytesPerSector
        _m007 sdk::array<uint8_t, 2> number_of_cylinders;       //{ +0x0008    } | .NumberOfCylinders
        _m008 sdk::array<uint8_t, 2> start_write_precom;        //{ +0x000a    } | .StartWritePrecom
        _m009 sdk::array<uint8_t, 2> start_reduced_current;     //{ +0x000c    } | .StartReducedCurrent
        _m010 sdk::array<uint8_t, 2> step_rate;                 //{ +0x000e    } | .StepRate
        _m011 uint8_t                step_pluse_width;          //{ +0x0010    } | .StepPluseWidth
        _m012 sdk::array<uint8_t, 2> head_settle_delay;         //{ +0x0011    } | .HeadSettleDelay
        _m013 uint8_t                motor_on_delay;            //{ +0x0013    } | .MotorOnDelay
        _m014 uint8_t                motor_off_delay;           //{ +0x0014    } | .MotorOffDelay
        _m015 uint1_t                motor_on_asserted;         //{ +0x0015@5  } | .MotorOnAsserted
        _m016 uint1_t                start_sector_number;       //{ +0x0015@6  } | .StartSectorNumber
        _m017 uint1_t                true_ready_signal;         //{ +0x0015@7  } | .TrueReadySignal
        _m018 uint4_t                step_pluse_per_cyclynder;  //{ +0x0016@0  } | .StepPlusePerCyclynder
        _m019 uint8_t                write_compenstation;       //{ +0x0017    } | .WriteCompenstation
        _m020 uint8_t                head_load_delay;           //{ +0x0018    } | .HeadLoadDelay
        _m021 uint8_t                head_unload_delay;         //{ +0x0019    } | .HeadUnloadDelay
        _m022 uint4_t                pin2_usage;                //{ +0x001a@0  } | .Pin2Usage
        _m023 uint4_t                pin34_usage;               //{ +0x001a@4  } | .Pin34Usage
        _m024 uint4_t                pin1_usage;                //{ +0x001b@0  } | .Pin1Usage
        _m025 uint4_t                pin4_usage;                //{ +0x001b@4  } | .Pin4Usage
        _m026 sdk::array<uint8_t, 2> medium_rotation_rate;      //{ +0x001c    } | .MediumRotationRate
                                                              
        SDK_NONVOL_PROPERTIES( "_MODE_FLEXIBLE_DISK_PAGE.$", 0x0, false, 0xabe78e6f93e8bdea );                         
        SDK_FIXED_SIZE( mode_flexible_disk_page_t, 0x20 );                         
    };                                                        
};
#include "magic/mode_flexible_disk_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_flexible_disk_page_t, 0x20 );
