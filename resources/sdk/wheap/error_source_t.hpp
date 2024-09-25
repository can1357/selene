#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/error_source_type_t.hpp"
#include "../whea/error_source_descriptor_t.hpp"

#include "magic/error_source_t.start.hpp"
namespace wheap
{
    struct error_record_wrapper_t;

    // [struct _WHEAP_ERROR_SOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_source_t                                                    
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                   
        _m00 nt::list_entry_t                       list_entry;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint32_t                               failed_allocations;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FailedAllocations
        _m02 uint32_t                               platform_error_source_id;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PlatformErrorSourceId
        _m03 int32_t                                error_count;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ErrorCount
        _m04 uint32_t                               record_count;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RecordCount
        _m05 uint32_t                               record_length;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RecordLength
        _m06 uint32_t                               pool_tag;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PoolTag
        _m07 enum whea::error_source_type_t         type;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Type
        _m08 struct wheap::error_record_wrapper_t*  records;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Records
        _m09 void*                                  context;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Context
        _m10 uint32_t                               section_count;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SectionCount
        _m11 uint32_t                               section_length;            //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .SectionLength
        _m12 int64_t                                tick_count_at_last_error;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TickCountAtLastError
        _m13 uint32_t                               accumulated_errors;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AccumulatedErrors
        _m14 uint32_t                               total_errors;              //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .TotalErrors
        _m15 uint8_t                                deferred;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Deferred
        _m16 struct whea::error_source_descriptor_t descriptor;                //{ +0x0059    +0x0060    +0x0060    +0x0060    } | .Descriptor
                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                   
        _m17 volatile int32_t                       busy;                      //{ +0x005c    +0x005c    +0x005c    } | .Busy
                                                                             
        SDK_MAGIC_PROPERTIES( "_WHEAP_ERROR_SOURCE.$", 0x430, true, 0x1dc3cf9b5b8030a8 );                         
        SDK_DYNAMIC_SIZE( error_source_t );                                  
    };                                                                       
};
#include "magic/error_source_t.end.hpp"
