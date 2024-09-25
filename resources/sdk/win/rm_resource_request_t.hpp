#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rm_resource_request_t.start.hpp"
namespace win
{
    // [struct _RM_RESOURCE_REQUEST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rm_resource_request_t                          
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 sdk::array<uint64_t, 2> resources_requested;   //{ +0x0000    +0x0000    +0x0000    } | .ResourcesRequested
        _m01 uint1_t                 use_estimation;        //{ +0x0010@0  +0x0010@0  +0x0010@0  } | .UseEstimation
        _m02 uint1_t                 io_request_valid;      //{ +0x0010@1  +0x0010@1  +0x0010@1  } | .IoRequestValid
        _m03 uint1_t                 commit_request_valid;  //{ +0x0010@2  +0x0010@2  +0x0010@2  } | .CommitRequestValid
        _m04 uint32_t                flags;                 //{ +0x0010    +0x0010    +0x0010    } | .Flags
        _m05 uint64_t                estimation_key;        //{ +0x0018    +0x0018    +0x0018    } | .EstimationKey
                                                          
        SDK_MAGIC_PROPERTIES( "_RM_RESOURCE_REQUEST.$", 0x20, true, 0xb6d9ef40785196f8 );                     
        SDK_FIXED_SIZE( rm_resource_request_t, 0x20 );                     
    };                                                    
};
#include "magic/rm_resource_request_t.end.hpp"
SDK_VERIFY( struct win::rm_resource_request_t, 0x20 );
