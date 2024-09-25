#pragma once
#include <sdkgen/support_library.hpp>
#include "../virtualmachinedataflags_t.hpp"

namespace nt { struct guid_t; }

#include "magic/setvirtualmachinedata_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIRTUALMACHINEDATA]
    // => WDK 10 (NV)
    //
    struct setvirtualmachinedata_t                                          
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 void*                                  h_kmd_vm_worker_process;  //{ +0x0000    } | .hKmdVmWorkerProcess
        _m01 struct nt::guid_t*                     p_vm_guid;                //{ +0x0008    } | .pVmGuid
        _m02 struct dxgk::virtualmachinedataflags_t flags;                    //{ +0x0010    } | .Flags
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIRTUALMACHINEDATA.$", 0x0, false, 0x9fe149ddd5360b43 );                        
        SDK_FIXED_SIZE( setvirtualmachinedata_t, 0x18 );                        
    };                                                                      
};
#include "magic/setvirtualmachinedata_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvirtualmachinedata_t, 0x18 );
