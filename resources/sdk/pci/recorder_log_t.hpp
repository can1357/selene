#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [struct RECORDER_LOG__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct recorder_log_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "RECORDER_LOG__.$", 0x4, true, 0x9449155f6f0807ae );
        SDK_FIXED_SIZE( recorder_log_t, 0x4 );
    };                   
};
SDK_VERIFY( struct pci::recorder_log_t, 0x4 );
