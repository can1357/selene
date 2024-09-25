#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/trimresidencyset_flags_t.hpp"

#include "magic/trimnotification_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_TRIMNOTIFICATION]
    // => WDK 10 (NV)
    //
    struct trimnotification_t                                            
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 void*                                     context;            //{ +0x0000    } | .Context
        _m01 struct d3d::ddi::trimresidencyset_flags_t flags;              //{ +0x0008    } | .Flags
        _m02 uint64_t                                  num_bytes_to_trim;  //{ +0x0010    } | .NumBytesToTrim
                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_TRIMNOTIFICATION.$", 0x0, false, 0xbca4302ddef8fe73 );                  
        SDK_FIXED_SIZE( trimnotification_t, 0x18 );                      
    };                                                                   
};
#include "magic/trimnotification_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::trimnotification_t, 0x18 );
