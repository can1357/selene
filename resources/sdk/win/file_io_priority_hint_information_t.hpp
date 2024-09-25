#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/priority_hint_t.hpp"

#include "magic/file_io_priority_hint_information_t.start.hpp"
namespace win
{
    // [struct _FILE_IO_PRIORITY_HINT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_io_priority_hint_information_t      
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 enum io::priority_hint_t priority_hint;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PriorityHint
                                                    
        SDK_NONVOL_PROPERTIES( "_FILE_IO_PRIORITY_HINT_INFORMATION.$", 0x4, true, 0x2e161201bbc9f0c );              
        SDK_FIXED_SIZE( file_io_priority_hint_information_t, 0x4 );              
    };                                              
};
#include "magic/file_io_priority_hint_information_t.end.hpp"
SDK_VERIFY( struct win::file_io_priority_hint_information_t, 0x4 );
