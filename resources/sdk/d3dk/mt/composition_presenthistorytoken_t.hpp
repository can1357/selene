#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/composition_presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct composition_presenthistorytoken_t
    {                                       
        // WDK 10                    
        //                           
        _m00 uint64_t h_private_data;         //{ +0x0000    } | .hPrivateData
                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN.$", 0x0, false, 0x5ce0903ab535b0c9 );               
        SDK_FIXED_SIZE( composition_presenthistorytoken_t, 0x8 );               
    };                                      
};
#include "magic/composition_presenthistorytoken_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::composition_presenthistorytoken_t, 0x8 );
