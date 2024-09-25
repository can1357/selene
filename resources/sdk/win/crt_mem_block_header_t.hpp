#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _CrtMemBlockHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crt_mem_block_header_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_CrtMemBlockHeader.$", 0x0, true, 0xf8a1ec0c74d5e53d );
        SDK_FIXED_SIZE( crt_mem_block_header_t, 0x0 );
    };                           
};
SDK_VERIFY( struct win::crt_mem_block_header_t, 0x0 );
