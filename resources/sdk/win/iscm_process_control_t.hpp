#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISCMProcessControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iscm_process_control_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "ISCMProcessControl.$", 0x8, true, 0xeab5418cf364655a );
        SDK_FIXED_SIZE( iscm_process_control_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::iscm_process_control_t, 0x8 );
