#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eventlogrecord_t.start.hpp"
namespace win
{
    // [struct _EVENTLOGRECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eventlogrecord_t                 
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t length;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t record_number;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecordNumber
        _m02 uint32_t time_generated;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TimeGenerated
        _m03 uint32_t time_written;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeWritten
        _m04 uint32_t event_id;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .EventID
        _m05 uint16_t event_type;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EventType
        _m06 uint16_t num_strings;            //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .NumStrings
        _m07 uint16_t event_category;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .EventCategory
        _m08 uint32_t closing_record_number;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClosingRecordNumber
        _m09 uint32_t string_offset;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .StringOffset
        _m10 uint32_t user_sid_length;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .UserSidLength
        _m11 uint32_t user_sid_offset;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .UserSidOffset
        _m12 uint32_t data_length;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DataLength
        _m13 uint32_t data_offset;            //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .DataOffset
                                            
        SDK_MAGIC_PROPERTIES( "_EVENTLOGRECORD.$", 0x38, true, 0x5013ed1f9a5b5851 );                      
        SDK_FIXED_SIZE( eventlogrecord_t, 0x38 );                      
    };                                      
};
#include "magic/eventlogrecord_t.end.hpp"
SDK_VERIFY( struct win::eventlogrecord_t, 0x38 );
