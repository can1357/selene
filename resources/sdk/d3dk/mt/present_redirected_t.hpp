#pragma once
#include <sdkgen/support_library.hpp>
#include "presenthistorytoken_t.hpp"
#include "present_redirecteds_flags_t.hpp"

#include "magic/present_redirected_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PRESENT_REDIRECTED]
    // => WDK 10 (NV)
    //
    struct present_redirected_t                                                    
    {                                                                              
        // WDK 10                                                                  
        //                                                                         
        _m00 uint32_t                                     h_sync_obj;                //{ +0x0000    } | .hSyncObj
        _m01 uint32_t                                     h_device;                  //{ +0x0004    } | .hDevice
        _m02 uint64_t                                     waited_fence_value;        //{ +0x0008    } | .WaitedFenceValue
        _m03 struct d3dk::mt::presenthistorytoken_t       present_history_token;     //{ +0x0010    } | .PresentHistoryToken
        _m04 struct d3dk::mt::present_redirecteds_flags_t flags;                     //{ +0x0448    } | .Flags
        _m05 uint32_t                                     h_source;                  //{ +0x044c    } | .hSource
        _m06 uint32_t                                     private_driver_data_size;  //{ +0x0450    } | .PrivateDriverDataSize
        _m07 void*                                        p_private_driver_data;     //{ +0x0458    } | .pPrivateDriverData
                                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_REDIRECTED.$", 0x0, false, 0xdec038aef0572e52 );                         
        SDK_FIXED_SIZE( present_redirected_t, 0x460 );                             
    };                                                                             
};
#include "magic/present_redirected_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_redirected_t, 0x460 );
