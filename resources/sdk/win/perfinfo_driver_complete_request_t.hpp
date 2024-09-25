#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_driver_complete_request_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DRIVER_COMPLETE_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_driver_complete_request_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 void*    routine_addr;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RoutineAddr
        _m01 void*    irp;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Irp
        _m02 uint32_t uniq_match_id;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UniqMatchId
                                             
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DRIVER_COMPLETE_REQUEST.$", 0x14, true, 0xf3a5a6ad6a998580 );              
        SDK_FIXED_SIZE( perfinfo_driver_complete_request_t, 0x14 );              
    };                                       
};
#include "magic/perfinfo_driver_complete_request_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_driver_complete_request_t, 0x14 );
