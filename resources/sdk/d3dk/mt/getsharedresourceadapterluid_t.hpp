#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/getsharedresourceadapterluid_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETSHAREDRESOURCEADAPTERLUID]
    // => WDK 10 (NV)
    //
    struct getsharedresourceadapterluid_t     
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t          h_global_share;  //{ +0x0000    } | .hGlobalShare
        _m01 void*             h_nt_handle;     //{ +0x0008    } | .hNtHandle
        _m02 struct nt::luid_t adapter_luid;    //{ +0x0010    } | .AdapterLuid
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETSHAREDRESOURCEADAPTERLUID.$", 0x0, false, 0xa5bd004b89db1021 );               
        SDK_FIXED_SIZE( getsharedresourceadapterluid_t, 0x18 );               
    };                                        
};
#include "magic/getsharedresourceadapterluid_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getsharedresourceadapterluid_t, 0x18 );
