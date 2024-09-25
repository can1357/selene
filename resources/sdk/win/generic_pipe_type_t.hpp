#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/generic_pipe_type_t.start.hpp"
namespace win
{
    // [struct _GENERIC_PIPE_TYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct generic_pipe_type_t                                         
    {                                                                  
        using ndr_hr_pipe_pull_rtn_t =  sdk::function<int32_t(char*, void*, uint32_t, uint32_t*)>*;          
        using ndr_hr_pipe_alloc_rtn_t = sdk::function<int32_t(char*, uint32_t, void**, uint32_t*)>*;          
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                             
        _m00 ndr_hr_pipe_pull_rtn_t                          pfn_pull;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnPull
        _m01 sdk::function<int32_t(char*, void*, uint32_t)>* pfn_push;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnPush
        _m02 ndr_hr_pipe_alloc_rtn_t                         pfn_alloc;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnAlloc
        _m03 char*                                           p_state;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pState
                                                                       
        SDK_MAGIC_PROPERTIES( "_GENERIC_PIPE_TYPE.$", 0x20, true, 0xb9fe105af65a9547 );          
        SDK_FIXED_SIZE( generic_pipe_type_t, 0x20 );                   
    };                                                                 
};
#include "magic/generic_pipe_type_t.end.hpp"
SDK_VERIFY( struct win::generic_pipe_type_t, 0x20 );
