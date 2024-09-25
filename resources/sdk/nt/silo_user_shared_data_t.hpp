#pragma once
#include <sdkgen/support_library.hpp>
#include "ksystem_time_t.hpp"
#include "../os/product_type_t.hpp"

#include "magic/silo_user_shared_data_t.start.hpp"
namespace nt
{
    // [struct _SILO_USER_SHARED_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct silo_user_shared_data_t                                           
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                   
        _m00 uint32_t                  service_session_id;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ServiceSessionId
        _m01 uint32_t                  active_console_id;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ActiveConsoleId
        _m02 int64_t                   console_session_foreground_process_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConsoleSessionForegroundProcessId
        _m03 enum os::product_type_t   nt_product_type;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NtProductType
        _m04 uint32_t                  suite_mask;                             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SuiteMask
        _m05 uint8_t                   is_multi_session_sku;                   //{ +0x0018    +0x001c    +0x001c    +0x001c    } | .IsMultiSessionSku
                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                   
        _m06 uint32_t                  shared_user_session_id;                 //{ +0x0018    +0x0018    +0x0018    } | .SharedUserSessionId
        _m07 sdk::array<wchar_t, 260>  nt_system_root;                         //{ +0x001e    +0x001e    +0x001e    } | .NtSystemRoot
        _m08 sdk::array<uint16_t, 16>  user_mode_global_logger;                //{ +0x0226    +0x0226    +0x0226    } | .UserModeGlobalLogger
                                                                             
        // Windows 11                                                        
        //                                                                   
        _m09 uint8_t                   is_state_separation_enabled;            //{ +0x001d    } | .IsStateSeparationEnabled
        _m10 uint32_t                  time_zone_id;                           //{ +0x0248    } | .TimeZoneId
        _m11 volatile int32_t          time_zone_bias_stamp;                   //{ +0x024c    } | .TimeZoneBiasStamp
        _m12 struct nt::ksystem_time_t time_zone_bias;                         //{ +0x0250    } | .TimeZoneBias
        _m13 int64_t                   time_zone_bias_effective_start;         //{ +0x0260    } | .TimeZoneBiasEffectiveStart
        _m14 int64_t                   time_zone_bias_effective_end;           //{ +0x0268    } | .TimeZoneBiasEffectiveEnd
                                                                             
        SDK_MAGIC_PROPERTIES( "_SILO_USER_SHARED_DATA.$", 0x248, true, 0x75759b8093cbe5a0 );                                      
        SDK_DYNAMIC_SIZE( silo_user_shared_data_t );                                      
    };                                                                       
};
#include "magic/silo_user_shared_data_t.end.hpp"
