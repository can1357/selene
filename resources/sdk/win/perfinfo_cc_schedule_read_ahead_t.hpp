#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_schedule_read_ahead_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_SCHEDULE_READ_AHEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_schedule_read_ahead_t      
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint64_t work_item_key;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItemKey
        _m01 uint64_t file_object_key;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObjectKey
        _m02 uint64_t file_offset;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileOffset
        _m03 uint32_t length;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
        _m04 uint32_t read_ahead_unit;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ReadAheadUnit
        _m05 uint32_t read_ahead_length;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReadAheadLength
        _m06 uint64_t read_ahead_offset;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReadAheadOffset
        _m07 uint64_t read_ahead_beyond_last_byte;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ReadAheadBeyondLastByte
        _m08 uint8_t  read_pattern;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReadPattern
        _m09 uint32_t sequential_read_count;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SequentialReadCount
        _m10 uint32_t shared_cache_map_flags;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SharedCacheMapFlags
        _m11 uint1_t  read_ahead_settings_changed;  //{ +0x0044@0  +0x0044@0  +0x0044@0  +0x0044@0  } | .ReadAheadSettingsChanged
        _m12 uint1_t  read_ahead_active;            //{ +0x0044@1  +0x0044@1  +0x0044@1  +0x0044@1  } | .ReadAheadActive
                                                  
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_SCHEDULE_READ_AHEAD.$", 0x48, true, 0xe6c8b65695c0be10 );                            
        SDK_FIXED_SIZE( perfinfo_cc_schedule_read_ahead_t, 0x48 );                            
    };                                            
};
#include "magic/perfinfo_cc_schedule_read_ahead_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_schedule_read_ahead_t, 0x48 );
