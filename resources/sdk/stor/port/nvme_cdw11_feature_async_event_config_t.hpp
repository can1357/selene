#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_async_event_config_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG]
    // => Windows 11
    //
    union nvme_cdw11_feature_async_event_config_t    
    {                                                
        // Windows 11                                
        //                                           
        _m00 uint8_t  critical_warnings;               //{ +0x0000@0  } | .CriticalWarnings
        _m01 uint1_t  ns_attribute_notices;            //{ +0x0000@8  } | .NsAttributeNotices
        _m02 uint1_t  fw_activation_notices;           //{ +0x0000@9  } | .FwActivationNotices
        _m03 uint1_t  telemetry_log_notices;           //{ +0x0000@10 } | .TelemetryLogNotices
        _m04 uint1_t  ana_change_notices;              //{ +0x0000@11 } | .ANAChangeNotices
        _m05 uint1_t  predictable_log_change_notices;  //{ +0x0000@12 } | .PredictableLogChangeNotices
        _m06 uint1_t  lba_status_notices;              //{ +0x0000@13 } | .LBAStatusNotices
        _m07 uint1_t  endurance_event_notices;         //{ +0x0000@14 } | .EnduranceEventNotices
        _m08 uint1_t  zone_descriptor_notices;         //{ +0x0000@27 } | .ZoneDescriptorNotices
        _m09 uint32_t as_ulong;                        //{ +0x0000    } | .AsUlong
                                                     
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.$", 0x0, false, 0x1905e26b319684f1 );                               
        SDK_FIXED_SIZE( nvme_cdw11_feature_async_event_config_t, 0x4 );                               
    };                                               
};
#include "magic/nvme_cdw11_feature_async_event_config_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_async_event_config_t, 0x4 );
