#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _FAILURE_PREDICTION_INFO]
    // => WDK 10
    //
    struct failure_prediction_info_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "_FAILURE_PREDICTION_INFO.$", 0x0, false, 0xaaf2fe6c2ac824b3 );
        SDK_FIXED_SIZE( failure_prediction_info_t, 0x0 );
    };                              
};
SDK_VERIFY( struct nt::failure_prediction_info_t, 0x0 );
