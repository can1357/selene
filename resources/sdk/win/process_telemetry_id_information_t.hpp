#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_telemetry_id_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_TELEMETRY_ID_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_telemetry_id_information_t        
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t header_size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeaderSize
        _m01 uint32_t process_id;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProcessId
        _m02 uint64_t process_start_key;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessStartKey
        _m03 uint64_t create_time;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CreateTime
        _m04 uint64_t create_interrupt_time;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreateInterruptTime
        _m05 uint64_t create_unbiased_interrupt_time;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CreateUnbiasedInterruptTime
        _m06 uint64_t process_sequence_number;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProcessSequenceNumber
        _m07 uint64_t session_create_time;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SessionCreateTime
        _m08 uint32_t session_id;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SessionId
        _m09 uint32_t boot_id;                         //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .BootId
        _m10 uint32_t image_checksum;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ImageChecksum
        _m11 uint32_t image_time_date_stamp;           //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ImageTimeDateStamp
        _m12 uint32_t user_sid_offset;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .UserSidOffset
        _m13 uint32_t image_path_offset;               //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ImagePathOffset
        _m14 uint32_t package_name_offset;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PackageNameOffset
        _m15 uint32_t relative_app_name_offset;        //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .RelativeAppNameOffset
        _m16 uint32_t command_line_offset;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CommandLineOffset
                                                     
        SDK_MAGIC_PROPERTIES( "_PROCESS_TELEMETRY_ID_INFORMATION.$", 0x60, true, 0x25586b5cc026af07 );                               
        SDK_FIXED_SIZE( process_telemetry_id_information_t, 0x60 );                               
    };                                               
};
#include "magic/process_telemetry_id_information_t.end.hpp"
SDK_VERIFY( struct win::process_telemetry_id_information_t, 0x60 );
