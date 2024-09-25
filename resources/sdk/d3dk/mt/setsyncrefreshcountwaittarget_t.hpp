#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setsyncrefreshcountwaittarget_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET]
    // => WDK 10 (NV)
    //
    struct setsyncrefreshcountwaittarget_t      
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t h_adapter;                  //{ +0x0000    } | .hAdapter
        _m01 uint32_t h_device;                   //{ +0x0004    } | .hDevice
        _m02 uint32_t vid_pn_source_id;           //{ +0x0008    } | .VidPnSourceId
        _m03 uint32_t target_sync_refresh_count;  //{ +0x000c    } | .TargetSyncRefreshCount
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET.$", 0x0, false, 0xa1d96517afc7d31f );                          
        SDK_FIXED_SIZE( setsyncrefreshcountwaittarget_t, 0x10 );                          
    };                                          
};
#include "magic/setsyncrefreshcountwaittarget_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setsyncrefreshcountwaittarget_t, 0x10 );
