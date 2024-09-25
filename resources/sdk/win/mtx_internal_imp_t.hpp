#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _Mtx_internal_imp_t]
    // => Windows 11
    //
    struct mtx_internal_imp_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_Mtx_internal_imp_t.$", 0x0, false, 0xbed9787d7ffc0510 );
        SDK_FIXED_SIZE( mtx_internal_imp_t, 0x0 );
    };                       
};
SDK_VERIFY( struct win::mtx_internal_imp_t, 0x0 );
