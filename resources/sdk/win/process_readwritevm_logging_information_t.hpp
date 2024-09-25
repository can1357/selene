#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_readwritevm_logging_information_t.start.hpp"
namespace win
{
    // [union _PROCESS_READWRITEVM_LOGGING_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union process_readwritevm_logging_information_t
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                   
        _m00 uint8_t flags;                          //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t enable_read_vm_logging;         //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .EnableReadVmLogging
        _m02 uint1_t enable_write_vm_logging;        //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .EnableWriteVmLogging
                                                   
        SDK_MAGIC_PROPERTIES( "_PROCESS_READWRITEVM_LOGGING_INFORMATION.$", 0x1, true, 0x62ad75f1ad7c9ff0 );                        
        SDK_FIXED_SIZE( process_readwritevm_logging_information_t, 0x1 );                        
    };                                             
};
#include "magic/process_readwritevm_logging_information_t.end.hpp"
SDK_VERIFY( union win::process_readwritevm_logging_information_t, 0x1 );
