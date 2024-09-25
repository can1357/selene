#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct pohandle_t; }

#include "magic/work_device_idle_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_DEVICE_IDLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_device_idle_t                           
    {                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 struct nt::pohandle_t* device_handle;        //{ +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 uint8_t                ignore_idle_timeout;  //{ +0x0008    +0x0008    +0x0008    } | .IgnoreIdleTimeout
                                                        
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_DEVICE_IDLE.$", 0x10, true, 0xd35bdc97d3455781 );                    
        SDK_FIXED_SIZE( work_device_idle_t, 0x10 );                    
    };                                                  
};
#include "magic/work_device_idle_t.end.hpp"
SDK_VERIFY( struct pep::work_device_idle_t, 0x10 );
