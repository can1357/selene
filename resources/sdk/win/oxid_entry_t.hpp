#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../tag/comversion_t.hpp"

namespace tag { struct dualstringarray_t; }

#include "magic/oxid_entry_t.start.hpp"
namespace win
{
    struct hwnd_t;
    class mid_entry_t;
    class c_list_element_t;
    struct i_rem_unknown_t;
    class c_com_apartment_t;
    class c_channel_handle_t;

    // [class OXIDEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class oxid_entry_t                                                                           
    {                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                       
        _m000 class win::c_list_element_t*            flink;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._flink
        _m001 class win::c_list_element_t*            blink;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._blink
        _m002 const uint64_t                          mid;                                         //{ +0x0028    +0x00b0    +0x00b0    +0x00b0    } | ._mid
        _m003 struct nt::guid_t                       ipid_rundown;                                //{ +0x0030    +0x00b8    +0x00b8    +0x00b8    } | ._ipidRundown
        _m004 struct nt::guid_t                       moxid;                                       //{ +0x0018    +0x00c8    +0x00c8    +0x00c8    } | ._moxid
        _m005 struct win::hwnd_t*                     h_server_sta;                                //{ +0x0048    +0x00e0    +0x00e0    +0x00e0    } | ._hServerSTA
        _m006 class win::c_com_apartment_t*           p_parent_apt;                                //{ +0x0050    +0x00e8    +0x00e8    +0x00e8    } | ._pParentApt
        _m007 class win::c_channel_handle_t volatile* p_shared_default_handle;                     //{ +0x0058    +0x00f0    +0x00f0    +0x00f0    } | ._pSharedDefaultHandle
        _m008 void*                                   p_auth_id;                                   //{ +0x0060    +0x00f8    +0x00f8    +0x00f8    } | ._pAuthId
        _m009 uint32_t                                dw_authn_svc;                                //{ +0x0074    +0x0100    +0x0100    +0x0100    } | ._dwAuthnSvc
        _m010 class win::mid_entry_t*                 p_mid_entry;                                 //{ +0x0078    +0x0108    +0x0108    +0x0108    } | ._pMIDEntry
        _m011 struct win::i_rem_unknown_t*            p_rusta;                                     //{ +0x0080    +0x0110    +0x0110    +0x0110    } | ._pRUSTA
        _m012 uint32_t                                c_refs;                                      //{ +0x0088    +0x0118    +0x0118    +0x0118    } | ._cRefs
        _m013 void*                                   h_complete;                                  //{ +0x0090    +0x0120    +0x0120    +0x0120    } | ._hComplete
        _m014 int32_t                                 c_calls;                                     //{ +0x0098    +0x0128    +0x0128    +0x0128    } | ._cCalls
        _m015 int32_t                                 c_resolver_ref;                              //{ +0x009c    +0x012c    +0x012c    +0x012c    } | ._cResolverRef
        _m016 uint32_t                                dw_expired_time;                             //{ +0x00a0    +0x0130    +0x0130    +0x0130    } | ._dwExpiredTime
        _m017 void*                                   p_app_container_server_security_descriptor;  //{ +0x00a8    +0x0138    +0x0138    +0x0138    } | ._pAppContainerServerSecurityDescriptor
        _m018 const uint32_t                          ul_marshaled_target_info_length;             //{ +0x00b0    +0x0140    +0x0140    +0x0140    } | ._ulMarshaledTargetInfoLength
                                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                       
        _m019 bool                                    m_is_in_list;                                //{ +0x0010    +0x0010    +0x0010    } | .m_isInList
                                                                                                 
        // Windows 10 v1607                                                                      
        //                                                                                       
        _m020 uint32_t                                dw_pid;                                      //{ +0x0010    } | ._dwPid
        _m021 uint32_t                                dw_tid;                                      //{ +0x0014    } | ._dwTid
        _m022 uint32_t                                dw_flags;                                    //{ +0x0040    } | ._dwFlags
        _m023 struct tag::dualstringarray_t*          p_binding;                                   //{ +0x0068    } | ._pBinding
        _m024 uint32_t                                dw_authn_hint;                               //{ +0x0070    } | ._dwAuthnHint
        _m025 struct tag::comversion_t                version;                                     //{ +0x00a4    } | ._version
        _m026 wchar_t*                                psz_server_package_full_name;                //{ +0x00c0    } | ._pszServerPackageFullName
        _m027 struct nt::guid_t                       guid_process_identifier;                     //{ +0x00c8    } | ._guidProcessIdentifier
                                                                                                 
        SDK_MAGIC_PROPERTIES( "OXIDEntry.$", 0x160, true, 0xe3e2097ab69e71eb );                                           
        SDK_DYNAMIC_SIZE( oxid_entry_t );                                                        
    };                                                                                           
};
#include "magic/oxid_entry_t.end.hpp"
