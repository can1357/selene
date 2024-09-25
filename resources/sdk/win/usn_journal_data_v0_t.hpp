#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usn_journal_data_v0_t.start.hpp"
namespace win
{
    // [struct USN_JOURNAL_DATA_V0]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_journal_data_v0_t       
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t usn_journal_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UsnJournalID
        _m01 int64_t  first_usn;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstUsn
        _m02 int64_t  next_usn;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextUsn
        _m03 int64_t  lowest_valid_usn;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowestValidUsn
        _m04 int64_t  max_usn;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaxUsn
        _m05 uint64_t maximum_size;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaximumSize
        _m06 uint64_t allocation_delta;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AllocationDelta
                                       
        SDK_MAGIC_PROPERTIES( "USN_JOURNAL_DATA_V0.$", 0x38, true, 0x4a5bdff288e4ba8e );                 
        SDK_FIXED_SIZE( usn_journal_data_v0_t, 0x38 );                 
    };                                 
};
#include "magic/usn_journal_data_v0_t.end.hpp"
SDK_VERIFY( struct win::usn_journal_data_v0_t, 0x38 );
