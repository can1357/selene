#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/create_usn_journal_data_t.start.hpp"
namespace win
{
    // [struct CREATE_USN_JOURNAL_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct create_usn_journal_data_t   
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t maximum_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumSize
        _m01 uint64_t allocation_delta;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationDelta
                                       
        SDK_MAGIC_PROPERTIES( "CREATE_USN_JOURNAL_DATA.$", 0x10, true, 0x3eac9db9fd37cdc7 );                 
        SDK_FIXED_SIZE( create_usn_journal_data_t, 0x10 );                 
    };                                 
};
#include "magic/create_usn_journal_data_t.end.hpp"
SDK_VERIFY( struct win::create_usn_journal_data_t, 0x10 );
