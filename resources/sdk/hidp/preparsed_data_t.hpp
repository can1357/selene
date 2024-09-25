#pragma once
#include <sdkgen/support_library.hpp>

namespace hidp
{
    // [struct _HIDP_PREPARSED_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct preparsed_data_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "_HIDP_PREPARSED_DATA.$", 0x0, true, 0xda6d174a294745a6 );
        SDK_FIXED_SIZE( preparsed_data_t, 0x0 );
    };                     
};
SDK_VERIFY( struct hidp::preparsed_data_t, 0x0 );
