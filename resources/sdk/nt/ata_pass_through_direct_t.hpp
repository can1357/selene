#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ata_pass_through_direct_t.start.hpp"
namespace nt
{
    // [struct _ATA_PASS_THROUGH_DIRECT]
    // => WDK 10 (NV)
    //
    struct ata_pass_through_direct_t                     
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint16_t               length;                //{ +0x0000    } | .Length
        _m01 uint16_t               ata_flags;             //{ +0x0002    } | .AtaFlags
        _m02 uint8_t                path_id;               //{ +0x0004    } | .PathId
        _m03 uint8_t                target_id;             //{ +0x0005    } | .TargetId
        _m04 uint8_t                lun;                   //{ +0x0006    } | .Lun
        _m05 uint8_t                reserved_as_uchar;     //{ +0x0007    } | .ReservedAsUchar
        _m06 uint32_t               data_transfer_length;  //{ +0x0008    } | .DataTransferLength
        _m07 uint32_t               time_out_value;        //{ +0x000c    } | .TimeOutValue
        _m08 uint32_t               reserved_as_ulong;     //{ +0x0010    } | .ReservedAsUlong
        _m09 void*                  data_buffer;           //{ +0x0018    } | .DataBuffer
        _m10 sdk::array<uint8_t, 8> previous_task_file;    //{ +0x0020    } | .PreviousTaskFile
        _m11 sdk::array<uint8_t, 8> current_task_file;     //{ +0x0028    } | .CurrentTaskFile
                                                         
        SDK_NONVOL_PROPERTIES( "_ATA_PASS_THROUGH_DIRECT.$", 0x0, false, 0x37469dddd8e3c69b );                     
        SDK_FIXED_SIZE( ata_pass_through_direct_t, 0x30 );                     
    };                                                   
};
#include "magic/ata_pass_through_direct_t.end.hpp"
SDK_VERIFY( struct nt::ata_pass_through_direct_t, 0x30 );
