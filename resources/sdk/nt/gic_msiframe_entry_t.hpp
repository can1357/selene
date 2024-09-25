#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gic_msiframe_entry_t.start.hpp"
namespace nt
{
    // [struct _GIC_MSIFRAME_ENTRY]
    // => Windows 11
    //
    struct gic_msiframe_entry_t        
    {                                  
        // Windows 11                  
        //                             
        _m00 uint8_t  type;              //{ +0x0000    } | .Type
        _m01 uint8_t  length;            //{ +0x0001    } | .Length
        _m02 uint32_t identifier;        //{ +0x0004    } | .Identifier
        _m03 uint64_t physical_address;  //{ +0x0008    } | .PhysicalAddress
        _m04 uint32_t flags;             //{ +0x0010    } | .Flags
        _m05 uint16_t spi_count;         //{ +0x0014    } | .SpiCount
        _m06 uint16_t spi_base;          //{ +0x0016    } | .SpiBase
                                       
        SDK_MAGIC_PROPERTIES( "_GIC_MSIFRAME_ENTRY.$", 0x0, false, 0x478adc5ad3b1fc7 );                 
        SDK_FIXED_SIZE( gic_msiframe_entry_t, 0x18 );                 
    };                                 
};
#include "magic/gic_msiframe_entry_t.end.hpp"
SDK_VERIFY( struct nt::gic_msiframe_entry_t, 0x18 );
