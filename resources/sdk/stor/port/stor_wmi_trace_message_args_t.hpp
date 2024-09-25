#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/stor_wmi_trace_message_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_WMI_TRACE_MESSAGE_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_wmi_trace_message_args_t             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint64_t                 trace_handle;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceHandle
        _m01 uint32_t                 message_flags;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageFlags
        _m02 const struct nt::guid_t* message_guid;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MessageGuid
        _m03 uint16_t                 message_number;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MessageNumber
        _m04 char*                    args;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Args
        _m05 uint32_t                 result;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .result
                                                     
        SDK_MAGIC_PROPERTIES( "_STOR_WMI_TRACE_MESSAGE_ARGS.$", 0x30, true, 0xdcefea7f48661647 );               
        SDK_FIXED_SIZE( stor_wmi_trace_message_args_t, 0x30 );               
    };                                               
};
#include "magic/stor_wmi_trace_message_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_wmi_trace_message_args_t, 0x30 );
