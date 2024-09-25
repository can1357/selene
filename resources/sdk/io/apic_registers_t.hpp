#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/apic_registers_t.start.hpp"
namespace io
{
    // [struct _IO_APIC_REGISTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct apic_registers_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m00 volatile uint32_t register_index;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RegisterIndex
        _m01 volatile uint32_t register_value;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RegisterValue
                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m02 volatile uint32_t end_of_interrupt;  //{ +0x0040    +0x0040    +0x0040    } | .EndOfInterrupt
                                                
        SDK_MAGIC_PROPERTIES( "_IO_APIC_REGISTERS.$", 0x44, true, 0xb7d75a8d133e55a1 );                 
        SDK_DYNAMIC_SIZE( apic_registers_t );                 
    };                                          
};
#include "magic/apic_registers_t.end.hpp"
