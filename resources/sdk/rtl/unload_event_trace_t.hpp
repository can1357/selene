#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unload_event_trace_t.start.hpp"
namespace rtl
{
    // [struct _RTL_UNLOAD_EVENT_TRACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct unload_event_trace_t                      
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 void*                   base_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint64_t                size_of_image;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SizeOfImage
        _m02 uint32_t                sequence;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Sequence
        _m03 uint32_t                time_date_stamp;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TimeDateStamp
        _m04 uint32_t                check_sum;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CheckSum
        _m05 sdk::array<wchar_t, 32> image_name;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ImageName
        _m06 sdk::array<uint32_t, 2> version;          //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .Version
                                                     
        SDK_NONVOL_PROPERTIES( "_RTL_UNLOAD_EVENT_TRACE.$", 0x68, true, 0x7d03a5467de3792d );                
        SDK_FIXED_SIZE( unload_event_trace_t, 0x68 );                
    };                                               
};
#include "magic/unload_event_trace_t.end.hpp"
SDK_VERIFY( struct rtl::unload_event_trace_t, 0x68 );
