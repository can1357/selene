#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct stack_location_t; }
namespace nt { struct irp_t;            }

#include "magic/bus_async_dispatcher_context_t.start.hpp"
namespace pci
{
    // [struct _PCI_BUS_ASYNC_DISPATCHER_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bus_async_dispatcher_context_t          
    {                                              
        using routine_t = sdk::function<int32_t(struct nt::irp_t*, struct io::stack_location_t*, void*)>*;         
                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct nt::irp_t*            irp;       //{ +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 struct io::stack_location_t* irp_sp;    //{ +0x0008    +0x0008    +0x0008    } | .IrpSp
        _m02 routine_t                    routine;   //{ +0x0010    +0x0010    +0x0010    } | .Routine
        _m03 uint8_t                      complete;  //{ +0x0018    +0x0018    +0x0018    } | .Complete
                                                   
        SDK_MAGIC_PROPERTIES( "_PCI_BUS_ASYNC_DISPATCHER_CONTEXT.$", 0x20, true, 0xcdd6a2b1dbc93a97 );         
        SDK_FIXED_SIZE( bus_async_dispatcher_context_t, 0x20 );         
    };                                             
};
#include "magic/bus_async_dispatcher_context_t.end.hpp"
SDK_VERIFY( struct pci::bus_async_dispatcher_context_t, 0x20 );
