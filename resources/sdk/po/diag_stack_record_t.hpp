#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diag_stack_record_t.start.hpp"
namespace po
{
    // [struct _PO_DIAG_STACK_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diag_stack_record_t                
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                    
        _m00 uint32_t             stack_depth;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StackDepth
        _m01 sdk::array<void*, 1> stack;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Stack
                                              
        SDK_MAGIC_PROPERTIES( "_PO_DIAG_STACK_RECORD.$", 0x10, true, 0x6695d295c8f9c1fa );            
        SDK_FIXED_SIZE( diag_stack_record_t, 0x10 );            
    };                                        
};
#include "magic/diag_stack_record_t.end.hpp"
SDK_VERIFY( struct po::diag_stack_record_t, 0x10 );
