#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CLASS_PRIVATE_COMMON_DATA]
    // => WDK 10
    //
    struct class_private_common_data_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "_CLASS_PRIVATE_COMMON_DATA.$", 0x0, false, 0x82f8b48b69ff9d43 );
        SDK_FIXED_SIZE( class_private_common_data_t, 0x0 );
    };                                
};
SDK_VERIFY( struct nt::class_private_common_data_t, 0x0 );
