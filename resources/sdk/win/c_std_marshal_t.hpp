#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../rtl/critical_section_t.hpp"

namespace tag { struct ipid_entry_t; }

#include "magic/c_std_marshal_t.start.hpp"
namespace win
{
    struct hstring_t;
    class ctx_entry_t;
    class cid_object_t;
    struct i_unknown_t;
    class c_ref_cache_t;
    class c_policy_set_t;
    class c_ctx_com_chnl_t;
    class c_std_identity_t;
    struct i_rem_unknown_t;

    // [class CStdMarshal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_std_marshal_t                                      
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 uint32_t                       dw_flags;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._dwFlags
        _m01 int32_t                        c_ipi_ds;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._cIPIDs
        _m02 struct tag::ipid_entry_t*      p_first_ipid;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pFirstIPID
        _m03 class win::c_std_identity_t*   p_std_id;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pStdId
        _m04 class win::c_ctx_com_chnl_t*   p_chnl;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pChnl
        _m05 struct nt::guid_t              clsid_handler;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._clsidHandler
        _m06 int32_t                        c_nested_calls;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._cNestedCalls
        _m07 int32_t                        c_table_refs;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | ._cTableRefs
        _m08 struct win::i_rem_unknown_t*   p_secure_rem_unk;    //{ +0x0048    +0x0040    +0x0040    +0x0040    } | ._pSecureRemUnk
        _m09 struct win::i_unknown_t*       p_async_release;     //{ +0x0050    +0x0048    +0x0048    +0x0048    } | ._pAsyncRelease
        _m10 class win::ctx_entry_t*        p_ctx_entry_head;    //{ +0x0058    +0x0050    +0x0050    +0x0050    } | ._pCtxEntryHead
        _m11 class win::ctx_entry_t*        p_ctx_free_list;     //{ +0x0060    +0x0058    +0x0058    +0x0058    } | ._pCtxFreeList
        _m12 struct rtl::critical_section_t cs_ctx_entry;        //{ +0x0068    +0x0060    +0x0060    +0x0060    } | ._csCtxEntry
        _m13 int32_t                        f_cs_initialized;    //{ +0x0090    +0x0088    +0x0088    +0x0088    } | ._fCsInitialized
        _m14 class win::c_policy_set_t*     p_ps;                //{ +0x0098    +0x0090    +0x0090    +0x0090    } | ._pPS
        _m15 class win::cid_object_t*       p_id;                //{ +0x00a0    +0x0098    +0x0098    +0x0098    } | ._pID
        _m16 class win::c_ref_cache_t*      p_ref_cache;         //{ +0x00a8    +0x00a0    +0x00a0    +0x00a0    } | ._pRefCache
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m17 struct win::hstring_t*         factory_class_name;  //{ +0x00a8    +0x00a8    +0x00a8    } | ._factoryClassName
                                                               
        // Windows 10 v1607                                    
        //                                                     
        _m18 uint32_t                       dw_marshal_time;     //{ +0x0040    } | ._dwMarshalTime
        _m19 uint32_t                       dw_last_call_time;   //{ +0x00d0    } | ._dwLastCallTime
                                                               
        SDK_MAGIC_PROPERTIES( "CStdMarshal.$", 0xe0, true, 0xf634102d1eefbf83 );                   
        SDK_DYNAMIC_SIZE( c_std_marshal_t );                   
    };                                                         
};
#include "magic/c_std_marshal_t.end.hpp"
