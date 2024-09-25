#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/device_hint_ecp_context_t.start.hpp"
namespace io
{
    // [struct _IO_DEVICE_HINT_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct device_hint_ecp_context_t                    
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 struct nt::device_object_t* target_device;   //{ +0x0000    } | .TargetDevice
        _m01 nt::unicode_view            remaining_name;  //{ +0x0008    } | .RemainingName
                                                        
        SDK_NONVOL_PROPERTIES( "_IO_DEVICE_HINT_ECP_CONTEXT.$", 0x0, false, 0x121976be71110e49 );               
        SDK_FIXED_SIZE( device_hint_ecp_context_t, 0x18 );               
    };                                                  
};
#include "magic/device_hint_ecp_context_t.end.hpp"
SDK_VERIFY( struct io::device_hint_ecp_context_t, 0x18 );
