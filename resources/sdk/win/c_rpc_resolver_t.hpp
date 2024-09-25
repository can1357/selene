#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_rpc_resolver_t.start.hpp"
namespace win
{
    class c_fast_bh_t;
    struct psm_appstate_registration_t;

    // [class CRpcResolver]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_rpc_resolver_t                                                            
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                            
        _m00 struct win::psm_appstate_registration_t* psm_registration;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._psmRegistration
        _m01 int32_t                                  f_local_rem_release_failed;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._fLocalRemReleaseFailed
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                
        //                                                                            
        _m02 class win::c_fast_bh_t*                  fbh_i_local_object_exporter;      //{ +0x0000    +0x0000    +0x0000    } | ._fbhILocalObjectExporter
        _m03 class win::c_fast_bh_t*                  fbh_irot;                         //{ +0x0008    +0x0008    +0x0008    } | ._fbhIROT
        _m04 class win::c_fast_bh_t*                  fbh_iscm;                         //{ +0x0010    +0x0010    +0x0010    } | ._fbhISCM
        _m05 class win::c_fast_bh_t*                  fbh_i_machine_activator_control;  //{ +0x0018    +0x0018    +0x0018    } | ._fbhIMachineActivatorControl
                                                                                      
        SDK_MAGIC_PROPERTIES( "CRpcResolver.$", 0x30, true, 0x39d6460bce665537 );                                
        SDK_FIXED_SIZE( c_rpc_resolver_t, 0x30 );                                     
    };                                                                                
};
#include "magic/c_rpc_resolver_t.end.hpp"
SDK_VERIFY( class win::c_rpc_resolver_t, 0x30 );
