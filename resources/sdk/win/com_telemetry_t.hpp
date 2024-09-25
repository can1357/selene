#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ComTelemetry]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class com_telemetry_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "ComTelemetry.$", 0x18, true, 0x3e421697cf53094a );
        SDK_FIXED_SIZE( com_telemetry_t, 0x18 );
    };                   
};
SDK_VERIFY( class win::com_telemetry_t, 0x18 );
