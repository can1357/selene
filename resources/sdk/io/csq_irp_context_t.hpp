#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/csq_irp_context_t.start.hpp"
namespace io
{
    struct csq_t;

    // [struct _IO_CSQ_IRP_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csq_irp_context_t        
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                          
        _m00 uint32_t          type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct nt::irp_t* irp;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Irp
        _m02 struct io::csq_t* csq;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Csq
                                    
        SDK_NONVOL_PROPERTIES( "_IO_CSQ_IRP_CONTEXT.$", 0x18, true, 0x136f82cac319cd35 );     
        SDK_FIXED_SIZE( csq_irp_context_t, 0x18 );     
    };                              
};
#include "magic/csq_irp_context_t.end.hpp"
SDK_VERIFY( struct io::csq_irp_context_t, 0x18 );
