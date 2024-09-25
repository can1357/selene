#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/checksharedresourceaccess_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CHECKSHAREDRESOURCEACCESS]
    // => WDK 10 (NV)
    //
    struct checksharedresourceaccess_t
    {                                 
        // WDK 10                
        //                       
        _m00 uint32_t h_resource;       //{ +0x0000    } | .hResource
        _m01 uint32_t client_pid;       //{ +0x0004    } | .ClientPid
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHECKSHAREDRESOURCEACCESS.$", 0x0, false, 0xef0b25de7a070cc );           
        SDK_FIXED_SIZE( checksharedresourceaccess_t, 0x8 );           
    };                                
};
#include "magic/checksharedresourceaccess_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::checksharedresourceaccess_t, 0x8 );
