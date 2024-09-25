#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extended_thread_information_t.start.hpp"
namespace wmi
{
    // [struct _WMI_EXTENDED_THREAD_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_thread_information_t             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint32_t               process_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t               thread_id;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThreadId
        _m02 void*                  stack_base;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackBase
        _m03 void*                  stack_limit;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StackLimit
        _m04 void*                  user_stack_base;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .UserStackBase
        _m05 void*                  user_stack_limit;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UserStackLimit
        _m06 void*                  start_addr;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .StartAddr
        _m07 uint64_t               affinity;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Affinity
        _m08 void*                  win32_start_addr;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Win32StartAddr
        _m09 void*                  teb_base;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TebBase
        _m10 uint32_t               sub_process_tag;   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SubProcessTag
        _m11 int8_t                 base_priority;     //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .BasePriority
        _m12 uint8_t                page_priority;     //{ +0x0045    +0x0045    +0x0045    +0x0045    } | .PagePriority
        _m13 uint8_t                io_priority;       //{ +0x0046    +0x0046    +0x0046    +0x0046    } | .IoPriority
        _m14 uint8_t                flags;             //{ +0x0047    +0x0047    +0x0047    +0x0047    } | .Flags
                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m15 sdk::array<wchar_t, 1> thread_name;       //{ +0x0048    +0x0048    +0x0048    } | .ThreadName
                                                     
        SDK_MAGIC_PROPERTIES( "_WMI_EXTENDED_THREAD_INFORMATION.$", 0x50, true, 0x8f02e14c81c3caea );                 
        SDK_DYNAMIC_SIZE( extended_thread_information_t );                 
    };                                               
};
#include "magic/extended_thread_information_t.end.hpp"
