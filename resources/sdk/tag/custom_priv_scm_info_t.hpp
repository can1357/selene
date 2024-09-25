#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/custom_priv_scm_info_t.start.hpp"
namespace tag
{
    // [struct tagCustomPrivScmInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct custom_priv_scm_info_t         
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 int32_t  apartment;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Apartment
        _m01 wchar_t* pwsz_winsta_desktop;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszWinstaDesktop
        _m02 uint64_t process_signature;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessSignature
        _m03 wchar_t* p_env_block;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pEnvBlock
        _m04 uint32_t env_block_length;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EnvBlockLength
                                          
        SDK_MAGIC_PROPERTIES( "tagCustomPrivScmInfo.$", 0x28, true, 0x6ae126ea7312a94f );                    
        SDK_FIXED_SIZE( custom_priv_scm_info_t, 0x28 );                    
    };                                    
};
#include "magic/custom_priv_scm_info_t.end.hpp"
SDK_VERIFY( struct tag::custom_priv_scm_info_t, 0x28 );
