#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extended_thread_information64_t.start.hpp"
namespace wmi
{
    // [struct _WMI_EXTENDED_THREAD_INFORMATION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_thread_information64_t             
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint32_t               process_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t               thread_id;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThreadId
        _m02 uint64_t               stack_base64;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackBase64
        _m03 uint64_t               stack_limit64;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StackLimit64
        _m04 uint64_t               user_stack_base64;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .UserStackBase64
        _m05 uint64_t               user_stack_limit64;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UserStackLimit64
        _m06 uint64_t               start_addr64;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .StartAddr64
        _m07 uint64_t               affinity;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Affinity
        _m08 uint64_t               win32_start_addr64;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Win32StartAddr64
        _m09 uint64_t               teb_base64;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TebBase64
        _m10 uint32_t               sub_process_tag;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SubProcessTag
        _m11 int8_t                 base_priority;       //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .BasePriority
        _m12 uint8_t                page_priority;       //{ +0x0045    +0x0045    +0x0045    +0x0045    } | .PagePriority
        _m13 uint8_t                io_priority;         //{ +0x0046    +0x0046    +0x0046    +0x0046    } | .IoPriority
        _m14 uint8_t                flags;               //{ +0x0047    +0x0047    +0x0047    +0x0047    } | .Flags
                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m15 sdk::array<wchar_t, 1> thread_name;         //{ +0x0048    +0x0048    +0x0048    } | .ThreadName
                                                       
        SDK_MAGIC_PROPERTIES( "_WMI_EXTENDED_THREAD_INFORMATION64.$", 0x50, true, 0xcc6d5ac53f4b6fed );                   
        SDK_DYNAMIC_SIZE( extended_thread_information64_t );                   
    };                                                 
};
#include "magic/extended_thread_information64_t.end.hpp"
