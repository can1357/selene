#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/recorder_configure_params_t.start.hpp"
namespace pci
{
    // [struct _RECORDER_CONFIGURE_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct recorder_configure_params_t   
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint8_t  create_default_log;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CreateDefaultLog
                                         
        SDK_MAGIC_PROPERTIES( "_RECORDER_CONFIGURE_PARAMS.$", 0x8, true, 0xe4354cf550a90d75 );                   
        SDK_FIXED_SIZE( recorder_configure_params_t, 0x8 );                   
    };                                   
};
#include "magic/recorder_configure_params_t.end.hpp"
SDK_VERIFY( struct pci::recorder_configure_params_t, 0x8 );
