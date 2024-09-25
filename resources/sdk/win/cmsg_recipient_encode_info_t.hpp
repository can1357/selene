#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmsg_recipient_encode_info_t.start.hpp"
namespace win
{
    struct cmsg_key_agree_recipient_encode_info_t;
    struct cmsg_key_trans_recipient_encode_info_t;
    struct cmsg_mail_list_recipient_encode_info_t;

    // [struct _CMSG_RECIPIENT_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_recipient_encode_info_t                                   
    {                                                                     
        using pcmsg_key_trans_recipient_encode_info_t = struct win::cmsg_key_trans_recipient_encode_info_t*;                    
        using pcmsg_key_agree_recipient_encode_info_t = struct win::cmsg_key_agree_recipient_encode_info_t*;                    
        using pcmsg_mail_list_recipient_encode_info_t = struct win::cmsg_mail_list_recipient_encode_info_t*;                    
                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                
        _m00 uint32_t                                 dw_recipient_choice;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwRecipientChoice
        _m01 pcmsg_key_trans_recipient_encode_info_t  p_key_trans;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pKeyTrans
        _m02 pcmsg_key_agree_recipient_encode_info_t  p_key_agree;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pKeyAgree
        _m03 pcmsg_mail_list_recipient_encode_info_t  p_mail_list;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pMailList
                                                                          
        SDK_MAGIC_PROPERTIES( "_CMSG_RECIPIENT_ENCODE_INFO.$", 0x10, true, 0x4bd951d41af7f996 );                    
        SDK_FIXED_SIZE( cmsg_recipient_encode_info_t, 0x10 );                    
    };                                                                    
};
#include "magic/cmsg_recipient_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_recipient_encode_info_t, 0x10 );
