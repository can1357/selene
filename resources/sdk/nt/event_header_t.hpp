#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "event_descriptor_t.hpp"

#include "magic/event_header_t.start.hpp"
namespace nt
{
    // [struct _EVENT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_header_t                                   
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 uint16_t                      size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                      header_type;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HeaderType
        _m02 uint16_t                      flags;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 uint16_t                      event_property;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .EventProperty
        _m04 uint32_t                      thread_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m05 uint32_t                      process_id;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ProcessId
        _m06 int64_t                       time_stamp;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m07 struct nt::guid_t             provider_id;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProviderId
        _m08 struct nt::event_descriptor_t event_descriptor;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EventDescriptor
        _m09 uint32_t                      kernel_time;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .KernelTime
        _m10 uint32_t                      user_time;         //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .UserTime
        _m11 uint64_t                      processor_time;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ProcessorTime
        _m12 struct nt::guid_t             activity_id;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ActivityId
                                                            
        SDK_MAGIC_PROPERTIES( "_EVENT_HEADER.$", 0x50, true, 0x3858ab6dcf6543f6 );                 
        SDK_FIXED_SIZE( event_header_t, 0x50 );                 
    };                                                      
};
#include "magic/event_header_t.end.hpp"
SDK_VERIFY( struct nt::event_header_t, 0x50 );
