#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/sharedprimaryunlocknotification_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION]
    // => WDK 10 (NV)
    //
    struct sharedprimaryunlocknotification_t    
    {                                           
        // WDK 10                               
        //                                      
        _m00 struct nt::luid_t adapter_luid;      //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t          vid_pn_source_id;  //{ +0x0008    } | .VidPnSourceId
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION.$", 0x0, false, 0x8ca93d4f91b765b2 );                 
        SDK_FIXED_SIZE( sharedprimaryunlocknotification_t, 0xc );                 
    };                                          
};
#include "magic/sharedprimaryunlocknotification_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::sharedprimaryunlocknotification_t, 0xc );
