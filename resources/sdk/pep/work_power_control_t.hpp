#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t;     }
namespace nt { struct pohandle_t; }

#include "magic/work_power_control_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_POWER_CONTROL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_power_control_t                          
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                               
        _m00 struct nt::pohandle_t*   device_handle;       //{ +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 const struct nt::guid_t* power_control_code;  //{ +0x0008    +0x0008    +0x0008    } | .PowerControlCode
        _m02 void*                    request_context;     //{ +0x0010    +0x0010    +0x0010    } | .RequestContext
        _m03 void*                    in_buffer;           //{ +0x0018    +0x0018    +0x0018    } | .InBuffer
        _m04 uint64_t                 in_buffer_size;      //{ +0x0020    +0x0020    +0x0020    } | .InBufferSize
        _m05 void*                    out_buffer;          //{ +0x0028    +0x0028    +0x0028    } | .OutBuffer
        _m06 uint64_t                 out_buffer_size;     //{ +0x0030    +0x0030    +0x0030    } | .OutBufferSize
                                                         
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_POWER_CONTROL.$", 0x38, true, 0xfc9714eaa935354b );                   
        SDK_FIXED_SIZE( work_power_control_t, 0x38 );                   
    };                                                   
};
#include "magic/work_power_control_t.end.hpp"
SDK_VERIFY( struct pep::work_power_control_t, 0x38 );
