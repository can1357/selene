#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRestrictedErrorInfoTelemetry]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_restricted_error_info_telemetry_t
    {                                         
                                              
        SDK_MAGIC_PROPERTIES( "IRestrictedErrorInfoTelemetry.$", 0x8, true, 0x588abd87b4950e3c );
        SDK_FIXED_SIZE( i_restricted_error_info_telemetry_t, 0x8 );
    };                                        
};
SDK_VERIFY( struct win::i_restricted_error_info_telemetry_t, 0x8 );
