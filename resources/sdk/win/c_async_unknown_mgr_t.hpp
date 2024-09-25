#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/multi_qi_t.hpp"

namespace nt  { struct guid_t;      }
namespace tag { struct qicontext_t; }

#include "magic/c_async_unknown_mgr_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    class c_std_identity_t;
    class c_client_call_mgr_t;
    struct async_i_rem_unknown2_t;

    // [class CAsyncUnknownMgr]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_async_unknown_mgr_t                              
    {                                                        
        enum class u0_eflags_t : int32_t                     
        {                                                    
            waitingforbegin =    0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            waitingforfinish =   0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            beginaborted =       0x3,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            executingfinish =    0x4,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            initializingobject = 0x5,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        };                                                   
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                   
        _m00 uint32_t                            dw_state;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._dwState
        _m01 sdk::hresult                        hr;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._hr
        _m02 u0_eflags_t                         eflags;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .eflags
        _m03 uint32_t                            dw_flags;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._dwFlags
        _m04 class win::c_client_call_mgr_t*     p_next_mgr;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pNextMgr
        _m05 uint32_t                            c_refs;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._cRefs
        _m06 struct win::i_unknown_t*            p_unk_outer;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._pUnkOuter
        _m07 class win::c_std_identity_t*        p_std_id;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._pStdId
        _m08 struct win::i_unknown_t*            p_aru_obj;    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._pARUObj
        _m09 struct win::async_i_rem_unknown2_t* p_aru;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._pARU
        _m10 struct tag::multi_qi_t              mqi;          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | ._MQI
        _m11 uint32_t                            ul_refs;      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | ._ulRefs
        _m12 struct tag::qicontext_t*            p_qic;        //{ +0x0088    +0x0088    +0x0088    +0x0088    } | ._pQIC
        _m13 uint32_t                            c_acquired;   //{ +0x0090    +0x0090    +0x0090    +0x0090    } | ._cAcquired
        _m14 uint32_t                            c_mq_is;      //{ +0x0094    +0x0094    +0x0094    +0x0094    } | ._cMQIs
        _m15 struct nt::guid_t*                  p_ii_ds;      //{ +0x0098    +0x0098    +0x0098    +0x0098    } | ._pIIDs
        _m16 struct tag::multi_qi_t**            pp_mqi;       //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | ._ppMQI
        _m17 struct tag::multi_qi_t*             p_mqi_save;   //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | ._pMQISave
                                                             
        SDK_MAGIC_PROPERTIES( "CAsyncUnknownMgr.$", 0xb0, true, 0x429112b87f7c81a3 );            
        SDK_FIXED_SIZE( c_async_unknown_mgr_t, 0xb0 );            
    };                                                       
};
#include "magic/c_async_unknown_mgr_t.end.hpp"
SDK_VERIFY( class win::c_async_unknown_mgr_t, 0xb0 );
