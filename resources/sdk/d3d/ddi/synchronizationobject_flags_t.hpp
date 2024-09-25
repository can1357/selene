#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/synchronizationobject_flags_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS]
    // => WDK 10 (NV)
    //
    struct synchronizationobject_flags_t         
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint1_t  shared;                      //{ +0x0000@0  } | .Shared
        _m01 uint1_t  nt_security_sharing;         //{ +0x0000@1  } | .NtSecuritySharing
        _m02 uint1_t  cross_adapter;               //{ +0x0000@2  } | .CrossAdapter
        _m03 uint1_t  top_of_pipeline;             //{ +0x0000@3  } | .TopOfPipeline
        _m04 uint1_t  no_signal;                   //{ +0x0000@4  } | .NoSignal
        _m05 uint1_t  no_wait;                     //{ +0x0000@5  } | .NoWait
        _m06 uint1_t  no_signal_max_value_on_tdr;  //{ +0x0000@6  } | .NoSignalMaxValueOnTdr
        _m07 uint1_t  no_gpu_access;               //{ +0x0000@7  } | .NoGPUAccess
        _m08 uint32_t value;                       //{ +0x0000    } | .Value
                                                 
        SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.$", 0x0, false, 0xeca8da59d994b382 );                           
        SDK_FIXED_SIZE( synchronizationobject_flags_t, 0x4 );                           
    };                                           
};
#include "magic/synchronizationobject_flags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::synchronizationobject_flags_t, 0x4 );
