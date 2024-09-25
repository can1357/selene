#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_record_t.start.hpp"
namespace nt
{
    // [struct _DISK_RECORD]
    // => WDK 10 (NV)
    //
    struct disk_record_t              
    {                                 
        // WDK 10                     
        //                            
        _m00 int64_t  byte_offset;      //{ +0x0000    } | .ByteOffset
        _m01 int64_t  start_time;       //{ +0x0008    } | .StartTime
        _m02 int64_t  end_time;         //{ +0x0010    } | .EndTime
        _m03 void*    virtual_address;  //{ +0x0018    } | .VirtualAddress
        _m04 uint32_t number_of_bytes;  //{ +0x0020    } | .NumberOfBytes
        _m05 uint8_t  device_number;    //{ +0x0024    } | .DeviceNumber
        _m06 uint8_t  read_request;     //{ +0x0025    } | .ReadRequest
                                      
        SDK_NONVOL_PROPERTIES( "_DISK_RECORD.$", 0x0, false, 0xe4aafb2b5c4d64b3 );                
        SDK_FIXED_SIZE( disk_record_t, 0x28 );                
    };                                
};
#include "magic/disk_record_t.end.hpp"
SDK_VERIFY( struct nt::disk_record_t, 0x28 );
