#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CRpcThreadCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_rpc_thread_cache_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "CRpcThreadCache.$", 0x1, true, 0xd571f8e8221431f8 );
        SDK_FIXED_SIZE( c_rpc_thread_cache_t, 0x1 );
    };                        
};
SDK_VERIFY( class win::c_rpc_thread_cache_t, 0x1 );
