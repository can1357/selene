#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CAssemblyRefEnumerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_assembly_ref_enumerator_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "CAssemblyRefEnumerator.$", 0x18, true, 0x5da7d62922bf9f59 );
        SDK_FIXED_SIZE( c_assembly_ref_enumerator_t, 0x18 );
    };                               
};
SDK_VERIFY( class win::c_assembly_ref_enumerator_t, 0x18 );
