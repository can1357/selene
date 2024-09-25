#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coordinated_synchronization_t.start.hpp"
namespace ppm
{
    // [union _PPM_COORDINATED_SYNCHRONIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union coordinated_synchronization_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int32_t  as_long;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsLong
        _m01 uint12_t enter_processor;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .EnterProcessor
        _m02 uint12_t exit_processor;    //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .ExitProcessor
        _m03 uint2_t  transition;        //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Transition
        _m04 uint1_t  entered;           //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .Entered
        _m05 uint5_t  entry_priority;    //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .EntryPriority
                                       
        SDK_MAGIC_PROPERTIES( "_PPM_COORDINATED_SYNCHRONIZATION.$", 0x4, true, 0x42adebb4a2ad88ad );                
        SDK_FIXED_SIZE( coordinated_synchronization_t, 0x4 );                
    };                                 
};
#include "magic/coordinated_synchronization_t.end.hpp"
SDK_VERIFY( union ppm::coordinated_synchronization_t, 0x4 );
