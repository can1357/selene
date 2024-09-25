#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class IComClassInfoImpl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_com_class_info_impl_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IComClassInfoImpl.$", 0x8, true, 0xff0abdfd81b2b568 );
        SDK_FIXED_SIZE( i_com_class_info_impl_t, 0x8 );
    };                           
};
SDK_VERIFY( class win::i_com_class_info_impl_t, 0x8 );
