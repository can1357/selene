#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cmsg_ctrl_add_signer_unauth_attr_para_t.start.hpp"
namespace win
{
    // [struct _CMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_ctrl_add_signer_unauth_attr_para_t        
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 uint32_t                     cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                     dw_signer_index;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSignerIndex
        _m02 struct win::cryptoapi_blob_t blob;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .blob
                                                          
        SDK_MAGIC_PROPERTIES( "_CMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA.$", 0x18, true, 0xa17ca703cf4b4306 );                
        SDK_FIXED_SIZE( cmsg_ctrl_add_signer_unauth_attr_para_t, 0x18 );                
    };                                                    
};
#include "magic/cmsg_ctrl_add_signer_unauth_attr_para_t.end.hpp"
SDK_VERIFY( struct win::cmsg_ctrl_add_signer_unauth_attr_para_t, 0x18 );
