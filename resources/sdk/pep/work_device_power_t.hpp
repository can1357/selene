#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct pohandle_t; }

#include "magic/work_device_power_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_DEVICE_POWER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_device_power_t                     
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 struct nt::pohandle_t* device_handle;   //{ +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 uint8_t                power_required;  //{ +0x0008    +0x0008    +0x0008    } | .PowerRequired
                                                   
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_DEVICE_POWER.$", 0x10, true, 0x696cb6c3f485b197 );               
        SDK_FIXED_SIZE( work_device_power_t, 0x10 );               
    };                                             
};
#include "magic/work_device_power_t.end.hpp"
SDK_VERIFY( struct pep::work_device_power_t, 0x10 );
