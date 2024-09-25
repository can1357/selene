#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_dpc_execution_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DPC_EXECUTION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_dpc_execution_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    dpc_routine;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DpcRoutine
        _m01 uint64_t key;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                                               
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DPC_EXECUTION_INFORMATION.$", 0x10, true, 0x69c2653c9bf0dfb0 );            
        SDK_FIXED_SIZE( perfinfo_dpc_execution_information_t, 0x10 );            
    };                                         
};
#include "magic/perfinfo_dpc_execution_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_dpc_execution_information_t, 0x10 );
