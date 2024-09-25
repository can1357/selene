#pragma once
#include <sdkgen/support_library.hpp>
#include "exception_log_type_t.hpp"
#include "../nt/exception_record_t.hpp"

#include "magic/exception_log_t.start.hpp"
namespace win
{
    // [struct _EXCEPTION_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct exception_log_t                                   
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 struct nt::exception_record_t  exception_record;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionRecord
        _m01 nt::context                    context_record;    //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ContextRecord
        _m02 enum win::exception_log_type_t type;              //{ +0x0570    +0x0570    +0x0570    +0x0570    } | .Type
        _m03 int32_t                        disposition;       //{ +0x0574    +0x0574    +0x0574    +0x0574    } | .Disposition
        _m04 uint64_t                       thread;            //{ +0x0578    +0x0578    +0x0578    +0x0578    } | .Thread
        _m05 uint64_t                       control_pc;        //{ +0x0580    +0x0580    +0x0580    +0x0580    } | .ControlPc
        _m06 void*                          handler;           //{ +0x0588    +0x0588    +0x0588    +0x0588    } | .Handler
                                                             
        SDK_MAGIC_PROPERTIES( "_EXCEPTION_LOG.$", 0x590, true, 0x47794e442ba06edb );                 
        SDK_FIXED_SIZE( exception_log_t, 0x590 );                 
    };                                                       
};
#include "magic/exception_log_t.end.hpp"
SDK_VERIFY( struct win::exception_log_t, 0x590 );
