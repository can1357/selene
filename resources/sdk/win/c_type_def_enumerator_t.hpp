#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CTypeDefEnumerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_type_def_enumerator_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "CTypeDefEnumerator.$", 0x18, true, 0x3857854c9715db5e );
        SDK_FIXED_SIZE( c_type_def_enumerator_t, 0x18 );
    };                           
};
SDK_VERIFY( class win::c_type_def_enumerator_t, 0x18 );
