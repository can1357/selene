#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmsg_ctrl_verify_signature_ex_para_t.start.hpp"
namespace win
{
    // [struct _CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_ctrl_verify_signature_ex_para_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t cb_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint64_t h_crypt_prov;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m02 uint32_t dw_signer_index;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwSignerIndex
        _m03 uint32_t dw_signer_type;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwSignerType
        _m04 void*    pv_signer;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvSigner
                                               
        SDK_MAGIC_PROPERTIES( "_CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA.$", 0x20, true, 0xc52f264bd992f5a2 );                
        SDK_FIXED_SIZE( cmsg_ctrl_verify_signature_ex_para_t, 0x20 );                
    };                                         
};
#include "magic/cmsg_ctrl_verify_signature_ex_para_t.end.hpp"
SDK_VERIFY( struct win::cmsg_ctrl_verify_signature_ex_para_t, 0x20 );
