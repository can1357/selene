#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IScmReplyInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_scm_reply_info_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IScmReplyInfo.$", 0x8, true, 0x67bd9346a56fb208 );
        SDK_FIXED_SIZE( i_scm_reply_info_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_scm_reply_info_t, 0x8 );
