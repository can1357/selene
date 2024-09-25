#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct AsyncIMultiQI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_multi_qi_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "AsyncIMultiQI.$", 0x8, true, 0x8502dd878bddae0 );
        SDK_FIXED_SIZE( async_i_multi_qi_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::async_i_multi_qi_t, 0x8 );
