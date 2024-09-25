#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/submitcommandflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SUBMITCOMMANDFLAGS]
    // => WDK 10 (NV)
    //
    struct submitcommandflags_t            
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint1_t  paging;                //{ +0x0000@0  } | .Paging
        _m01 uint1_t  present;               //{ +0x0000@1  } | .Present
        _m02 uint1_t  redirected_present;    //{ +0x0000@2  } | .RedirectedPresent
        _m03 uint1_t  null_rendering;        //{ +0x0000@3  } | .NullRendering
        _m04 uint1_t  flip;                  //{ +0x0000@4  } | .Flip
        _m05 uint1_t  flip_with_no_wait;     //{ +0x0000@5  } | .FlipWithNoWait
        _m06 uint1_t  context_switch;        //{ +0x0000@6  } | .ContextSwitch
        _m07 uint1_t  resubmission;          //{ +0x0000@7  } | .Resubmission
        _m08 uint1_t  virtual_machine_data;  //{ +0x0000@8  } | .VirtualMachineData
        _m09 uint32_t value;                 //{ +0x0000    } | .Value
                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_SUBMITCOMMANDFLAGS.$", 0x0, false, 0x7a5c00cada2ba72e );                     
        SDK_FIXED_SIZE( submitcommandflags_t, 0x4 );                     
    };                                     
};
#include "magic/submitcommandflags_t.end.hpp"
SDK_VERIFY( struct dxgk::submitcommandflags_t, 0x4 );
