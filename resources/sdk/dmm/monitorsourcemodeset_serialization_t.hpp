#pragma once
#include <sdkgen/support_library.hpp>
#include "monitor_source_mode_serialization_t.hpp"

#include "magic/monitorsourcemodeset_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_MONITORSOURCEMODESET_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitorsourcemodeset_serialization_t       
    {                                                 
        using mode_serialization_t = sdk::array<struct dmm::monitor_source_mode_serialization_t, 1>;                   
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 uint32_t              num_modes;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumModes
        _m01 mode_serialization_t  mode_serialization;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ModeSerialization
                                                      
        SDK_MAGIC_PROPERTIES( "_DMM_MONITORSOURCEMODESET_SERIALIZATION.$", 0x70, true, 0xfadbc4545550baf3 );                   
        SDK_FIXED_SIZE( monitorsourcemodeset_serialization_t, 0x70 );                   
    };                                                
};
#include "magic/monitorsourcemodeset_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::monitorsourcemodeset_serialization_t, 0x70 );
