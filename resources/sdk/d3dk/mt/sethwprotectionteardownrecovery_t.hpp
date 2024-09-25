#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sethwprotectionteardownrecovery_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY]
    // => WDK 10 (NV)
    //
    struct sethwprotectionteardownrecovery_t
    {                                       
        // WDK 10               
        //                      
        _m00 uint32_t h_adapter;              //{ +0x0000    } | .hAdapter
        _m01 int32_t  recovered;              //{ +0x0004    } | .Recovered
                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY.$", 0x0, false, 0x8c6c241f2eadf477 );          
        SDK_FIXED_SIZE( sethwprotectionteardownrecovery_t, 0x8 );          
    };                                      
};
#include "magic/sethwprotectionteardownrecovery_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::sethwprotectionteardownrecovery_t, 0x8 );
