#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class IClassClassicInfo2Impl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_class_classic_info2_impl_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IClassClassicInfo2Impl.$", 0x8, true, 0xe684b50e0b922461 );
        SDK_FIXED_SIZE( i_class_classic_info2_impl_t, 0x8 );
    };                                
};
SDK_VERIFY( class win::i_class_classic_info2_impl_t, 0x8 );
