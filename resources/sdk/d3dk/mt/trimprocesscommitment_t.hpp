#pragma once
#include <sdkgen/support_library.hpp>
#include "trimprocesscommitment_flags_t.hpp"

#include "magic/trimprocesscommitment_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_TRIMPROCESSCOMMITMENT]
    // => WDK 10 (NV)
    //
    struct trimprocesscommitment_t                                               
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 uint32_t                                      cb_size;                //{ +0x0000    } | .cbSize
        _m01 void*                                         h_process;              //{ +0x0008    } | .hProcess
        _m02 union d3dk::mt::trimprocesscommitment_flags_t flags;                  //{ +0x0010    } | .Flags
        _m03 uint64_t                                      decommit_requested;     //{ +0x0018    } | .DecommitRequested
        _m04 uint64_t                                      num_bytes_decommitted;  //{ +0x0020    } | .NumBytesDecommitted
                                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_TRIMPROCESSCOMMITMENT.$", 0x0, false, 0x97decce751364b51 );                      
        SDK_FIXED_SIZE( trimprocesscommitment_t, 0x28 );                         
    };                                                                           
};
#include "magic/trimprocesscommitment_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::trimprocesscommitment_t, 0x28 );
