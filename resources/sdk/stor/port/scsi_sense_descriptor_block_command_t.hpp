#pragma once
#include <sdkgen/support_library.hpp>
#include "scsi_sense_descriptor_header_t.hpp"

#include "magic/scsi_sense_descriptor_block_command_t.start.hpp"
namespace stor::port
{
    // [struct _SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scsi_sense_descriptor_block_command_t              
    {                                                         
        using scsi_sense_descriptor_header_t = struct stor::port::scsi_sense_descriptor_header_t;                 
                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 scsi_sense_descriptor_header_t  header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint1_t                         incorrect_length;  //{ +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  } | .IncorrectLength
                                                              
        SDK_NONVOL_PROPERTIES( "_SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND.$", 0x4, true, 0x272a3db0e393e6ec );                 
        SDK_FIXED_SIZE( scsi_sense_descriptor_block_command_t, 0x4 );                 
    };                                                        
};
#include "magic/scsi_sense_descriptor_block_command_t.end.hpp"
SDK_VERIFY( struct stor::port::scsi_sense_descriptor_block_command_t, 0x4 );
