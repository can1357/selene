#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComClassCategoryInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_class_category_info_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IComClassCategoryInfo.$", 0x8, true, 0x16b34dbf88345ebd );
        SDK_FIXED_SIZE( i_com_class_category_info_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_com_class_category_info_t, 0x8 );
