#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_io_timer_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_IO_TIMER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_io_timer_t     
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                         
        _m00 void* device_object;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceObject
        _m01 void* routine_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RoutineAddress
                                   
        SDK_MAGIC_PROPERTIES( "_PERFINFO_IO_TIMER.$", 0x10, true, 0x308791f8f5f4eae );                
        SDK_FIXED_SIZE( perfinfo_io_timer_t, 0x10 );                
    };                             
};
#include "magic/perfinfo_io_timer_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_io_timer_t, 0x10 );
