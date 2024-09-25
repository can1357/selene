#pragma once
#include <sdkgen/support_library.hpp>
#include "schannel_cred_t.hpp"
#include "e_handle_state_t.hpp"

#include "magic/c_channel_handle_t.start.hpp"
namespace win
{
    struct cert_context_t;

    // [class CChannelHandle]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_channel_handle_t                                                            
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                              
        _m00 void*                             h_rpc;                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._hRpc
        _m01 const uint32_t                    l_authn;                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._lAuthn
        _m02 const uint32_t                    l_imp;                                     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._lImp
        _m03 void*                             h_token;                                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._hToken
        _m04 const enum win::e_handle_state_t  e_state;                                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._eState
        _m05 int1_t                            f_first_call;                              //{ +0x002c@0  +0x002c@0  +0x002c@0  +0x002c@0  } | ._fFirstCall
        _m06 bool                              f_do_not_disturb;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._fDoNotDisturb
        _m07 bool                              b_exempt_from_asta_to_asta_block;          //{ +0x0031    +0x0031    +0x0031    +0x0031    } | ._bExemptFromAstaToAstaBlock
        _m08 bool                              b_disable_async_remoting_for_winrt_async;  //{ +0x0032    +0x0032    +0x0032    +0x0032    } | ._bDisableAsyncRemotingForWinrtAsync
        _m09 bool                              b_is_non_default_association;              //{ +0x0033    +0x0033    +0x0033    +0x0033    } | ._bIsNonDefaultAssociation
        _m10 struct win::schannel_cred_t       s_cred;                                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._sCred
        _m11 const struct win::cert_context_t* p_cert;                                    //{ +0x0088    +0x0088    +0x0088    +0x0088    } | ._pCert
                                                                                        
        SDK_MAGIC_PROPERTIES( "CChannelHandle.$", 0x90, true, 0xa168e29ea8987b90 );                                         
        SDK_FIXED_SIZE( c_channel_handle_t, 0x90 );                                         
    };                                                                                  
};
#include "magic/c_channel_handle_t.end.hpp"
SDK_VERIFY( class win::c_channel_handle_t, 0x90 );
