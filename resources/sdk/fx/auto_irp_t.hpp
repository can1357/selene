#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/auto_irp_t.start.hpp"
namespace fx
{
    // [struct FxAutoIrp]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct auto_irp_t                
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                           
        _m00 struct nt::irp_t* m_irp;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Irp
                                     
        SDK_MAGIC_PROPERTIES( "FxAutoIrp.$", 0x8, true, 0xaa1c1acbfed5efb7 );      
        SDK_FIXED_SIZE( auto_irp_t, 0x8 );      
    };                               
};
#include "magic/auto_irp_t.end.hpp"
SDK_VERIFY( struct fx::auto_irp_t, 0x8 );
