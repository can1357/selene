#pragma once
#include <sdkgen/support_library.hpp>
#include "critical_section_t.hpp"

#include "magic/trace_database_t.start.hpp"
namespace rtl
{
    struct trace_block_t;
    struct trace_segment_t;

    // [struct _RTL_TRACE_DATABASE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_database_t                                           
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                            
        _m00 uint32_t                                   magic;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 uint32_t                                   flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                   tag;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
        _m03 struct rtl::trace_segment_t*               segment_list;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SegmentList
        _m04 uint64_t                                   maximum_size;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaximumSize
        _m05 uint64_t                                   current_size;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CurrentSize
        _m06 void*                                      owner;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Owner
        _m07 struct rtl::critical_section_t             lock;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Lock
        _m08 uint32_t                                   no_of_buckets;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NoOfBuckets
        _m09 struct rtl::trace_block_t**                buckets;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Buckets
        _m10 sdk::function<uint32_t(uint32_t, void**)>* hash_function;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .HashFunction
        _m11 uint64_t                                   no_of_traces;   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .NoOfTraces
        _m12 uint64_t                                   no_of_hits;     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .NoOfHits
        _m13 sdk::array<uint32_t, 16>                   hash_counter;   //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .HashCounter
                                                                      
        SDK_MAGIC_PROPERTIES( "_RTL_TRACE_DATABASE.$", 0xc0, true, 0xef44b971c227221d );              
        SDK_FIXED_SIZE( trace_database_t, 0xc0 );                     
    };                                                                
};
#include "magic/trace_database_t.end.hpp"
SDK_VERIFY( struct rtl::trace_database_t, 0xc0 );
