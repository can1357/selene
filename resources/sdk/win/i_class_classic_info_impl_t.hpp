#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class IClassClassicInfoImpl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_class_classic_info_impl_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IClassClassicInfoImpl.$", 0x8, true, 0x6296a4b7c6ef0ecf );
        SDK_FIXED_SIZE( i_class_classic_info_impl_t, 0x8 );
    };                               
};
SDK_VERIFY( class win::i_class_classic_info_impl_t, 0x8 );
