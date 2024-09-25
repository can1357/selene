#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/journal_client_information_t.start.hpp"
namespace win
{
    // [struct _JOURNAL_CLIENT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct journal_client_information_t   
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 int64_t  start_time_stamp;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartTimeStamp
        _m01 int64_t  current_time_stamp;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentTimeStamp
        _m02 uint64_t records_to_process;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RecordsToProcess
        _m03 uint32_t relative_fill_level;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RelativeFillLevel
                                          
        SDK_MAGIC_PROPERTIES( "_JOURNAL_CLIENT_INFORMATION.$", 0x20, true, 0xb5cf8b1be0cd1cfc );                    
        SDK_FIXED_SIZE( journal_client_information_t, 0x20 );                    
    };                                    
};
#include "magic/journal_client_information_t.end.hpp"
SDK_VERIFY( struct win::journal_client_information_t, 0x20 );
