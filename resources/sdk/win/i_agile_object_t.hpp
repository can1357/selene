#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAgileObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_agile_object_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IAgileObject.$", 0x8, true, 0x73dc9bb232c0afc5 );
        SDK_FIXED_SIZE( i_agile_object_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_agile_object_t, 0x8 );
