#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [struct _PNP_DEPENDENCY_PATH_TYPE]
    // => WDK 10
    //
    struct dependency_path_type_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_PNP_DEPENDENCY_PATH_TYPE.$", 0x0, false, 0xdf885f24591b70a8 );
        SDK_FIXED_SIZE( dependency_path_type_t, 0x0 );
    };                           
};
SDK_VERIFY( struct pnp::dependency_path_type_t, 0x0 );
