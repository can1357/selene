#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _Cnd_internal_imp_t]
    // => Windows 11
    //
    struct cnd_internal_imp_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_Cnd_internal_imp_t.$", 0x0, false, 0x9fbf79871688c929 );
        SDK_FIXED_SIZE( cnd_internal_imp_t, 0x0 );
    };                       
};
SDK_VERIFY( struct win::cnd_internal_imp_t, 0x0 );
