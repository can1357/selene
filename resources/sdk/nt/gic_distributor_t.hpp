#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gic_distributor_t.start.hpp"
namespace nt
{
    // [struct _GIC_DISTRIBUTOR]
    // => Windows 11
    //
    struct gic_distributor_t                      
    {                                             
        // Windows 11                             
        //                                        
        _m00 uint8_t  type;                         //{ +0x0000    } | .Type
        _m01 uint8_t  length;                       //{ +0x0001    } | .Length
        _m02 uint32_t identifier;                   //{ +0x0004    } | .Identifier
        _m03 uint64_t controller_physical_address;  //{ +0x0008    } | .ControllerPhysicalAddress
        _m04 uint32_t gsiv_base;                    //{ +0x0010    } | .GsivBase
        _m05 uint8_t  version;                      //{ +0x0014    } | .Version
                                                  
        SDK_MAGIC_PROPERTIES( "_GIC_DISTRIBUTOR.$", 0x0, false, 0xa45479495c3eb1ba );                            
        SDK_FIXED_SIZE( gic_distributor_t, 0x18 );                            
    };                                            
};
#include "magic/gic_distributor_t.end.hpp"
SDK_VERIFY( struct nt::gic_distributor_t, 0x18 );
