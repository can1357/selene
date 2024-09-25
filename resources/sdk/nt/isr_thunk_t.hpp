#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/isr_thunk_t.start.hpp"
namespace nt
{
    // [struct _ISR_THUNK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct isr_thunk_t          
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t push_imm;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PushImm
        _m01 uint8_t vector;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Vector
        _m02 uint8_t push_rbp;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .PushRbp
        _m03 uint8_t jmp_op;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .JmpOp
        _m04 int32_t jmp_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .JmpOffset
                                
        SDK_MAGIC_PROPERTIES( "_ISR_THUNK.$", 0x8, true, 0x19ec68c6c03b56d9 );           
        SDK_FIXED_SIZE( isr_thunk_t, 0x8 );           
    };                          
};
#include "magic/isr_thunk_t.end.hpp"
SDK_VERIFY( struct nt::isr_thunk_t, 0x8 );
