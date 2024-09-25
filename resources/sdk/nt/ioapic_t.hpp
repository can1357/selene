#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ioapic_t.start.hpp"
namespace nt
{
    // [struct _IOAPIC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ioapic_t                      
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t  type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  length;              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 uint8_t  ioapicid;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .IOAPICID
        _m03 uint32_t ioapic_address;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IOAPICAddress
        _m04 uint32_t system_vector_base;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SystemVectorBase
                                         
        SDK_MAGIC_PROPERTIES( "_IOAPIC.$", 0xc, true, 0xbc737536c0536f7e );                   
        SDK_FIXED_SIZE( ioapic_t, 0xc );                   
    };                                   
};
#include "magic/ioapic_t.end.hpp"
SDK_VERIFY( struct nt::ioapic_t, 0xc );
