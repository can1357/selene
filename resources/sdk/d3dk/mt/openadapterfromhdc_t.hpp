#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

namespace win { struct hdc_t; }

#include "magic/openadapterfromhdc_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENADAPTERFROMHDC]
    // => WDK 10 (NV)
    //
    struct openadapterfromhdc_t                  
    {                                            
        // WDK 10                                
        //                                       
        _m00 struct win::hdc_t* h_dc;              //{ +0x0000    } | .hDc
        _m01 uint32_t           adapter_handle;    //{ +0x0008    } | .AdapterHandle
        _m02 struct nt::luid_t  adapter_luid;      //{ +0x000c    } | .AdapterLuid
        _m03 uint32_t           vid_pn_source_id;  //{ +0x0014    } | .VidPnSourceId
                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENADAPTERFROMHDC.$", 0x0, false, 0x90348209218e726e );                 
        SDK_FIXED_SIZE( openadapterfromhdc_t, 0x18 );                 
    };                                           
};
#include "magic/openadapterfromhdc_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openadapterfromhdc_t, 0x18 );
