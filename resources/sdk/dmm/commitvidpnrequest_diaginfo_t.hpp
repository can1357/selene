#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/commitvidpnrequest_diaginfo_t.start.hpp"
namespace dmm
{
    // [struct _DMM_COMMITVIDPNREQUEST_DIAGINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct commitvidpnrequest_diaginfo_t                             
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                           
        _m00 int4_t   client_type;                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ClientType
        _m01 int4_t   vid_pn_change;                                   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .VidPnChange
        _m02 uint1_t  reclaim_cloned_target;                           //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .ReclaimClonedTarget
        _m03 uint1_t  cleanup_after_failed_commit_vid_pn;              //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .CleanupAfterFailedCommitVidPn
        _m04 uint1_t  force_all_active_vid_pn_mode_list_invalidation;  //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .ForceAllActiveVidPnModeListInvalidation
        _m05 uint1_t  skip_commit_vid_pn;                              //{ +0x0004@3  +0x0004@3  +0x0004@3  +0x0004@3  } | .SkipCommitVidPn
        _m06 uint32_t mode_change_request_id;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ModeChangeRequestId
                                                                     
        SDK_MAGIC_PROPERTIES( "_DMM_COMMITVIDPNREQUEST_DIAGINFO.$", 0xc, true, 0xb35866a08ca29e54 );                                               
        SDK_FIXED_SIZE( commitvidpnrequest_diaginfo_t, 0xc );                                               
    };                                                               
};
#include "magic/commitvidpnrequest_diaginfo_t.end.hpp"
SDK_VERIFY( struct dmm::commitvidpnrequest_diaginfo_t, 0xc );
