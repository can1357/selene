#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unload_event_trace32_t.start.hpp"
namespace rtl
{
    // [struct _RTL_UNLOAD_EVENT_TRACE32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unload_event_trace32_t                    
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 uint32_t                base_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint32_t                size_of_image;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfImage
        _m02 uint32_t                sequence;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Sequence
        _m03 uint32_t                time_date_stamp;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TimeDateStamp
        _m04 uint32_t                check_sum;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CheckSum
        _m05 sdk::array<wchar_t, 32> image_name;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ImageName
        _m06 sdk::array<uint32_t, 2> version;          //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .Version
                                                     
        SDK_MAGIC_PROPERTIES( "_RTL_UNLOAD_EVENT_TRACE32.$", 0x5c, true, 0x23b841c6992dd7cb );                
        SDK_FIXED_SIZE( unload_event_trace32_t, 0x5c );                
    };                                               
};
#include "magic/unload_event_trace32_t.end.hpp"
SDK_VERIFY( struct rtl::unload_event_trace32_t, 0x5c );
