#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "service_status_t.hpp"
#include "../rtl/critical_section_t.hpp"

#include "magic/c_surrogate_process_activator_t.start.hpp"
namespace win
{
    struct hinstance_t;
    struct i_surrogate_t;
    class c_std_identity_t;
    struct i_services_sink_t;
    struct i_com_process_info_t;
    struct i_process_server_info_t;
    struct service_status_handle_t;

    // [class CSurrogateProcessActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_surrogate_process_activator_t                                         
    {                                                                             
        enum class u0_m_timeout_state_t : int32_t                                 
        {                                                                         
            inactive =        0x0,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            pending =         0x1,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            suspended =       0x2,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            happening =       0x3,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            forced_shutdown = 0x4,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        };                                                                        
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                        
        _m000 struct nt::guid_t                    m_process_guid;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_processGuid
        _m001 int32_t                              m_f_services_configured;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_fServicesConfigured
        _m002 uint32_t                             m_dw_object_count_at_idle_time;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .m_dwObjectCountAtIdleTime
        _m003 int32_t                              m_l_rc;                          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .m_lRC
        _m004 void*                                m_h_init_thread;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_hInitThread
        _m005 void*                                m_h_stop_pinging_scm;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_hStopPingingSCM
        _m006 struct win::i_com_process_info_t*    m_p_i_com_process_info;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_pIComProcessInfo
        _m007 struct win::i_process_server_info_t* m_p_i_process_server_info;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_pIProcessServerInfo
        _m008 class win::c_std_identity_t*         m_p_std_id;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_pStdID
        _m009 struct win::i_surrogate_t*           m_p_i_surrogate;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_pISurrogate
        _m010 struct win::hinstance_t*             m_h_comsvcs;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .m_hCOMSVCS
        _m011 struct win::i_services_sink_t*       m_p_services;                    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_pServices
        _m012 void*                                m_h_init_completed;              //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_hInitCompleted
        _m013 void*                                m_h_fusion_context;              //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_hFusionContext
        _m014 uint32_t                             m_ul_services_ping;              //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_ulServicesPing
        _m015 uint32_t                             m_ul_init_timeout;               //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .m_ulInitTimeout
        _m016 int32_t                              m_l_process_ref_count;           //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_lProcessRefCount
        _m017 struct rtl::critical_section_t       m_timeout_lock;                  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_timeoutLock
        _m018 int32_t                              m_b_lock_valid;                  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_bLockValid
        _m019 void*                                m_h_timeout_event;               //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_hTimeoutEvent
        _m020 u0_m_timeout_state_t                 m_timeout_state;                 //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .m_timeoutState
        _m021 uint32_t                             m_c_activations;                 //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .m_cActivations
        _m022 uint32_t                             m_c_milliseconds_til_death;      //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_cMillisecondsTilDeath
        _m023 uint32_t                             m_c_timeout_period;              //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .m_cTimeoutPeriod
        _m024 int32_t                              m_b_paused;                      //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .m_bPaused
        _m025 int32_t                              m_b_init_notified;               //{ +0x00ec    +0x00ec    +0x00ec    +0x00ec    } | .m_bInitNotified
        _m026 void*                                m_h_nt_service_thread;           //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .m_hNTServiceThread
        _m027 void*                                m_h_service_started;             //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .m_hServiceStarted
        _m028 struct win::service_status_handle_t* m_h_nt_service_handle;           //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .m_hNTServiceHandle
        _m029 struct win::service_status_t         m_nt_service_status;             //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .m_NTServiceStatus
        _m030 struct rtl::critical_section_t       m_service_status_lock;           //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .m_serviceStatusLock
        _m031 int32_t                              m_f_service_status_lock_valid;   //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .m_fServiceStatusLockValid
        _m032 sdk::array<wchar_t, 256>             m_nt_service_name;               //{ +0x0154    +0x0154    +0x0154    +0x0154    } | .m_NTServiceName
                                                                                  
        SDK_MAGIC_PROPERTIES( "CSurrogateProcessActivator.$", 0x358, true, 0xf9d1f4088b958269 );                               
        SDK_FIXED_SIZE( c_surrogate_process_activator_t, 0x358 );                               
    };                                                                            
};
#include "magic/c_surrogate_process_activator_t.end.hpp"
SDK_VERIFY( class win::c_surrogate_process_activator_t, 0x358 );
