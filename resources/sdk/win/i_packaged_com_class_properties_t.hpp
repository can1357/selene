#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPackagedComClassProperties]
    // => Windows 11
    //
    struct i_packaged_com_class_properties_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "IPackagedComClassProperties.$", 0x0, false, 0xcd3220cc7781ed7c );
        SDK_FIXED_SIZE( i_packaged_com_class_properties_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_packaged_com_class_properties_t, 0x8 );
