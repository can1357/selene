#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pindirectflipresources_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PINDIRECTFLIPRESOURCES]
    // => WDK 10 (NV)
    //
    struct pindirectflipresources_t    
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t  h_device;         //{ +0x0000    } | .hDevice
        _m01 uint32_t  resource_count;   //{ +0x0004    } | .ResourceCount
        _m02 uint32_t* p_resource_list;  //{ +0x0008    } | .pResourceList
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PINDIRECTFLIPRESOURCES.$", 0x0, false, 0x7aff90de77822e86 );                
        SDK_FIXED_SIZE( pindirectflipresources_t, 0x10 );                
    };                                 
};
#include "magic/pindirectflipresources_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::pindirectflipresources_t, 0x10 );
