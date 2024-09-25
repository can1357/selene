#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysdbg_kd_pull_remote_file_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_KD_PULL_REMOTE_FILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_kd_pull_remote_file_t       
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::unicode_view image_file_name;  //{ +0x0000    +0x0000    +0x0000    } | .ImageFileName
                                              
        SDK_MAGIC_PROPERTIES( "_SYSDBG_KD_PULL_REMOTE_FILE.$", 0x10, true, 0xd3275b44bb7dace5 );                
        SDK_FIXED_SIZE( sysdbg_kd_pull_remote_file_t, 0x10 );                
    };                                        
};
#include "magic/sysdbg_kd_pull_remote_file_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_kd_pull_remote_file_t, 0x10 );
