#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPartitionProperty]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_partition_property_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IPartitionProperty.$", 0x8, true, 0x1c2e47306c706bf );
        SDK_FIXED_SIZE( i_partition_property_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_partition_property_t, 0x8 );
