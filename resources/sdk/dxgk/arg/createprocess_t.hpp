#pragma once
#include <sdkgen/support_library.hpp>
#include "../createprocessflags_t.hpp"

#include "magic/createprocess_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATEPROCESS]
    // => WDK 10 (NV)
    //
    struct createprocess_t                                             
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 void*                             h_dxgk_process;           //{ +0x0000    } | .hDxgkProcess
        _m01 void*                             h_kmd_process;            //{ +0x0008    } | .hKmdProcess
        _m02 struct dxgk::createprocessflags_t flags;                    //{ +0x0010    } | .Flags
        _m03 uint32_t                          num_pasid;                //{ +0x0014    } | .NumPasid
        _m04 uint32_t*                         p_pasid;                  //{ +0x0018    } | .pPasid
        _m05 void*                             h_kmd_vm_worker_process;  //{ +0x0020    } | .hKmdVmWorkerProcess
        _m06 uint32_t                          process_name_length;      //{ +0x0028    } | .ProcessNameLength
        _m07 wchar_t*                          p_process_name;           //{ +0x0030    } | .pProcessName
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATEPROCESS.$", 0x0, false, 0xfaa5b477492ccaa6 );                        
        SDK_FIXED_SIZE( createprocess_t, 0x38 );                        
    };                                                                 
};
#include "magic/createprocess_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createprocess_t, 0x38 );
