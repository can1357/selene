#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/openadapterfromgdidisplayname_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME]
    // => WDK 10 (NV)
    //
    struct openadapterfromgdidisplayname_t            
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 sdk::array<wchar_t, 32> device_name;       //{ +0x0000    } | .DeviceName
        _m01 uint32_t                adapter_handle;    //{ +0x0040    } | .AdapterHandle
        _m02 struct nt::luid_t       adapter_luid;      //{ +0x0044    } | .AdapterLuid
        _m03 uint32_t                vid_pn_source_id;  //{ +0x004c    } | .VidPnSourceId
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME.$", 0x0, false, 0xd8cafc3248892665 );                 
        SDK_FIXED_SIZE( openadapterfromgdidisplayname_t, 0x50 );                 
    };                                                
};
#include "magic/openadapterfromgdidisplayname_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openadapterfromgdidisplayname_t, 0x50 );
