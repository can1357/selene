#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct luid_t; }

#include "magic/queryvirtualfunctionluid_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYVIRTUALFUNCTIONLUID]
    // => WDK 10 (NV)
    //
    struct queryvirtualfunctionluid_t                  
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint32_t           virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 struct nt::luid_t* p_luid;                  //{ +0x0008    } | .pLuid
                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYVIRTUALFUNCTIONLUID.$", 0x0, false, 0x51eb933ec31d8fd5 );                       
        SDK_FIXED_SIZE( queryvirtualfunctionluid_t, 0x10 );                       
    };                                                 
};
#include "magic/queryvirtualfunctionluid_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::queryvirtualfunctionluid_t, 0x10 );
