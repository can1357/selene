#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CLASS_PRIVATE_FDO_DATA]
    // => WDK 10
    //
    struct class_private_fdo_data_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_CLASS_PRIVATE_FDO_DATA.$", 0x0, false, 0x7d969379c882f583 );
        SDK_FIXED_SIZE( class_private_fdo_data_t, 0x0 );
    };                             
};
SDK_VERIFY( struct nt::class_private_fdo_data_t, 0x0 );
