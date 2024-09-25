#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualmachinedataflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIRTUALMACHINEDATAFLAGS]
    // => WDK 10 (NV)
    //
    struct virtualmachinedataflags_t         
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint1_t  secure_virtual_machine;  //{ +0x0000@0  } | .SecureVirtualMachine
        _m01 uint32_t value;                   //{ +0x0000    } | .Value
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_VIRTUALMACHINEDATAFLAGS.$", 0x0, false, 0x247ca62dd17a9105 );                       
        SDK_FIXED_SIZE( virtualmachinedataflags_t, 0x4 );                       
    };                                       
};
#include "magic/virtualmachinedataflags_t.end.hpp"
SDK_VERIFY( struct dxgk::virtualmachinedataflags_t, 0x4 );
