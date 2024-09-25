#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trace_segment_t.start.hpp"
namespace rtl
{
    struct trace_segment_t;
    struct trace_database_t;

    // [struct _RTL_TRACE_SEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_segment_t                               
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                               
        _m00 uint32_t                      magic;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 struct rtl::trace_database_t* database;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Database
        _m02 struct rtl::trace_segment_t*  next_segment;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextSegment
        _m03 uint64_t                      total_size;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalSize
        _m04 char*                         segment_start;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SegmentStart
        _m05 char*                         segment_end;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SegmentEnd
        _m06 char*                         segment_free;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SegmentFree
                                                         
        SDK_MAGIC_PROPERTIES( "_RTL_TRACE_SEGMENT.$", 0x38, true, 0xe606fa3b5cb2ae19 );              
        SDK_FIXED_SIZE( trace_segment_t, 0x38 );              
    };                                                   
};
#include "magic/trace_segment_t.end.hpp"
SDK_VERIFY( struct rtl::trace_segment_t, 0x38 );
