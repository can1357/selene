#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_pass_through_direct32_ex_t.start.hpp"
namespace nt
{
    // [struct _SCSI_PASS_THROUGH_DIRECT32_EX]
    // => WDK 10 (NV)
    //
    struct scsi_pass_through_direct32_ex_t                   
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t               version;                   //{ +0x0000    } | .Version
        _m01 uint32_t               length;                    //{ +0x0004    } | .Length
        _m02 uint32_t               cdb_length;                //{ +0x0008    } | .CdbLength
        _m03 uint32_t               stor_address_length;       //{ +0x000c    } | .StorAddressLength
        _m04 uint8_t                scsi_status;               //{ +0x0010    } | .ScsiStatus
        _m05 uint8_t                sense_info_length;         //{ +0x0011    } | .SenseInfoLength
        _m06 uint8_t                data_direction;            //{ +0x0012    } | .DataDirection
        _m07 uint32_t               time_out_value;            //{ +0x0014    } | .TimeOutValue
        _m08 uint32_t               stor_address_offset;       //{ +0x0018    } | .StorAddressOffset
        _m09 uint32_t               sense_info_offset;         //{ +0x001c    } | .SenseInfoOffset
        _m10 uint32_t               data_out_transfer_length;  //{ +0x0020    } | .DataOutTransferLength
        _m11 uint32_t               data_in_transfer_length;   //{ +0x0024    } | .DataInTransferLength
        _m12 void __ptr32*          data_out_buffer;           //{ +0x0028    } | .DataOutBuffer
        _m13 void __ptr32*          data_in_buffer;            //{ +0x002c    } | .DataInBuffer
        _m14 sdk::array<uint8_t, 1> cdb;                       //{ +0x0030    } | .Cdb
                                                             
        SDK_NONVOL_PROPERTIES( "_SCSI_PASS_THROUGH_DIRECT32_EX.$", 0x0, false, 0xd5a4a5f29eb514f3 );                         
        SDK_FIXED_SIZE( scsi_pass_through_direct32_ex_t, 0x34 );                         
    };                                                       
};
#include "magic/scsi_pass_through_direct32_ex_t.end.hpp"
SDK_VERIFY( struct nt::scsi_pass_through_direct32_ex_t, 0x34 );
