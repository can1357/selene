#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../rtl/critical_section_t.hpp"

namespace tag { struct ipid_entry_t; }

#include "magic/c_std_identity_t.start.hpp"
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
    struct i_external_connection_t;

    // [class CStdIdentity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_std_identity_t                                                          
    {                                                                               
        // Windows 10 v1607, Windows 10 v1607, Windows 10 v1607, Windows 10 v2004, Windows 10 v2004, Windows 10 v2004, Windows 11, Windows 11, Windows 11, Windows 10 v20H2, Windows 10 v20H2, Windows 10 v20H2                                 
        //                                                                          
        _m000 class win::c_std_identity_t*         p_std_id;                          //{ +0x0020    +0x00e8    +0x00f8    +0x0020    +0x00f0    +0x0100    +0x0020    +0x00f0    +0x0100    +0x0020    +0x00f0    +0x0100    } | ._pStdId
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                          
        _m001 uint32_t                             dw_flags;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._dwFlags
        _m002 int32_t                              c_ipi_ds;                          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._cIPIDs
        _m003 struct tag::ipid_entry_t*            p_first_ipid;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pFirstIPID
        _m004 class win::c_ctx_com_chnl_t*         p_chnl;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pChnl
        _m005 struct nt::guid_t                    clsid_handler;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._clsidHandler
        _m006 int32_t                              c_nested_calls;                    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._cNestedCalls
        _m007 int32_t                              c_table_refs;                      //{ +0x0044    +0x0044    +0x0044    +0x0044    } | ._cTableRefs
        _m008 struct win::i_rem_unknown_t*         p_secure_rem_unk;                  //{ +0x0050    +0x0048    +0x0048    +0x0048    } | ._pSecureRemUnk
        _m009 struct win::i_unknown_t*             p_async_release;                   //{ +0x0058    +0x0050    +0x0050    +0x0050    } | ._pAsyncRelease
        _m010 class win::ctx_entry_t*              p_ctx_entry_head;                  //{ +0x0060    +0x0058    +0x0058    +0x0058    } | ._pCtxEntryHead
        _m011 class win::ctx_entry_t*              p_ctx_free_list;                   //{ +0x0068    +0x0060    +0x0060    +0x0060    } | ._pCtxFreeList
        _m012 struct rtl::critical_section_t       cs_ctx_entry;                      //{ +0x0070    +0x0068    +0x0068    +0x0068    } | ._csCtxEntry
        _m013 int32_t                              f_cs_initialized;                  //{ +0x0098    +0x0090    +0x0090    +0x0090    } | ._fCsInitialized
        _m014 class win::c_policy_set_t*           p_ps;                              //{ +0x00a0    +0x0098    +0x0098    +0x0098    } | ._pPS
        _m015 class win::cid_object_t*             p_id;                              //{ +0x00a8    +0x00a0    +0x00a0    +0x00a0    } | ._pID
        _m016 class win::c_ref_cache_t*            p_ref_cache;                       //{ +0x00b0    +0x00a8    +0x00a8    +0x00a8    } | ._pRefCache
        _m017 struct win::i_unknown_t*             p_unk_outer;                       //{ +0x0100    +0x0108    +0x0108    +0x0108    } | ._pUnkOuter
        _m018 uint32_t                             m_refs;                            //{ +0x0130    +0x0138    +0x0138    +0x0138    } | .m_refs
        _m019 uint32_t                             m_flags;                           //{ +0x0134    +0x013c    +0x013c    +0x013c    } | .m_flags
        _m020 struct win::i_unknown_t*             m_p_unk_outer;                     //{ +0x0138    +0x0140    +0x0140    +0x0140    } | .m_pUnkOuter
        _m021 struct win::i_unknown_t*             m_p_unk_control;                   //{ +0x0140    +0x0148    +0x0148    +0x0148    } | .m_pUnkControl
        _m022 void*                                m_p_vtable_address;                //{ +0x0148    +0x0150    +0x0150    +0x0150    } | .m_pVtableAddress
        _m023 struct win::i_external_connection_t* m_p_iec;                           //{ +0x0150    +0x0158    +0x0158    +0x0158    } | .m_pIEC
        _m024 struct nt::guid_t                    m_moid;                            //{ +0x0158    +0x0160    +0x0160    +0x0160    } | .m_moid
        _m025 uint32_t                             m_dw_apt_id;                       //{ +0x0168    +0x0170    +0x0170    +0x0170    } | .m_dwAptId
        _m026 volatile int32_t                     m_c_strong_refs;                   //{ +0x016c    +0x0174    +0x0174    +0x0174    } | .m_cStrongRefs
        _m027 volatile int32_t                     m_c_weak_refs;                     //{ +0x0170    +0x0178    +0x0178    +0x0178    } | .m_cWeakRefs
        _m028 int32_t                              m_c_marshals_in_progress;          //{ +0x0174    +0x017c    +0x017c    +0x017c    } | .m_cMarshalsInProgress
        _m029 int32_t                              m_c_marshals_in_call;              //{ +0x0178    +0x0180    +0x0180    +0x0180    } | .m_cMarshalsInCall
        _m030 int32_t                              m_c_same_process_direct_marshals;  //{ +0x017c    +0x0184    +0x0184    +0x0184    } | .m_cSameProcessDirectMarshals
        _m031 sdk::hresult                         m_conn_status;                     //{ +0x0180    +0x0188    +0x0188    +0x0188    } | .m_ConnStatus
        _m032 void*                                m_p_void;                          //{ +0x0188    +0x0190    +0x0190    +0x0190    } | .m_pVoid
                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                          
        _m033 struct win::hstring_t*               factory_class_name;                //{ +0x00b0    +0x00b0    +0x00b0    } | ._factoryClassName
                                                                                    
        // Windows 10 v1607                                                         
        //                                                                          
        _m034 uint32_t                             dw_marshal_time;                   //{ +0x0048    } | ._dwMarshalTime
        _m035 uint32_t                             dw_last_call_time;                 //{ +0x00d8    } | ._dwLastCallTime
                                                                                    
        SDK_MAGIC_PROPERTIES( "CStdIdentity.$", 0x1a0, true, 0x1595144830b035e8 );                                 
        SDK_DYNAMIC_SIZE( c_std_identity_t );                                       
    };                                                                              
};
#include "magic/c_std_identity_t.end.hpp"
