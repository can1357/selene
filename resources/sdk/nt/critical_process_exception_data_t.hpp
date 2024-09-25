#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/critical_process_exception_data_t.start.hpp"
namespace nt
{
    // [struct _CRITICAL_PROCESS_EXCEPTION_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct critical_process_exception_data_t    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m00 struct nt::guid_t report_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReportId
        _m01 nt::unicode_view  module_name;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ModuleName
        _m02 uint32_t          module_timestamp;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ModuleTimestamp
        _m03 uint32_t          module_size;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ModuleSize
        _m04 uint64_t          offset;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Offset
                                                
        SDK_MAGIC_PROPERTIES( "_CRITICAL_PROCESS_EXCEPTION_DATA.$", 0x30, true, 0x3b1114b921f05f7d );                 
        SDK_FIXED_SIZE( critical_process_exception_data_t, 0x30 );                 
    };                                          
};
#include "magic/critical_process_exception_data_t.end.hpp"
SDK_VERIFY( struct nt::critical_process_exception_data_t, 0x30 );
