#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/openadapterfromdevicename_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENADAPTERFROMDEVICENAME]
    // => WDK 10 (NV)
    //
    struct openadapterfromdevicename_t        
    {                                         
        // WDK 10                             
        //                                    
        _m00 wchar_t*          device_name;     //{ +0x0000    } | .DeviceName
        _m01 uint32_t          adapter_handle;  //{ +0x0008    } | .AdapterHandle
        _m02 struct nt::luid_t adapter_luid;    //{ +0x000c    } | .AdapterLuid
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENADAPTERFROMDEVICENAME.$", 0x0, false, 0x2b0c48c77d4a4166 );               
        SDK_FIXED_SIZE( openadapterfromdevicename_t, 0x18 );               
    };                                        
};
#include "magic/openadapterfromdevicename_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openadapterfromdevicename_t, 0x18 );
