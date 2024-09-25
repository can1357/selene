#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_select_chain_para_t.start.hpp"
namespace win
{
    struct filetime_t;
    struct cert_chain_para_t;

    // [struct _CERT_SELECT_CHAIN_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_select_chain_para_t                            
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 void*                          h_chain_engine;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hChainEngine
        _m01 struct win::filetime_t*        p_time;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTime
        _m02 void*                          h_additional_store;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hAdditionalStore
        _m03 struct win::cert_chain_para_t* p_chain_para;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pChainPara
        _m04 uint32_t                       dw_flags;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFlags
                                                               
        SDK_MAGIC_PROPERTIES( "_CERT_SELECT_CHAIN_PARA.$", 0x28, true, 0x91293341d47167ed );                   
        SDK_FIXED_SIZE( cert_select_chain_para_t, 0x28 );                   
    };                                                         
};
#include "magic/cert_select_chain_para_t.end.hpp"
SDK_VERIFY( struct win::cert_select_chain_para_t, 0x28 );
