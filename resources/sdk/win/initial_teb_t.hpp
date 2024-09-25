#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/initial_teb_t.start.hpp"
namespace win
{
    // [struct _INITIAL_TEB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct initial_teb_t                                     
    {                                                        
        struct u0_old_initial_teb_t                          
        {                                                    
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
            //                                               
            _m00 void* old_stack_base;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OldStackBase
            _m01 void* old_stack_limit;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .OldStackLimit
                                                             
            SDK_NONVOL_PROPERTIES( "_INITIAL_TEB.OldInitialTeb.$", 0x10, true, 0x49066808f49a6b7c );                                      
            SDK_FIXED_SIZE( u0_old_initial_teb_t, 0x10 );                                      
        };                                                   
                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                   
        _m02 u0_old_initial_teb_t      old_initial_teb;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OldInitialTeb
        _m03 void*                     stack_base;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .StackBase
        _m04 void*                     stack_limit;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .StackLimit
        _m05 void*                     stack_allocation_base;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .StackAllocationBase
                                                             
        SDK_NONVOL_PROPERTIES( "_INITIAL_TEB.$", 0x28, true, 0x677aa79580a69b23 );                      
        SDK_FIXED_SIZE( initial_teb_t, 0x28 );                      
    };                                                       
};
#include "magic/initial_teb_t.end.hpp"
SDK_VERIFY( struct win::initial_teb_t::u0_old_initial_teb_t, 0x10 );
SDK_VERIFY( struct win::initial_teb_t, 0x28 );
