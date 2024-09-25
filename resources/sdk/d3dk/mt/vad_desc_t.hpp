#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vad_desc_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_VAD_DESC]
    // => WDK 10 (NV)
    //
    struct vad_desc_t                   
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t vad_index;          //{ +0x0000    } | .VadIndex
        _m01 uint64_t vad_address;        //{ +0x0008    } | .VadAddress
        _m02 uint32_t num_mapped_ranges;  //{ +0x0010    } | .NumMappedRanges
        _m03 uint32_t vad_type;           //{ +0x0014    } | .VadType
        _m04 uint64_t start_address;      //{ +0x0018    } | .StartAddress
        _m05 uint64_t end_address;        //{ +0x0020    } | .EndAddress
                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_VAD_DESC.$", 0x0, false, 0xd403c42655040bb );                  
        SDK_FIXED_SIZE( vad_desc_t, 0x28 );                  
    };                                  
};
#include "magic/vad_desc_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::vad_desc_t, 0x28 );
