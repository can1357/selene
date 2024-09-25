#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/priority_hint_t.hpp"

#include "magic/file_io_priority_hint_information_ex_t.start.hpp"
namespace win
{
    // [struct _FILE_IO_PRIORITY_HINT_INFORMATION_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_io_priority_hint_information_ex_t       
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 enum io::priority_hint_t priority_hint;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PriorityHint
        _m01 uint8_t                  boost_outstanding;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BoostOutstanding
                                                        
        SDK_NONVOL_PROPERTIES( "_FILE_IO_PRIORITY_HINT_INFORMATION_EX.$", 0x8, true, 0xeeeeda43a54c5f6a );                  
        SDK_FIXED_SIZE( file_io_priority_hint_information_ex_t, 0x8 );                  
    };                                                  
};
#include "magic/file_io_priority_hint_information_ex_t.end.hpp"
SDK_VERIFY( struct win::file_io_priority_hint_information_ex_t, 0x8 );
