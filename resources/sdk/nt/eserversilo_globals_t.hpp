#pragma once
#include <sdkgen/support_library.hpp>
#include "work_queue_item_t.hpp"
#include "../rtl/nls_state_t.hpp"
#include "../sep/silostate_t.hpp"
#include "serversilo_state_t.hpp"
#include "../dbgk/silostate_t.hpp"
#include "silo_user_shared_data_t.hpp"
#include "../obp/silodriverstate_t.hpp"
#include "../wnf/silodriverstate_t.hpp"
#include "../sep/rm_lsa_connection_state_t.hpp"

namespace etw  { struct silodriverstate_t; }
namespace ex   { struct timezone_state_t;  }
namespace expi { struct license_state_t;   }
namespace nls  { struct state_t;           }
namespace psp  { struct storage_t;         }

#include "magic/eserversilo_globals_t.start.hpp"
namespace nt
{
    struct kevent_t;
    struct eprocess_t;

    // [struct _ESERVERSILO_GLOBALS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eserversilo_globals_t                                                   
    {                                                                              
        using user_shared_data_t = sdk::variant<struct nt::silo_user_shared_data_t, struct nt::silo_user_shared_data_t*>;                               
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                         
        _m000 struct obp::silodriverstate_t         ob_silo_state;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObSiloState
        _m001 struct sep::silostate_t               se_silo_state;                   //{ +0x02e0    +0x02e0    +0x02e0    +0x02e0    } | .SeSiloState
        _m002 struct sep::rm_lsa_connection_state_t se_rm_silo_state;                //{ +0x0300    +0x0310    +0x0310    +0x0310    } | .SeRmSiloState
        _m003 struct etw::silodriverstate_t*        etw_silo_state;                  //{ +0x0350    +0x0360    +0x0360    +0x0360    } | .EtwSiloState
        _m004 struct nt::eprocess_t*                mi_session_leader_process;       //{ +0x0358    +0x0368    +0x0368    +0x0368    } | .MiSessionLeaderProcess
        _m005 struct nt::eprocess_t*                exp_default_error_port_process;  //{ +0x0360    +0x0370    +0x0370    +0x0370    } | .ExpDefaultErrorPortProcess
        _m006 void*                                 exp_default_error_port;          //{ +0x0368    +0x0378    +0x0378    +0x0378    } | .ExpDefaultErrorPort
        _m007 uint32_t                              hard_error_state;                //{ +0x0370    +0x0380    +0x0380    +0x0380    } | .HardErrorState
        _m008 struct wnf::silodriverstate_t         wnf_silo_state;                  //{ +0x0378    +0x0390    +0x0390    +0x0390    } | .WnfSiloState
        _m009 void*                                 api_set_section;                 //{ +0x03b0    +0x0408    +0x0408    +0x0408    } | .ApiSetSection
        _m010 void*                                 api_set_schema;                  //{ +0x03b8    +0x0410    +0x0410    +0x0410    } | .ApiSetSchema
        _m011 uint8_t                               one_core_forwarders_enabled;     //{ +0x03c0    +0x0418    +0x0418    +0x0418    } | .OneCoreForwardersEnabled
        _m012 nt::unicode_view                      silo_root_directory_name;        //{ +0x03c8    +0x0430    +0x0500    +0x0430    } | .SiloRootDirectoryName
        _m013 struct psp::storage_t*                storage;                         //{ +0x03d8    +0x0440    +0x0510    +0x0440    } | .Storage
        _m014 enum nt::serversilo_state_t           state;                           //{ +0x03e0    +0x0448    +0x0518    +0x0448    } | .State
        _m015 int32_t                               exit_status;                     //{ +0x03e4    +0x044c    +0x051c    +0x044c    } | .ExitStatus
        _m016 struct nt::kevent_t*                  delete_event;                    //{ +0x03e8    +0x0450    +0x0520    +0x0450    } | .DeleteEvent
        _m017 user_shared_data_t                    user_shared_data;                //{ +0x03f0    +0x0458    +0x0528    +0x0458    } | .UserSharedData
        _m018 struct nt::work_queue_item_t          terminate_work_item;             //{ +0x0410    +0x0468    +0x0538    +0x0468    } | .TerminateWorkItem
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                         
        _m019 struct expi::license_state_t*         exp_license_state;               //{ +0x0388    +0x0388    +0x0388    } | .ExpLicenseState
        _m020 struct dbgk::silostate_t              dbgk_silo_state;                 //{ +0x03c8    +0x03c8    +0x03c8    } | .DbgkSiloState
        _m021 nt::unicode_view                      ps_protected_current_directory;  //{ +0x03e8    +0x03e8    +0x03e8    } | .PsProtectedCurrentDirectory
        _m022 nt::unicode_view                      ps_protected_environment;        //{ +0x03f8    +0x03f8    +0x03f8    } | .PsProtectedEnvironment
        _m023 nt::unicode_view                      nt_system_root;                  //{ +0x0420    +0x04f0    +0x0420    } | .NtSystemRoot
        _m024 void*                                 user_shared_section;             //{ +0x0460    +0x0530    +0x0460    } | .UserSharedSection
        _m025 uint8_t                               is_downlevel_container;          //{ +0x0488    +0x0558    +0x0488    } | .IsDownlevelContainer
                                                                                   
        // Windows 11                                                              
        //                                                                         
        _m026 struct nls::state_t*                  nls_state;                       //{ +0x0420    } | .NlsState
        _m027 struct rtl::nls_state_t               rtl_nls_state;                   //{ +0x0428    } | .RtlNlsState
        _m028 void*                                 img_file_exec_options;           //{ +0x04e0    } | .ImgFileExecOptions
        _m029 struct ex::timezone_state_t*          ex_time_zone_state;              //{ +0x04e8    } | .ExTimeZoneState
                                                                                   
        SDK_MAGIC_PROPERTIES( "_ESERVERSILO_GLOBALS.$", 0x490, true, 0x3b2a6911a32b2873 );                               
        SDK_DYNAMIC_SIZE( eserversilo_globals_t );                                 
    };                                                                             
};
#include "magic/eserversilo_globals_t.end.hpp"
