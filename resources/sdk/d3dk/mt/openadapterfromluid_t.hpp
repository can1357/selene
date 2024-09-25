#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/openadapterfromluid_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENADAPTERFROMLUID]
    // => WDK 10 (NV)
    //
    struct openadapterfromluid_t              
    {                                         
        // WDK 10                             
        //                                    
        _m00 struct nt::luid_t adapter_luid;    //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t          adapter_handle;  //{ +0x0008    } | .AdapterHandle
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENADAPTERFROMLUID.$", 0x0, false, 0xa97eda87caf0eb8e );               
        SDK_FIXED_SIZE( openadapterfromluid_t, 0xc );               
    };                                        
};
#include "magic/openadapterfromluid_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openadapterfromluid_t, 0xc );
