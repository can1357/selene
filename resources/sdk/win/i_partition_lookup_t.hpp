#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPartitionLookup]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_partition_lookup_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IPartitionLookup.$", 0x8, true, 0xcda1214187fd3b75 );
        SDK_FIXED_SIZE( i_partition_lookup_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_partition_lookup_t, 0x8 );
