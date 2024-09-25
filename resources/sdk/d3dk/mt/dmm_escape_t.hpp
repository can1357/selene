#pragma once
#include <sdkgen/support_library.hpp>
#include "dmmescapetype_t.hpp"

#include "magic/dmm_escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DMM_ESCAPE]
    // => WDK 10 (NV)
    //
    struct dmm_escape_t                                              
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 enum d3dk::mt::dmmescapetype_t type;                      //{ +0x0000    } | .Type
        _m01 uint64_t                       provided_buffer_size;      //{ +0x0008    } | .ProvidedBufferSize
        _m02 uint64_t                       min_required_buffer_size;  //{ +0x0010    } | .MinRequiredBufferSize
        _m03 sdk::array<uint8_t, 1>         data;                      //{ +0x0018    } | .Data
                                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DMM_ESCAPE.$", 0x0, false, 0x6d7a2a1c12d4b4a9 );                         
        SDK_FIXED_SIZE( dmm_escape_t, 0x20 );                         
    };                                                               
};
#include "magic/dmm_escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::dmm_escape_t, 0x20 );
