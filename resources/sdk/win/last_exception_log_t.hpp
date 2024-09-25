#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/exception_record_t.hpp"
#include "../nt/exception_disposition_t.hpp"

#include "magic/last_exception_log_t.start.hpp"
namespace win
{
    // [struct _LAST_EXCEPTION_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct last_exception_log_t                                
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 struct nt::exception_record_t    exception_record;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionRecord
        _m01 nt::context                      context_record;    //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ContextRecord
        _m02 uint32_t                         control_pc;        //{ +0x0570    +0x0570    +0x0570    +0x0570    } | .ControlPc
        _m03 enum nt::exception_disposition_t disposition;       //{ +0x0574    +0x0574    +0x0574    +0x0574    } | .Disposition
        _m04 sdk::array<uint32_t, 5>          handler_data;      //{ +0x0578    +0x0578    +0x0578    +0x0578    } | .HandlerData
                                                               
        SDK_MAGIC_PROPERTIES( "_LAST_EXCEPTION_LOG.$", 0x590, true, 0x1cf4adfcba4f810e );                 
        SDK_FIXED_SIZE( last_exception_log_t, 0x590 );                 
    };                                                         
};
#include "magic/last_exception_log_t.end.hpp"
SDK_VERIFY( struct win::last_exception_log_t, 0x590 );
