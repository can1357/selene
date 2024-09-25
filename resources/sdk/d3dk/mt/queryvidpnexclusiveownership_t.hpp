#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "vidpnsourceowner_type_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/queryvidpnexclusiveownership_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP]
    // => WDK 10 (NV)
    //
    struct queryvidpnexclusiveownership_t                            
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 void*                                  h_process;         //{ +0x0000    } | .hProcess
        _m01 struct win::hwnd_t*                    h_window;          //{ +0x0008    } | .hWindow
        _m02 uint32_t                               vid_pn_source_id;  //{ +0x0010    } | .VidPnSourceId
        _m03 struct nt::luid_t                      adapter_luid;      //{ +0x0014    } | .AdapterLuid
        _m04 enum d3dk::mt::vidpnsourceowner_type_t owner_type;        //{ +0x001c    } | .OwnerType
                                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP.$", 0x0, false, 0x666afc4e3f969284 );                 
        SDK_FIXED_SIZE( queryvidpnexclusiveownership_t, 0x20 );                 
    };                                                               
};
#include "magic/queryvidpnexclusiveownership_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryvidpnexclusiveownership_t, 0x20 );
