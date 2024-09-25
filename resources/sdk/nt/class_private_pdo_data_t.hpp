#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CLASS_PRIVATE_PDO_DATA]
    // => WDK 10
    //
    struct class_private_pdo_data_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_CLASS_PRIVATE_PDO_DATA.$", 0x0, false, 0x42a121c48505132f );
        SDK_FIXED_SIZE( class_private_pdo_data_t, 0x0 );
    };                             
};
SDK_VERIFY( struct nt::class_private_pdo_data_t, 0x0 );
