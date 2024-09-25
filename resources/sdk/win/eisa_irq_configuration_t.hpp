#pragma once
#include <sdkgen/support_library.hpp>
#include "eisa_irq_descriptor_t.hpp"

#include "magic/eisa_irq_configuration_t.start.hpp"
namespace win
{
    // [struct _EISA_IRQ_CONFIGURATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eisa_irq_configuration_t                               
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m00 struct win::eisa_irq_descriptor_t configuration_byte;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ConfigurationByte
                                                                  
        SDK_NONVOL_PROPERTIES( "_EISA_IRQ_CONFIGURATION.$", 0x2, true, 0x82b99102fddd3bdb );                   
        SDK_FIXED_SIZE( eisa_irq_configuration_t, 0x2 );                   
    };                                                            
};
#include "magic/eisa_irq_configuration_t.end.hpp"
SDK_VERIFY( struct win::eisa_irq_configuration_t, 0x2 );
