#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ComTelemetryProvider]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class com_telemetry_provider_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "ComTelemetryProvider.$", 0x20, true, 0x9b68818d8e101b5 );
        SDK_FIXED_SIZE( com_telemetry_provider_t, 0x20 );
    };                            
};
SDK_VERIFY( class win::com_telemetry_provider_t, 0x20 );
