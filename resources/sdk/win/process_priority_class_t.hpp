#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_priority_class_t.start.hpp"
namespace win
{
    // [struct _PROCESS_PRIORITY_CLASS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_priority_class_t 
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 uint8_t foreground;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Foreground
        _m01 uint8_t priority_class;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .PriorityClass
                                    
        SDK_MAGIC_PROPERTIES( "_PROCESS_PRIORITY_CLASS.$", 0x2, true, 0xc947d33989d96ef0 );               
        SDK_FIXED_SIZE( process_priority_class_t, 0x2 );               
    };                              
};
#include "magic/process_priority_class_t.end.hpp"
SDK_VERIFY( struct win::process_priority_class_t, 0x2 );
