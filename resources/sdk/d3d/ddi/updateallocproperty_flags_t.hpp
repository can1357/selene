#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/updateallocproperty_flags_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_UPDATEALLOCPROPERTY_FLAGS]
    // => WDK 10 (NV)
    //
    struct updateallocproperty_flags_t    
    {                                     
        // WDK 10                         
        //                                
        _m00 uint1_t  accessed_physically;  //{ +0x0000@0  } | .AccessedPhysically
        _m01 uint32_t value;                //{ +0x0000    } | .Value
                                          
        SDK_NONVOL_PROPERTIES( "D3DDDI_UPDATEALLOCPROPERTY_FLAGS.$", 0x0, false, 0x52a4e3212758fab6 );                    
        SDK_FIXED_SIZE( updateallocproperty_flags_t, 0x4 );                    
    };                                    
};
#include "magic/updateallocproperty_flags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::updateallocproperty_flags_t, 0x4 );
