#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/apic_data_t.start.hpp"
namespace io
{
    struct apic_registers_t;

    // [struct _IO_APIC_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct apic_data_t                                                 
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                             
        _m00 uint64_t                     physical_address;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalAddress
        _m01 uint32_t                     identifier;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Identifier
        _m02 struct io::apic_registers_t* base_address;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BaseAddress
        _m03 uint8_t                      version;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Version
        _m04 uint8_t                      pin_count;                     //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .PinCount
        _m05 uint8_t                      initialized;                   //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .Initialized
        _m06 uint8_t                      initialized_first_local_unit;  //{ +0x001b    +0x001b    +0x001b    +0x001b    } | .InitializedFirstLocalUnit
        _m07 uint32_t                     gsi_base;                      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .GsiBase
        _m08 uint32_t                     cmci_register;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CmciRegister
        _m09 uint8_t                      io_unit_missing;               //{ +0x0024    +0x0028    +0x0028    +0x0028    } | .IoUnitMissing
                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                             
        _m10 uint32_t                     deferred_error_register;       //{ +0x0024    +0x0024    +0x0024    } | .DeferredErrorRegister
                                                                       
        SDK_MAGIC_PROPERTIES( "_IO_APIC_DATA.$", 0x30, true, 0xcdc00e95c6459b84 );                             
        SDK_DYNAMIC_SIZE( apic_data_t );                               
    };                                                                 
};
#include "magic/apic_data_t.end.hpp"
