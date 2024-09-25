#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICreateErrorObjectFromProperties]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_create_error_object_from_properties_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "ICreateErrorObjectFromProperties.$", 0x8, true, 0x9b91112adc50d395 );
        SDK_FIXED_SIZE( i_create_error_object_from_properties_t, 0x8 );
    };                                            
};
SDK_VERIFY( struct win::i_create_error_object_from_properties_t, 0x8 );
