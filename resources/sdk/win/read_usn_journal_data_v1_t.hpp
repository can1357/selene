#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_usn_journal_data_v1_t.start.hpp"
namespace win
{
    // [struct READ_USN_JOURNAL_DATA_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct read_usn_journal_data_v1_t      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 int64_t  start_usn;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartUsn
        _m01 uint32_t reason_mask;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReasonMask
        _m02 uint32_t return_only_on_close;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReturnOnlyOnClose
        _m03 uint64_t timeout;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Timeout
        _m04 uint64_t bytes_to_wait_for;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BytesToWaitFor
        _m05 uint64_t usn_journal_id;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UsnJournalID
        _m06 uint16_t min_major_version;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MinMajorVersion
        _m07 uint16_t max_major_version;     //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .MaxMajorVersion
                                           
        SDK_MAGIC_PROPERTIES( "READ_USN_JOURNAL_DATA_V1.$", 0x30, true, 0xbdec1fc9a3ec82db );                     
        SDK_FIXED_SIZE( read_usn_journal_data_v1_t, 0x30 );                     
    };                                     
};
#include "magic/read_usn_journal_data_v1_t.end.hpp"
SDK_VERIFY( struct win::read_usn_journal_data_v1_t, 0x30 );
