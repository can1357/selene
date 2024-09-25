#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/deinterlace_query_available_modes_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_DeinterlaceQueryAvailableModes]
    // => WDK 10 (NV)
    //
    struct deinterlace_query_available_modes_t           
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint32_t                          size;       //{ +0x0000    } | .Size
        _m01 uint32_t                          num_guids;  //{ +0x0004    } | .NumGuids
        _m02 sdk::array<struct nt::guid_t, 32> guids;      //{ +0x0008    } | .Guids
                                                         
        SDK_NONVOL_PROPERTIES( "_DXVA_DeinterlaceQueryAvailableModes.$", 0x0, false, 0xfd4050802b2c8e6d );          
        SDK_FIXED_SIZE( deinterlace_query_available_modes_t, 0x208 );          
    };                                                   
};
#include "magic/deinterlace_query_available_modes_t.end.hpp"
SDK_VERIFY( struct dxva::deinterlace_query_available_modes_t, 0x208 );
