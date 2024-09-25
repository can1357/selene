#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_instrumentation_callback_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_INSTRUMENTATION_CALLBACK_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_instrumentation_callback_information_t
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t version;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint64_t callback;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Callback
                                                         
        SDK_MAGIC_PROPERTIES( "_PROCESS_INSTRUMENTATION_CALLBACK_INFORMATION.$", 0x10, true, 0x311da4c60d7f3a75 );         
        SDK_FIXED_SIZE( process_instrumentation_callback_information_t, 0x10 );         
    };                                                   
};
#include "magic/process_instrumentation_callback_information_t.end.hpp"
SDK_VERIFY( struct win::process_instrumentation_callback_information_t, 0x10 );
