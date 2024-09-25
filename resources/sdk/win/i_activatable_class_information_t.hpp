#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivatableClassInformation]
    // => Windows 10 v1607
    //
    struct i_activatable_class_information_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "IActivatableClassInformation.$", 0x0, false, 0x7fcc0125b306d673 );
        SDK_FIXED_SIZE( i_activatable_class_information_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_activatable_class_information_t, 0x8 );
