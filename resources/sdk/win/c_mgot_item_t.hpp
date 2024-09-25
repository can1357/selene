#pragma once
#include <sdkgen/support_library.hpp>
#include "mgot_scm_token_t.hpp"
#include "midl_irot_0001_t.hpp"

#include "magic/c_mgot_item_t.start.hpp"
namespace win
{
    // [class CMgotItem]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_mgot_item_t                                        
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 struct win::mgot_scm_token_t     mgot_scm_token;    //{ +0x0008    +0x0008    +0x0000    +0x0008    } | ._mgotScmToken
        _m01 const uint32_t                   h_apt;             //{ +0x0028    +0x0028    +0x0020    +0x0028    } | ._hApt
        _m02 void const*                      p_vtable_address;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pVtableAddress
        _m03 const bool                       b_is_agile;        //{ +0x0038    +0x0038    +0x0024    +0x0038    } | ._bIsAgile
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                 
        //                                                     
        _m04 uint16_t                         w_item_sig;        //{ +0x0000    +0x0000    +0x0000    } | ._wItemSig
                                                               
        // Windows 11                                          
        //                                                     
        _m05 const enum win::midl_irot_0001_t security_model;    //{ +0x0028    } | ._securityModel
                                                               
        SDK_MAGIC_PROPERTIES( "CMgotItem.$", 0x40, true, 0x93c3749d3c3ba4a );                 
        SDK_DYNAMIC_SIZE( c_mgot_item_t );                     
    };                                                         
};
#include "magic/c_mgot_item_t.end.hpp"
