#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dedup_file_operation_t.start.hpp"
namespace win
{
    // [struct _DEDUP_FILE_OPERATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dedup_file_operation_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint32_t code;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Code
                                 
        SDK_MAGIC_PROPERTIES( "_DEDUP_FILE_OPERATION.$", 0x4, true, 0xee914148caf749ed );     
        SDK_FIXED_SIZE( dedup_file_operation_t, 0x4 );     
    };                           
};
#include "magic/dedup_file_operation_t.end.hpp"
SDK_VERIFY( struct win::dedup_file_operation_t, 0x4 );
