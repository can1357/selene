#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_cached_information_t.start.hpp"
namespace win
{
    // [struct _KEY_CACHED_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_cached_information_t      
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 int64_t  last_write_time;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LastWriteTime
        _m01 uint32_t title_index;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TitleIndex
        _m02 uint32_t sub_keys;            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SubKeys
        _m03 uint32_t max_name_len;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxNameLen
        _m04 uint32_t values;              //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Values
        _m05 uint32_t max_value_name_len;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxValueNameLen
        _m06 uint32_t max_value_data_len;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .MaxValueDataLen
        _m07 uint32_t name_length;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NameLength
                                         
        SDK_NONVOL_PROPERTIES( "_KEY_CACHED_INFORMATION.$", 0x28, true, 0xa4b79d056f5c9dc7 );                   
        SDK_FIXED_SIZE( key_cached_information_t, 0x28 );                   
    };                                   
};
#include "magic/key_cached_information_t.end.hpp"
SDK_VERIFY( struct win::key_cached_information_t, 0x28 );
