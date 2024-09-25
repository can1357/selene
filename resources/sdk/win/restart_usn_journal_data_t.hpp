#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/restart_usn_journal_data_t.start.hpp"
namespace win
{
    // [struct _RESTART_USN_JOURNAL_DATA]
    // => Windows 11
    //
    struct restart_usn_journal_data_t
    {                                
        // Windows 11       
        //                  
        _m00 uint32_t flags;           //{ +0x0000    } | .Flags
                                     
        SDK_MAGIC_PROPERTIES( "_RESTART_USN_JOURNAL_DATA.$", 0x0, false, 0xa5bb7c0cfdbf96f3 );      
        SDK_FIXED_SIZE( restart_usn_journal_data_t, 0x10 );      
    };                               
};
#include "magic/restart_usn_journal_data_t.end.hpp"
SDK_VERIFY( struct win::restart_usn_journal_data_t, 0x10 );
