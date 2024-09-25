#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/local_x2apic_nmisource_t.start.hpp"
namespace nt
{
    // [struct _LOCAL_X2APIC_NMISOURCE]
    // => Windows 11
    //
    struct local_x2apic_nmisource_t
    {                              
        // Windows 11              
        //                         
        _m00 uint8_t  type;          //{ +0x0000    } | .Type
        _m01 uint8_t  length;        //{ +0x0001    } | .Length
        _m02 uint16_t flags;         //{ +0x0002    } | .Flags
        _m03 uint32_t processor_id;  //{ +0x0004    } | .ProcessorID
        _m04 uint8_t  lintin;        //{ +0x0008    } | .LINTIN
                                   
        SDK_MAGIC_PROPERTIES( "_LOCAL_X2APIC_NMISOURCE.$", 0x0, false, 0x4f0cef51b02e20d1 );             
        SDK_FIXED_SIZE( local_x2apic_nmisource_t, 0xc );             
    };                             
};
#include "magic/local_x2apic_nmisource_t.end.hpp"
SDK_VERIFY( struct nt::local_x2apic_nmisource_t, 0xc );
