#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/platform_interrupt_t.start.hpp"
namespace nt
{
    // [struct _PLATFORM_INTERRUPT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct platform_interrupt_t      
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint8_t  type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  length;          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 uint16_t flags;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m03 uint8_t  interrupt_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InterruptType
        _m04 uint8_t  apicid;          //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .APICID
        _m05 uint8_t  acpieid;         //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .ACPIEID
        _m06 uint8_t  iosapic_vector;  //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .IOSAPICVector
        _m07 uint32_t global_vector;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GlobalVector
                                     
        SDK_MAGIC_PROPERTIES( "_PLATFORM_INTERRUPT.$", 0x10, true, 0xc1bad324f8b1d3d4 );               
        SDK_FIXED_SIZE( platform_interrupt_t, 0x10 );               
    };                               
};
#include "magic/platform_interrupt_t.end.hpp"
SDK_VERIFY( struct nt::platform_interrupt_t, 0x10 );
