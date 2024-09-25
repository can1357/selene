#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setvidpnsourcehwprotection_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETVIDPNSOURCEHWPROTECTION]
    // => WDK 10 (NV)
    //
    struct setvidpnsourcehwprotection_t
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t vid_pn_source_id;  //{ +0x0004    } | .VidPnSourceId
        _m02 int32_t  hw_protected;      //{ +0x0008    } | .HwProtected
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETVIDPNSOURCEHWPROTECTION.$", 0x0, false, 0x798070b00c961769 );                 
        SDK_FIXED_SIZE( setvidpnsourcehwprotection_t, 0xc );                 
    };                                 
};
#include "magic/setvidpnsourcehwprotection_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setvidpnsourcehwprotection_t, 0xc );
