#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmsg_ctrl_mail_list_decrypt_para_t.start.hpp"
namespace win
{
    struct cmsg_mail_list_recipient_info_t;

    // [struct _CMSG_CTRL_MAIL_LIST_DECRYPT_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_ctrl_mail_list_decrypt_para_t                                   
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                      
        _m00 uint32_t                                     cb_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint64_t                                     h_crypt_prov;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m02 struct win::cmsg_mail_list_recipient_info_t* p_mail_list;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pMailList
        _m03 uint32_t                                     dw_recipient_index;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwRecipientIndex
        _m04 uint32_t                                     dw_key_choice;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwKeyChoice
        _m05 uint64_t                                     h_key_encryption_key;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hKeyEncryptionKey
        _m06 void*                                        pv_key_encryption_key;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvKeyEncryptionKey
                                                                                
        SDK_MAGIC_PROPERTIES( "_CMSG_CTRL_MAIL_LIST_DECRYPT_PARA.$", 0x28, true, 0x174f405d128a844a );                      
        SDK_FIXED_SIZE( cmsg_ctrl_mail_list_decrypt_para_t, 0x28 );                      
    };                                                                          
};
#include "magic/cmsg_ctrl_mail_list_decrypt_para_t.end.hpp"
SDK_VERIFY( struct win::cmsg_ctrl_mail_list_decrypt_para_t, 0x28 );
