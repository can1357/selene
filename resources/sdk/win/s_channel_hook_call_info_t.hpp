#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/s_channel_hook_call_info_t.start.hpp"
namespace win
{
    // [struct SChannelHookCallInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_channel_hook_call_info_t        
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 struct nt::guid_t iid;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .iid
        _m01 uint32_t          cb_size;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbSize
        _m02 struct nt::guid_t u_causality;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .uCausality
        _m03 uint32_t          dw_server_pid;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwServerPid
        _m04 uint32_t          i_method;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .iMethod
        _m05 void*             p_object;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pObject
                                             
        SDK_MAGIC_PROPERTIES( "SChannelHookCallInfo.$", 0x38, true, 0xb5712375d79a6909 );              
        SDK_FIXED_SIZE( s_channel_hook_call_info_t, 0x38 );              
    };                                       
};
#include "magic/s_channel_hook_call_info_t.end.hpp"
SDK_VERIFY( struct win::s_channel_hook_call_info_t, 0x38 );
