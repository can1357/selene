#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3d/ddi/trimresidencyset_flags_t.hpp"

#include "magic/ddi_arg_trimresidencyset_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_TRIMRESIDENCYSET]
    // => WDK 10 (NV)
    //
    struct ddi_arg_trimresidencyset_t                                    
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint64_t                                  h_device;           //{ +0x0000    } | .hDevice
        _m01 struct d3d::ddi::trimresidencyset_flags_t trim_flags;         //{ +0x0008    } | .TrimFlags
        _m02 uint64_t                                  num_bytes_to_trim;  //{ +0x0010    } | .NumBytesToTrim
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_TRIMRESIDENCYSET.$", 0x0, false, 0xaedf9e17fc1de87f );                  
        SDK_FIXED_SIZE( ddi_arg_trimresidencyset_t, 0x18 );                  
    };                                                                   
};
#include "magic/ddi_arg_trimresidencyset_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_trimresidencyset_t, 0x18 );
