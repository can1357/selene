#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/irp_extension_status_t.start.hpp"
namespace iop
{
    // [struct _IOP_IRP_EXTENSION_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_extension_status_t 
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t flags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t activity_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ActivityId
        _m02 uint32_t io_tracking;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoTracking
                                  
        SDK_MAGIC_PROPERTIES( "_IOP_IRP_EXTENSION_STATUS.$", 0xc, true, 0x8a33a5902560096 );            
        SDK_FIXED_SIZE( irp_extension_status_t, 0xc );            
    };                            
};
#include "magic/irp_extension_status_t.end.hpp"
SDK_VERIFY( struct iop::irp_extension_status_t, 0xc );
