#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/journal_absolute_information_t.start.hpp"
namespace win
{
    // [struct _JOURNAL_ABSOLUTE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct journal_absolute_information_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 int64_t  start_time_stamp;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartTimeStamp
        _m01 int64_t  end_time_stamp;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EndTimeStamp
        _m02 uint64_t number_of_records;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfRecords
        _m03 uint32_t fill_level;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FillLevel
                                         
        SDK_MAGIC_PROPERTIES( "_JOURNAL_ABSOLUTE_INFORMATION.$", 0x20, true, 0x9c1ee794cb14ae0e );                  
        SDK_FIXED_SIZE( journal_absolute_information_t, 0x20 );                  
    };                                   
};
#include "magic/journal_absolute_information_t.end.hpp"
SDK_VERIFY( struct win::journal_absolute_information_t, 0x20 );
