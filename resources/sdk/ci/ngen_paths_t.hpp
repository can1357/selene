#pragma once
#include <sdkgen/support_library.hpp>

namespace ci
{
    // [struct _CI_NGEN_PATHS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ngen_paths_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "_CI_NGEN_PATHS.$", 0x0, true, 0x33dbee6933a20290 );
        SDK_FIXED_SIZE( ngen_paths_t, 0x0 );
    };                 
};
SDK_VERIFY( struct ci::ngen_paths_t, 0x0 );
