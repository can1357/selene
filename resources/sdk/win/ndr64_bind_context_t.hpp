#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_bind_context_t.start.hpp"
namespace win
{
    // [struct _NDR64_BIND_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_bind_context_t     
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint8_t  handle_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleType
        _m01 uint8_t  flags;          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 uint16_t stack_offset;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .StackOffset
        _m03 uint8_t  routine_index;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RoutineIndex
        _m04 uint8_t  ordinal;        //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .Ordinal
                                    
        SDK_MAGIC_PROPERTIES( "_NDR64_BIND_CONTEXT.$", 0x6, true, 0xfa1a95616e912fa0 );              
        SDK_FIXED_SIZE( ndr64_bind_context_t, 0x6 );              
    };                              
};
#include "magic/ndr64_bind_context_t.end.hpp"
SDK_VERIFY( struct win::ndr64_bind_context_t, 0x6 );
