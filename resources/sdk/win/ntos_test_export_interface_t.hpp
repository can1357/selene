#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct object_attributes_t; }

#include "magic/ntos_test_export_interface_t.start.hpp"
namespace win
{
    struct svc_sk_call_parameters_t;
    struct dpc_test_watchdog_configuration_t;

    // [struct _NTOS_TEST_EXPORT_INTERFACE]
    // => Windows 11
    //
    struct ntos_test_export_interface_t                                                         
    {                                                                                           
        using pcm_save_key_to_buffer_t =                 sdk::function<int32_t(void*, void*, uint32_t*, uint32_t)>*;                                         
        using pcm_open_key_for_bug_check_recovery_t =    sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*;                                         
        using pps_allocate_test_tls_slot_t =             sdk::function<int32_t(sdk::function<void(void*)>*, uint32_t, uint32_t*)>*;                                         
        using pdpc_test_query_watchdog_configuration_t = sdk::function<int32_t(struct win::dpc_test_watchdog_configuration_t*, uint32_t)>*;                                         
        using psvc_test_call_sk_svc_t =                  sdk::function<int32_t(struct win::svc_sk_call_parameters_t*)>*;                                         
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m00 sdk::function<uint8_t()>*                 ex_is_test_export_extension_registered;    //{ +0x0000    } | .ExIsTestExportExtensionRegistered
        _m01 pcm_save_key_to_buffer_t                  cm_save_key_to_buffer;                     //{ +0x0008    } | .CmSaveKeyToBuffer
        _m02 pcm_open_key_for_bug_check_recovery_t     cm_open_key_for_bug_check_recovery;        //{ +0x0010    } | .CmOpenKeyForBugCheckRecovery
        _m03 pps_allocate_test_tls_slot_t              ps_tls_test_alloc;                         //{ +0x0018    } | .PsTlsTestAlloc
        _m04 pdpc_test_query_watchdog_configuration_t  ke_dpc_test_query_watchdog_configuration;  //{ +0x0020    } | .KeDpcTestQueryWatchdogConfiguration
        _m05 psvc_test_call_sk_svc_t                   call_sk_svc;                               //{ +0x0028    } | .CallSkSvc
                                                                                                
        SDK_MAGIC_PROPERTIES( "_NTOS_TEST_EXPORT_INTERFACE.$", 0x0, false, 0xf352a3a6c96d6280 );                                         
        SDK_FIXED_SIZE( ntos_test_export_interface_t, 0x30 );                                         
    };                                                                                          
};
#include "magic/ntos_test_export_interface_t.end.hpp"
SDK_VERIFY( struct win::ntos_test_export_interface_t, 0x30 );
