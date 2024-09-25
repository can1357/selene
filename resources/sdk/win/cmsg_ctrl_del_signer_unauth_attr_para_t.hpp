#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmsg_ctrl_del_signer_unauth_attr_para_t.start.hpp"
namespace win
{
    // [struct _CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_ctrl_del_signer_unauth_attr_para_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t cb_size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_signer_index;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSignerIndex
        _m02 uint32_t dw_unauth_attr_index;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwUnauthAttrIndex
                                                  
        SDK_MAGIC_PROPERTIES( "_CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA.$", 0xc, true, 0x322ff35c94fba648 );                     
        SDK_FIXED_SIZE( cmsg_ctrl_del_signer_unauth_attr_para_t, 0xc );                     
    };                                            
};
#include "magic/cmsg_ctrl_del_signer_unauth_attr_para_t.end.hpp"
SDK_VERIFY( struct win::cmsg_ctrl_del_signer_unauth_attr_para_t, 0xc );
