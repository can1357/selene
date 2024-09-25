#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumSCMProcessInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_scm_process_info_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IEnumSCMProcessInfo.$", 0x8, true, 0x4f0d9115d27ae4ed );
        SDK_FIXED_SIZE( i_enum_scm_process_info_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_enum_scm_process_info_t, 0x8 );
