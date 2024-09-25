#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IScmRequestInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_scm_request_info_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IScmRequestInfo.$", 0x8, true, 0x9eb9348793f33f92 );
        SDK_FIXED_SIZE( i_scm_request_info_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_scm_request_info_t, 0x8 );
