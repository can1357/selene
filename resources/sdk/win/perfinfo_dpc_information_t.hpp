#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_dpc_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DPC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_dpc_information_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t initial_time;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitialTime
        _m01 void*    dpc_routine;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcRoutine
                                     
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DPC_INFORMATION.$", 0x10, true, 0x304d656b247c8a4f );             
        SDK_FIXED_SIZE( perfinfo_dpc_information_t, 0x10 );             
    };                               
};
#include "magic/perfinfo_dpc_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_dpc_information_t, 0x10 );
