#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/budgetchangenotification_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_BUDGETCHANGENOTIFICATION]
    // => WDK 10 (NV)
    //
    struct budgetchangenotification_t
    {                                
        // WDK 10             
        //                    
        _m00 void*    context;         //{ +0x0000    } | .Context
        _m01 uint64_t budget;          //{ +0x0008    } | .Budget
                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_BUDGETCHANGENOTIFICATION.$", 0x0, false, 0x21c8a1a6ec14adbc );        
        SDK_FIXED_SIZE( budgetchangenotification_t, 0x10 );        
    };                               
};
#include "magic/budgetchangenotification_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::budgetchangenotification_t, 0x10 );
