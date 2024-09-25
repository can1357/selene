#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_interrupt_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_INTERRUPT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_interrupt_information_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t initial_time;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitialTime
        _m01 void*    service_routine;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ServiceRoutine
        _m02 uint8_t  return_value;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReturnValue
        _m03 uint16_t vector;                //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .Vector
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_INTERRUPT_INFORMATION.$", 0x14, true, 0x27f1f5b3ef77014d );                
        SDK_FIXED_SIZE( perfinfo_interrupt_information_t, 0x14 );                
    };                                     
};
#include "magic/perfinfo_interrupt_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_interrupt_information_t, 0x14 );
