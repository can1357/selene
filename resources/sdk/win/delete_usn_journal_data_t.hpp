#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/delete_usn_journal_data_t.start.hpp"
namespace win
{
    // [struct DELETE_USN_JOURNAL_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct delete_usn_journal_data_t 
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t usn_journal_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UsnJournalID
        _m01 uint32_t delete_flags;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeleteFlags
                                     
        SDK_MAGIC_PROPERTIES( "DELETE_USN_JOURNAL_DATA.$", 0x10, true, 0x62a36c2336a4364a );               
        SDK_FIXED_SIZE( delete_usn_journal_data_t, 0x10 );               
    };                               
};
#include "magic/delete_usn_journal_data_t.end.hpp"
SDK_VERIFY( struct win::delete_usn_journal_data_t, 0x10 );
