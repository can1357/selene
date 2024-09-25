#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/scm_reply_info_data_t.hpp"

#include "magic/scm_reply_info_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class ScmReplyInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class scm_reply_info_t                                            
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m00 struct win::i_serializable_parent_t* parent;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                              un_serialized;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                              added;                //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._added
        _m03 struct tag::scm_reply_info_data_t    scm_reply_info_data;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._scmReplyInfoData
                                                                      
        SDK_MAGIC_PROPERTIES( "ScmReplyInfo.$", 0x30, true, 0xabdfafc64017153b );                    
        SDK_FIXED_SIZE( scm_reply_info_t, 0x30 );                     
    };                                                                
};
#include "magic/scm_reply_info_t.end.hpp"
SDK_VERIFY( class win::scm_reply_info_t, 0x30 );
