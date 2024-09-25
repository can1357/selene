#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/isa_vector_t.start.hpp"
namespace nt
{
    // [struct _ISA_VECTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct isa_vector_t                              
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint8_t  type;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  length;                          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 uint8_t  bus;                             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Bus
        _m03 uint8_t  source;                          //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Source
        _m04 uint32_t global_system_interrupt_vector;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .GlobalSystemInterruptVector
        _m05 uint16_t flags;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                                     
        SDK_MAGIC_PROPERTIES( "_ISA_VECTOR.$", 0xa, true, 0x3d7865d4c777c0a4 );                               
        SDK_FIXED_SIZE( isa_vector_t, 0xa );                               
    };                                               
};
#include "magic/isa_vector_t.end.hpp"
SDK_VERIFY( struct nt::isa_vector_t, 0xa );
