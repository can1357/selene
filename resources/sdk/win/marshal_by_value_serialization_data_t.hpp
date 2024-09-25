#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class MarshalByValueSerializationData]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class marshal_by_value_serialization_data_t
    {                                          
                                               
        SDK_MAGIC_PROPERTIES( "MarshalByValueSerializationData.$", 0x20, true, 0xbff42c2ab249b422 );
        SDK_FIXED_SIZE( marshal_by_value_serialization_data_t, 0x20 );
    };                                         
};
SDK_VERIFY( class win::marshal_by_value_serialization_data_t, 0x20 );
