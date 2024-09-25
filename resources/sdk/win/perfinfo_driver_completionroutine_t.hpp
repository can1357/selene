#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_driver_completionroutine_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DRIVER_COMPLETIONROUTINE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_driver_completionroutine_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 void*    routine;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Routine
        _m01 void*    irp_ptr;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IrpPtr
        _m02 uint32_t uniq_match_id;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UniqMatchId
                                              
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DRIVER_COMPLETIONROUTINE.$", 0x14, true, 0x3adf47584ecb4dd0 );              
        SDK_FIXED_SIZE( perfinfo_driver_completionroutine_t, 0x14 );              
    };                                        
};
#include "magic/perfinfo_driver_completionroutine_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_driver_completionroutine_t, 0x14 );
