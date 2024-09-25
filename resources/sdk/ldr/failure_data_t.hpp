#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/failure_data_t.start.hpp"
namespace ldr
{
    // [struct _LDR_FAILURE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct failure_data_t                            
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 int32_t                 status;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Status
        _m01 sdk::array<wchar_t, 32> additional_info;  //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .AdditionalInfo
                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m02 sdk::array<wchar_t, 32> image_name;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ImageName
                                                     
        // WDK 10                                    
        //                                           
        _m03 sdk::array<wchar_t, 32> dll_name;         //{ +0x0004    } | .DllName
                                                     
        SDK_NONVOL_PROPERTIES( "_LDR_FAILURE_DATA.$", 0x84, true, 0xfe9ce6f8f61e7a65 );                
        SDK_FIXED_SIZE( failure_data_t, 0x84 );                
    };                                               
};
#include "magic/failure_data_t.end.hpp"
SDK_VERIFY( struct ldr::failure_data_t, 0x84 );
