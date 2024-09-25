#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_transmit_as_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_TRANSMIT_AS_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_transmit_as_format_t                    
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                               
        _m00 uint8_t     format_code;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t     flags;                            //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 uint16_t    routine_index;                    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .RoutineIndex
        _m03 uint16_t    transmitted_type_wire_alignment;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TransmittedTypeWireAlignment
        _m04 uint16_t    memory_alignment;                 //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MemoryAlignment
        _m05 uint32_t    presented_type_memory_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PresentedTypeMemorySize
        _m06 uint32_t    transmitted_type_buffer_size;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TransmittedTypeBufferSize
        _m07 const void* transmitted_type;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TransmittedType
                                                         
        SDK_MAGIC_PROPERTIES( "_NDR64_TRANSMIT_AS_FORMAT.$", 0x18, true, 0xb2f64e87d09738a8 );                                
        SDK_FIXED_SIZE( ndr64_transmit_as_format_t, 0x18 );                                
    };                                                   
};
#include "magic/ndr64_transmit_as_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_transmit_as_format_t, 0x18 );
