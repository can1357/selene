#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pshed_plugin_callbacks_t.start.hpp"
namespace whea
{
    struct error_record_t;
    struct error_packet_v2_t;
    struct error_source_descriptor_t;
    union error_injection_capabilities_t;

    // [struct _WHEA_PSHED_PLUGIN_CALLBACKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_plugin_callbacks_t                                            
    {                                                                          
        using pshed_pi_get_all_error_sources_t =      sdk::function<int32_t(void*, uint32_t*, struct whea::error_source_descriptor_t**, uint32_t*)>*;                           
        using get_error_source_info_t =               sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*)>*;                           
        using set_error_source_info_t =               sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*)>*;                           
        using enable_error_source_t =                 sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*)>*;                           
        using disable_error_source_t =                sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*)>*;                           
        using pshed_pi_write_error_record_t =         sdk::function<int32_t(void*, uint32_t, uint32_t, struct whea::error_record_t*)>*;                           
        using pshed_pi_read_error_record_t =          sdk::function<int32_t(void*, uint32_t, uint64_t, uint64_t*, uint32_t*, struct whea::error_record_t*)>*;                           
        using pshed_pi_clear_error_record_t =         sdk::function<int32_t(void*, uint32_t, uint64_t)>*;                           
        using pshed_pi_retrieve_error_info_t =        sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*, uint64_t, struct whea::error_packet_v2_t*)>*;                           
        using finalize_error_record_t =               sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*, uint32_t, struct whea::error_record_t*)>*;                           
        using clear_error_status_t =                  sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*, uint32_t, struct whea::error_record_t*)>*;                           
        using pshed_pi_attempt_error_recovery_t =     sdk::function<int32_t(void*, uint32_t, struct whea::error_record_t*)>*;                           
        using pshed_pi_get_injection_capabilities_t = sdk::function<int32_t(void*, union whea::error_injection_capabilities_t*)>*;                           
        using pshed_pi_inject_error_t =               sdk::function<int32_t(void*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t)>*;                           
                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                     
        _m00 pshed_pi_get_all_error_sources_t       get_all_error_sources;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GetAllErrorSources
        _m01 get_error_source_info_t                get_error_source_info;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .GetErrorSourceInfo
        _m02 set_error_source_info_t                set_error_source_info;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SetErrorSourceInfo
        _m03 enable_error_source_t                  enable_error_source;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EnableErrorSource
        _m04 disable_error_source_t                 disable_error_source;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DisableErrorSource
        _m05 pshed_pi_write_error_record_t          write_error_record;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .WriteErrorRecord
        _m06 pshed_pi_read_error_record_t           read_error_record;           //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ReadErrorRecord
        _m07 pshed_pi_clear_error_record_t          clear_error_record;          //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ClearErrorRecord
        _m08 pshed_pi_retrieve_error_info_t         retrieve_error_info;         //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .RetrieveErrorInfo
        _m09 finalize_error_record_t                finalize_error_record;       //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .FinalizeErrorRecord
        _m10 clear_error_status_t                   clear_error_status;          //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .ClearErrorStatus
        _m11 pshed_pi_attempt_error_recovery_t      attempt_recovery;            //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .AttemptRecovery
        _m12 pshed_pi_get_injection_capabilities_t  get_injection_capabilities;  //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .GetInjectionCapabilities
        _m13 pshed_pi_inject_error_t                inject_error;                //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .InjectError
                                                                               
        SDK_NONVOL_PROPERTIES( "_WHEA_PSHED_PLUGIN_CALLBACKS.$", 0x78, true, 0x8ad2f3fb8c91e1c3 );                           
        SDK_FIXED_SIZE( pshed_plugin_callbacks_t, 0x78 );                           
    };                                                                         
};
#include "magic/pshed_plugin_callbacks_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_callbacks_t, 0x78 );
