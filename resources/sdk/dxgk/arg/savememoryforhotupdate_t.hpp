#pragma once
#include <sdkgen/support_library.hpp>
#include "../savememoryforhotupdateflags_t.hpp"

#include "magic/savememoryforhotupdate_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SAVEMEMORYFORHOTUPDATE]
    // => WDK 10 (NV)
    //
    struct savememoryforhotupdate_t                           
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 struct dxgk::savememoryforhotupdateflags_t flags;  //{ +0x0000    } | .Flags
                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SAVEMEMORYFORHOTUPDATE.$", 0x0, false, 0x3bca423285cd7994 );      
        SDK_FIXED_SIZE( savememoryforhotupdate_t, 0x4 );      
    };                                                        
};
#include "magic/savememoryforhotupdate_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::savememoryforhotupdate_t, 0x4 );
