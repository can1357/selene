#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gic_its_t.start.hpp"
namespace nt
{
    // [struct _GIC_ITS]
    // => Windows 11
    //
    struct gic_its_t                   
    {                                  
        // Windows 11                  
        //                             
        _m00 uint8_t  type;              //{ +0x0000    } | .Type
        _m01 uint8_t  length;            //{ +0x0001    } | .Length
        _m02 uint32_t identifier;        //{ +0x0004    } | .Identifier
        _m03 uint64_t physical_address;  //{ +0x0008    } | .PhysicalAddress
                                       
        SDK_MAGIC_PROPERTIES( "_GIC_ITS.$", 0x0, false, 0x58574c4f62c793b9 );                 
        SDK_FIXED_SIZE( gic_its_t, 0x14 );                 
    };                                 
};
#include "magic/gic_its_t.end.hpp"
SDK_VERIFY( struct nt::gic_its_t, 0x14 );
