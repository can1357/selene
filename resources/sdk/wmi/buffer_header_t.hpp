#pragma once
#include <sdkgen/support_library.hpp>
#include "../etw/ref_clock_t.hpp"
#include "../etw/buffer_state_t.hpp"
#include "../etw/buffer_context_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/buffer_header_t.start.hpp"
namespace wmi
{
    struct buffer_header_t;

    // [struct _WMI_BUFFER_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct buffer_header_t                                  
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                  
        _m00 uint32_t                       buffer_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferSize
        _m01 uint32_t                       saved_offset;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SavedOffset
        _m02 volatile uint32_t              current_offset;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentOffset
        _m03 volatile int32_t               reference_count;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReferenceCount
        _m04 int64_t                        time_stamp;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m05 int64_t                        sequence_number;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SequenceNumber
        _m06 uint3_t                        clock_type;       //{ +0x0020@0  +0x0020@0  +0x0020@0  +0x0020@0  } | .ClockType
        _m07 uint61_t                       frequency;        //{ +0x0020@3  +0x0020@3  +0x0020@3  +0x0020@3  } | .Frequency
        _m08 struct nt::single_list_entry_t slist_entry;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SlistEntry
        _m09 struct wmi::buffer_header_t*   next_buffer;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NextBuffer
        _m10 struct etw::buffer_context_t   client_context;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ClientContext
        _m11 enum etw::buffer_state_t       state;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .State
        _m12 uint32_t                       offset;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Offset
        _m13 uint16_t                       buffer_flag;      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .BufferFlag
        _m14 uint16_t                       buffer_type;      //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .BufferType
        _m15 struct etw::ref_clock_t        reference_time;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReferenceTime
        _m16 nt::list_entry_t               global_entry;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .GlobalEntry
        _m17 void*                          pointer0;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Pointer0
        _m18 void*                          pointer1;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Pointer1
                                                            
        SDK_MAGIC_PROPERTIES( "_WMI_BUFFER_HEADER.$", 0x48, true, 0x665ddd71cf2abf5e );                
        SDK_FIXED_SIZE( buffer_header_t, 0x48 );                
    };                                                      
};
#include "magic/buffer_header_t.end.hpp"
SDK_VERIFY( struct wmi::buffer_header_t, 0x48 );
