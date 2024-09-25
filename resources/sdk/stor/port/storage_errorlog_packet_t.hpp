#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_errorlog_packet_t.start.hpp"
namespace stor::port
{
    // [struct _STORAGE_ERRORLOG_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storage_errorlog_packet_t                     
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 uint8_t                 major_function_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorFunctionCode
        _m01 uint8_t                 retry_count;          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .RetryCount
        _m02 uint16_t                dump_data_size;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DumpDataSize
        _m03 uint16_t                number_of_strings;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfStrings
        _m04 uint16_t                string_offset;        //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .StringOffset
        _m05 uint16_t                event_category;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EventCategory
        _m06 uint32_t                error_code;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ErrorCode
        _m07 uint32_t                unique_error_value;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UniqueErrorValue
        _m08 uint32_t                final_status;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FinalStatus
        _m09 uint32_t                sequence_number;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SequenceNumber
        _m10 uint32_t                io_control_code;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .IoControlCode
        _m11 int64_t                 device_offset;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeviceOffset
        _m12 sdk::array<uint32_t, 1> dump_data;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DumpData
                                                         
        SDK_MAGIC_PROPERTIES( "_STORAGE_ERRORLOG_PACKET.$", 0x30, true, 0xb415e590a6d9f8d3 );                    
        SDK_FIXED_SIZE( storage_errorlog_packet_t, 0x30 );                    
    };                                                   
};
#include "magic/storage_errorlog_packet_t.end.hpp"
SDK_VERIFY( struct stor::port::storage_errorlog_packet_t, 0x30 );
