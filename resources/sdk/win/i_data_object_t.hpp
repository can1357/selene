#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDataObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_data_object_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IDataObject.$", 0x8, true, 0x1691ce1939051a8a );
        SDK_FIXED_SIZE( i_data_object_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_data_object_t, 0x8 );
