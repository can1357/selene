#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/stor_initgloballogger_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_INITGLOBALLOGGER_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_initgloballogger_args_t            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                         
        _m00 const struct nt::guid_t* control_guid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlGuid
        _m01 void*                    logger;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Logger
        _m02 void*                    flags;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m03 void*                    level;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Level
                                                   
        SDK_MAGIC_PROPERTIES( "_STOR_INITGLOBALLOGGER_ARGS.$", 0x20, true, 0xad1d9f54cd1b244 );             
        SDK_FIXED_SIZE( stor_initgloballogger_args_t, 0x20 );             
    };                                             
};
#include "magic/stor_initgloballogger_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_initgloballogger_args_t, 0x20 );
