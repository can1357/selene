#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CTypeRefEnumerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_type_ref_enumerator_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "CTypeRefEnumerator.$", 0x18, true, 0x8354bb9dbd57ba14 );
        SDK_FIXED_SIZE( c_type_ref_enumerator_t, 0x18 );
    };                           
};
SDK_VERIFY( class win::c_type_ref_enumerator_t, 0x18 );
