#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _PACKAGE_INFO_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct package_info_reference_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_PACKAGE_INFO_REFERENCE.$", 0x8, true, 0x95e0bc61e1cc41bd );
        SDK_FIXED_SIZE( package_info_reference_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::package_info_reference_t, 0x8 );
