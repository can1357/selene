#pragma once
#include <sdkgen/support_library.hpp>
#include "connect_interrupt_line_based_parameters_t.hpp"
#include "connect_interrupt_message_based_parameters_t.hpp"
#include "connect_interrupt_fully_specified_parameters_t.hpp"

#include "magic/connect_interrupt_parameters_t.start.hpp"
namespace io
{
    // [struct _IO_CONNECT_INTERRUPT_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct connect_interrupt_parameters_t                                  
    {                                                                      
        using io_connect_interrupt_fully_specified_parameters_t = struct io::connect_interrupt_fully_specified_parameters_t;                
        using fully_specified_t =                                 io_connect_interrupt_fully_specified_parameters_t ;                
        using io_connect_interrupt_line_based_parameters_t =      struct io::connect_interrupt_line_based_parameters_t;                
        using message_based_t =                                   struct io::connect_interrupt_message_based_parameters_t;                
                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                 
        _m00 uint32_t                                      version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 fully_specified_t                             fully_specified;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FullySpecified
        _m02 io_connect_interrupt_line_based_parameters_t  line_based;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LineBased
        _m03 message_based_t                               message_based;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageBased
                                                                           
        SDK_NONVOL_PROPERTIES( "_IO_CONNECT_INTERRUPT_PARAMETERS.$", 0x50, true, 0x5a0ef629e5808b9 );                
        SDK_FIXED_SIZE( connect_interrupt_parameters_t, 0x50 );                
    };                                                                     
};
#include "magic/connect_interrupt_parameters_t.end.hpp"
SDK_VERIFY( struct io::connect_interrupt_parameters_t, 0x50 );
