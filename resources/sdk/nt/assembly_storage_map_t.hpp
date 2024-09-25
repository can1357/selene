#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _ASSEMBLY_STORAGE_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct assembly_storage_map_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_ASSEMBLY_STORAGE_MAP.$", 0x0, true, 0xc8b66e11865eba18 );
        SDK_FIXED_SIZE( assembly_storage_map_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::assembly_storage_map_t, 0x0 );
