#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/priv_scm_info_t.start.hpp"
namespace win
{
    // [struct _PRIV_SCM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct priv_scm_info_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 int32_t  l_thread_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lThreadID
        _m01 wchar_t* pwsz_winsta_desktop;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszWinstaDesktop
        _m02 uint64_t process_signature;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessSignature
        _m03 wchar_t* p_env_block;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pEnvBlock
        _m04 uint32_t env_block_length;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EnvBlockLength
                                          
        SDK_MAGIC_PROPERTIES( "_PRIV_SCM_INFO.$", 0x28, true, 0x7892f39437361b60 );                    
        SDK_FIXED_SIZE( priv_scm_info_t, 0x28 );                    
    };                                    
};
#include "magic/priv_scm_info_t.end.hpp"
SDK_VERIFY( struct win::priv_scm_info_t, 0x28 );
