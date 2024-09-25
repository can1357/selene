#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/irp_t.start.hpp"
namespace fx
{
    // [class FxIrp]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class irp_t                      
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                           
        _m00 struct nt::irp_t* m_irp;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Irp
                                     
        SDK_MAGIC_PROPERTIES( "FxIrp.$", 0x8, true, 0xa1fe8b7c28931a74 );      
        SDK_FIXED_SIZE( irp_t, 0x8 );      
    };                               
};
#include "magic/irp_t.end.hpp"
SDK_VERIFY( class fx::irp_t, 0x8 );
