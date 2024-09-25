#pragma once
#include <sdkgen/support_library.hpp>
#include "priority_hint_t.hpp"

#include "magic/file_io_priority_hint_info_t.start.hpp"
namespace win
{
    // [struct _FILE_IO_PRIORITY_HINT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_io_priority_hint_info_t              
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                           
        _m00 enum win::priority_hint_t priority_hint;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PriorityHint
                                                     
        SDK_MAGIC_PROPERTIES( "_FILE_IO_PRIORITY_HINT_INFO.$", 0x4, true, 0xe673a2187c267f50 );              
        SDK_FIXED_SIZE( file_io_priority_hint_info_t, 0x4 );              
    };                                               
};
#include "magic/file_io_priority_hint_info_t.end.hpp"
SDK_VERIFY( struct win::file_io_priority_hint_info_t, 0x4 );
