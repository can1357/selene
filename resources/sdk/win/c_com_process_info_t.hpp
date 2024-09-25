#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../tag/blob_t.hpp"
#include "key_refresh_info_t.hpp"
#include "../tag/run_as_type_t.hpp"
#include "../tag/process_type_t.hpp"
#include "registration_source_t.hpp"
#include "server_protection_level_t.hpp"

namespace sec { struct descriptor_t; }

#include "magic/c_com_process_info_t.start.hpp"
namespace win
{
    // [class CComProcessInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_com_process_info_t                                                     
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                         
        _m000 const enum win::registration_source_t m_source;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_source
        _m001 int32_t                               m_c_ref;                         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .m_cRef
        _m002 struct nt::guid_t                     m_guid_process_id;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_guidProcessId
        _m003 wchar_t*                              m_pwsz_process_name;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_pwszProcessName
        _m004 enum tag::process_type_t              m_e_process_type;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_eProcessType
        _m005 wchar_t*                              m_pwsz_service_name;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_pwszServiceName
        _m006 wchar_t*                              m_pwsz_service_parameters;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_pwszServiceParameters
        _m007 int32_t                               m_f_activate_at_storage;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_fActivateAtStorage
        _m008 wchar_t*                              m_pwsz_run_as_user;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_pwszRunAsUser
        _m009 enum tag::run_as_type_t               m_e_run_as_type;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .m_eRunAsType
        _m010 wchar_t*                              m_pwsz_surrogate_path;           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_pwszSurrogatePath
        _m011 struct sec::descriptor_t*             m_p_launch_permission;           //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_pLaunchPermission
        _m012 uint32_t                              m_cb_launch_permission;          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_cbLaunchPermission
        _m013 uint32_t                              m_dw_authentication_level;       //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .m_dwAuthenticationLevel
        _m014 uint32_t                              m_dw_rot_flags;                  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_dwROTFlags
        _m015 uint32_t                              m_dw_mgot_flags;                 //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .m_dwMGOTFlags
        _m016 uint32_t                              m_dw_app_id_flags;               //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_dwAppIDFlags
        _m017 wchar_t*                              m_pwsz_remote_server_name;       //{ +0x00a0    +0x00b8    +0x00b8    +0x00b8    } | .m_pwszRemoteServerName
        _m018 uint32_t                              m_dw_flags;                      //{ +0x00a8    +0x00c0    +0x00c0    +0x00c0    } | .m_dwFlags
        _m019 uint32_t                              m_dw_safer_trust_level;          //{ +0x00ac    +0x00c4    +0x00c4    +0x00c4    } | .m_dwSaferTrustLevel
        _m020 struct win::key_refresh_info_t        m_key_refresh_info;              //{ +0x00b0    +0x00c8    +0x00c8    +0x00c8    } | .m_keyRefreshInfo
        _m021 int32_t                               m_f_is_machine_hive;             //{ +0x00c0    +0x00d8    +0x00d8    +0x00d8    } | .m_fIsMachineHive
        _m022 uint32_t                              m_dw_preferred_server_bitness;   //{ +0x00c4    +0x00dc    +0x00dc    +0x00dc    } | .m_dwPreferredServerBitness
        _m023 wchar_t*                              m_pwsz_surrogate_command_debug;  //{ +0x00c8    +0x00e0    +0x00e0    +0x00e0    } | .m_pwszSurrogateCommandDebug
        _m024 wchar_t*                              m_pwsz_server_executable;        //{ +0x00d0    +0x00e8    +0x00e8    +0x00e8    } | .m_pwszServerExecutable
        _m025 int32_t                               m_b_load_user_settings;          //{ +0x00d8    +0x00f0    +0x00f0    +0x00f0    } | .m_bLoadUserSettings
        _m026 int32_t                               m_f_debug_surrogate;             //{ +0x00dc    +0x00f4    +0x00f4    +0x00f4    } | .m_fDebugSurrogate
        _m027 wchar_t*                              m_pwsz_application_id;           //{ +0x00e0    +0x00f8    +0x00f8    +0x00f8    } | .m_pwszApplicationId
        _m028 uint64_t                              m_change_detection_sequence;     //{ +0x00f8    +0x0110    +0x0110    +0x0110    } | .m_changeDetectionSequence
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                         
        _m029 struct tag::blob_t                    m_process_mitigation_policy;     //{ +0x00a0    +0x00a0    +0x00a0    } | .m_processMitigationPolicy
        _m030 enum win::server_protection_level_t   m_protection_level;              //{ +0x00b0    +0x00b0    +0x00b0    } | .m_protectionLevel
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                               
        //                                                                         
        _m031 wchar_t*                              m_pwsz_package_name;             //{ +0x00e8    +0x0100    +0x0100    } | .m_pwszPackageName
                                                                                   
        SDK_MAGIC_PROPERTIES( "CComProcessInfo.$", 0x118, true, 0x95a5e1420d5eb678 );                               
        SDK_DYNAMIC_SIZE( c_com_process_info_t );                                  
    };                                                                             
};
#include "magic/c_com_process_info_t.end.hpp"
