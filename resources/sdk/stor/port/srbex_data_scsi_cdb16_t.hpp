#pragma once
#include <sdkgen/support_library.hpp>
#include "srbexdatatype_t.hpp"

#include "magic/srbex_data_scsi_cdb16_t.start.hpp"
namespace stor::port
{
    // [struct _SRBEX_DATA_SCSI_CDB16]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct srbex_data_scsi_cdb16_t                                     
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                             
        _m00 enum stor::port::srbexdatatype_t type;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                         length;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint8_t                          scsi_status;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ScsiStatus
        _m03 uint8_t                          sense_info_buffer_length;  //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .SenseInfoBufferLength
        _m04 uint8_t                          cdb_length;                //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .CdbLength
        _m05 void*                            sense_info_buffer;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SenseInfoBuffer
        _m06 sdk::array<uint8_t, 16>          cdb;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Cdb
                                                                       
        SDK_MAGIC_PROPERTIES( "_SRBEX_DATA_SCSI_CDB16.$", 0x28, true, 0xabebbb7b7654c1ef );                         
        SDK_FIXED_SIZE( srbex_data_scsi_cdb16_t, 0x28 );                         
    };                                                                 
};
#include "magic/srbex_data_scsi_cdb16_t.end.hpp"
SDK_VERIFY( struct stor::port::srbex_data_scsi_cdb16_t, 0x28 );
