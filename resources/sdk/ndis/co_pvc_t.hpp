#pragma once
#include <sdkgen/support_library.hpp>
#include "co_specific_parameters_t.hpp"

#include "magic/co_pvc_t.start.hpp"
namespace ndis
{
    // [struct _CO_PVC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_pvc_t                                               
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                        
        _m00 void*                                 ndis_af_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdisAfHandle
        _m01 struct ndis::co_specific_parameters_t pvc_parameters;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PvcParameters
                                                                  
        SDK_MAGIC_PROPERTIES( "_CO_PVC.$", 0x18, true, 0xe4fa9a37679779 );               
        SDK_FIXED_SIZE( co_pvc_t, 0x18 );                         
    };                                                            
};
#include "magic/co_pvc_t.end.hpp"
SDK_VERIFY( struct ndis::co_pvc_t, 0x18 );
