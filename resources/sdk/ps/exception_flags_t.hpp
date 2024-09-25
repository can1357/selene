#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exception_flags_t.start.hpp"
namespace ps
{
    // [union _PS_EXCEPTION_FLAGS]
    // => WDK 10 (NV)
    //
    union exception_flags_t             
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t flags;              //{ +0x0000    } | .Flags
        _m01 uint1_t  process_using_veh;  //{ +0x0000@0  } | .ProcessUsingVEH
        _m02 uint1_t  process_using_vch;  //{ +0x0000@1  } | .ProcessUsingVCH
                                        
        SDK_NONVOL_PROPERTIES( "_PS_EXCEPTION_FLAGS.$", 0x0, false, 0x7cc2baf04e73861a );                  
        SDK_FIXED_SIZE( exception_flags_t, 0x4 );                  
    };                                  
};
#include "magic/exception_flags_t.end.hpp"
SDK_VERIFY( union ps::exception_flags_t, 0x4 );
