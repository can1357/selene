#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct pohandle_t; }

#include "magic/work_complete_idle_state_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_COMPLETE_IDLE_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_complete_idle_state_t             
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 struct nt::pohandle_t* device_handle;  //{ +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 uint32_t               component;      //{ +0x0008    +0x0008    +0x0008    } | .Component
                                                  
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_COMPLETE_IDLE_STATE.$", 0x10, true, 0x3c525eeefad468d2 );              
        SDK_FIXED_SIZE( work_complete_idle_state_t, 0x10 );              
    };                                            
};
#include "magic/work_complete_idle_state_t.end.hpp"
SDK_VERIFY( struct pep::work_complete_idle_state_t, 0x10 );
