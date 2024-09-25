#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "../../win/rectl_t.hpp"

#include "magic/sharedprimarylocknotification_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION]
    // => WDK 10 (NV)
    //
    struct sharedprimarylocknotification_t        
    {                                             
        // WDK 10                                 
        //                                        
        _m00 struct nt::luid_t   adapter_luid;      //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t            vid_pn_source_id;  //{ +0x0008    } | .VidPnSourceId
        _m02 struct win::rectl_t lock_rect;         //{ +0x000c    } | .LockRect
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION.$", 0x0, false, 0xbc5fc774ca1a719a );                 
        SDK_FIXED_SIZE( sharedprimarylocknotification_t, 0x1c );                 
    };                                            
};
#include "magic/sharedprimarylocknotification_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::sharedprimarylocknotification_t, 0x1c );
