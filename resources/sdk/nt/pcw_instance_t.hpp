#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _PCW_INSTANCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pcw_instance_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "_PCW_INSTANCE.$", 0x0, true, 0x5d43a1ce98baa36c );
        SDK_FIXED_SIZE( pcw_instance_t, 0x0 );
    };                   
};
SDK_VERIFY( struct nt::pcw_instance_t, 0x0 );
