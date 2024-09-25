#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_url_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_URL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_url_info_t               
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                
        _m00 uint32_t  cb_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t  dw_sync_delta_time;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSyncDeltaTime
        _m02 uint32_t  c_group;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cGroup
        _m03 uint32_t* rgc_group_entry;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgcGroupEntry
                                          
        SDK_MAGIC_PROPERTIES( "_CRYPT_URL_INFO.$", 0x18, true, 0x9897a0a457e31d2b );                   
        SDK_FIXED_SIZE( crypt_url_info_t, 0x18 );                   
    };                                    
};
#include "magic/crypt_url_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_url_info_t, 0x18 );
