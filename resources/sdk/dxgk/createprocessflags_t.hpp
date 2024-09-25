#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createprocessflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CREATEPROCESSFLAGS]
    // => WDK 10 (NV)
    //
    struct createprocessflags_t                      
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint1_t  system_process;                  //{ +0x0000@0  } | .SystemProcess
        _m01 uint1_t  gdi_process;                     //{ +0x0000@1  } | .GdiProcess
        _m02 uint1_t  virtual_machine_process;         //{ +0x0000@2  } | .VirtualMachineProcess
        _m03 uint1_t  virtual_machine_worker_process;  //{ +0x0000@3  } | .VirtualMachineWorkerProcess
        _m04 uint1_t  session_isolated_container;      //{ +0x0000@4  } | .SessionIsolatedContainer
        _m05 uint32_t value;                           //{ +0x0000    } | .Value
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_CREATEPROCESSFLAGS.$", 0x0, false, 0x2027cef58bd27450 );                               
        SDK_FIXED_SIZE( createprocessflags_t, 0x4 );                               
    };                                               
};
#include "magic/createprocessflags_t.end.hpp"
SDK_VERIFY( struct dxgk::createprocessflags_t, 0x4 );
