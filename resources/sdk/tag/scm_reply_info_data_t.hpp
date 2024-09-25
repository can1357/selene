#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct custom_remote_reply_scm_info_t; }

#include "magic/scm_reply_info_data_t.start.hpp"
namespace tag
{
    struct custom_priv_resolver_info_t;

    // [struct tagScmReplyInfoData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scm_reply_info_data_t                                         
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                               
        _m00 struct tag::custom_priv_resolver_info_t*    p_resolver_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pResolverInfo
        _m01 struct win::custom_remote_reply_scm_info_t* remote_reply;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .remoteReply
                                                                         
        SDK_MAGIC_PROPERTIES( "tagScmReplyInfoData.$", 0x10, true, 0xbdd23955c9d9049c );                
        SDK_FIXED_SIZE( scm_reply_info_data_t, 0x10 );                   
    };                                                                   
};
#include "magic/scm_reply_info_data_t.end.hpp"
SDK_VERIFY( struct tag::scm_reply_info_data_t, 0x10 );
