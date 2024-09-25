#pragma once
#include <sdkgen/support_library.hpp>
#include "error_log_packet_t.hpp"

#include "magic/error_log_message_t.start.hpp"
namespace io
{
    // [struct _IO_ERROR_LOG_MESSAGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_log_message_t                                
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                    
        _m00 uint16_t                      type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t                      size;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 uint16_t                      driver_name_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DriverNameLength
        _m03 int64_t                       time_stamp;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeStamp
        _m04 uint32_t                      driver_name_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DriverNameOffset
        _m05 struct io::error_log_packet_t entry_data;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EntryData
                                                              
        SDK_NONVOL_PROPERTIES( "_IO_ERROR_LOG_MESSAGE.$", 0x48, true, 0xc99bfeab74112f2a );                   
        SDK_FIXED_SIZE( error_log_message_t, 0x48 );                   
    };                                                        
};
#include "magic/error_log_message_t.end.hpp"
SDK_VERIFY( struct io::error_log_message_t, 0x48 );
