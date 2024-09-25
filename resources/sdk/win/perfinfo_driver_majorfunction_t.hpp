#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_driver_majorfunction_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DRIVER_MAJORFUNCTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_driver_majorfunction_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t major_function;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorFunction
        _m01 uint32_t minor_function;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MinorFunction
        _m02 void*    routine_addr;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RoutineAddr
        _m03 void*    file_name_pointer;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileNamePointer
        _m04 void*    irp;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Irp
        _m05 uint32_t uniq_match_id;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UniqMatchId
                                          
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DRIVER_MAJORFUNCTION.$", 0x24, true, 0xb77c3a0fd385db96 );                  
        SDK_FIXED_SIZE( perfinfo_driver_majorfunction_t, 0x24 );                  
    };                                    
};
#include "magic/perfinfo_driver_majorfunction_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_driver_majorfunction_t, 0x24 );
