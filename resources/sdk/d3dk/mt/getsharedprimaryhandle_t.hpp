#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getsharedprimaryhandle_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETSHAREDPRIMARYHANDLE]
    // => WDK 10 (NV)
    //
    struct getsharedprimaryhandle_t    
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t vid_pn_source_id;  //{ +0x0004    } | .VidPnSourceId
        _m02 uint32_t h_shared_primary;  //{ +0x0008    } | .hSharedPrimary
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETSHAREDPRIMARYHANDLE.$", 0x0, false, 0x9ea95d6ab4c85abc );                 
        SDK_FIXED_SIZE( getsharedprimaryhandle_t, 0xc );                 
    };                                 
};
#include "magic/getsharedprimaryhandle_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getsharedprimaryhandle_t, 0xc );
