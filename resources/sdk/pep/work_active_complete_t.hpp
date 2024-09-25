#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct pohandle_t; }

#include "magic/work_active_complete_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_ACTIVE_COMPLETE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_active_complete_t                 
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 struct nt::pohandle_t* device_handle;  //{ +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 uint32_t               component;      //{ +0x0008    +0x0008    +0x0008    } | .Component
                                                  
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_ACTIVE_COMPLETE.$", 0x10, true, 0x4cd251c20d733de8 );              
        SDK_FIXED_SIZE( work_active_complete_t, 0x10 );              
    };                                            
};
#include "magic/work_active_complete_t.end.hpp"
SDK_VERIFY( struct pep::work_active_complete_t, 0x10 );
