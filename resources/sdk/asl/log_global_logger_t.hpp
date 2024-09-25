#pragma once
#include <sdkgen/support_library.hpp>
#include "log_t.hpp"
#include "log_level_t.hpp"
#include "telemetry_t.hpp"

#include "magic/log_global_logger_t.start.hpp"
namespace asl
{
    // [class AslLogGlobalLogger]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class log_global_logger_t                        
    {                                                
        using asl_log_pfn_vprintf_t = sdk::function<void(enum asl::log_level_t, const char*, uint64_t, const char*, char*)>*;                 
                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 class asl::log_t       log;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Log
        _m01 class asl::telemetry_t telemetry;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Telemetry
        _m02 asl_log_pfn_vprintf_t  pfn_log_listener;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PfnLogListener
                                                     
        SDK_MAGIC_PROPERTIES( "AslLogGlobalLogger.$", 0x18, true, 0x3ad736989dca4e11 );                 
        SDK_FIXED_SIZE( log_global_logger_t, 0x18 );                 
    };                                               
};
#include "magic/log_global_logger_t.end.hpp"
SDK_VERIFY( class asl::log_global_logger_t, 0x18 );
