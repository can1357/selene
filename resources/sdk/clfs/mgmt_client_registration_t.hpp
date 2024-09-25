#pragma once
#include <sdkgen/support_library.hpp>

namespace cls { union lsn_t;          }
namespace nt  { struct file_object_t; }

#include "magic/mgmt_client_registration_t.start.hpp"
namespace clfs
{
    // [struct _CLFS_MGMT_CLIENT_REGISTRATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mgmt_client_registration_t                                                        
    {                                                                                        
        using pclfs_client_advance_tail_callback_t =         sdk::function<int32_t(struct nt::file_object_t*, union cls::lsn_t*, void*)>*;                                  
        using pclfs_client_lff_handler_complete_callback_t = sdk::function<void(struct nt::file_object_t*, int32_t, uint8_t, void*)>*;                                  
        using pclfs_client_log_unpinned_callback_t =         sdk::function<void(struct nt::file_object_t*, void*)>*;                                  
                                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                   
        _m00 uint32_t                                      version;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 pclfs_client_advance_tail_callback_t          advance_tail_callback;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AdvanceTailCallback
        _m02 void*                                         advance_tail_callback_data;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AdvanceTailCallbackData
        _m03 pclfs_client_lff_handler_complete_callback_t  log_growth_complete_callback;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LogGrowthCompleteCallback
        _m04 void*                                         log_growth_complete_callback_data;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .LogGrowthCompleteCallbackData
        _m05 pclfs_client_log_unpinned_callback_t          log_unpinned_callback;              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .LogUnpinnedCallback
        _m06 void*                                         log_unpinned_callback_data;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .LogUnpinnedCallbackData
                                                                                             
        SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_CLIENT_REGISTRATION.$", 0x38, true, 0x6761d5fb9919fbf1 );                                  
        SDK_FIXED_SIZE( mgmt_client_registration_t, 0x38 );                                  
    };                                                                                       
};
#include "magic/mgmt_client_registration_t.end.hpp"
SDK_VERIFY( struct clfs::mgmt_client_registration_t, 0x38 );
