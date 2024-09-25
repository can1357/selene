#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_full_information_t.start.hpp"
namespace win
{
    // [struct _KEY_FULL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_full_information_t                      
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 int64_t                last_write_time;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LastWriteTime
        _m01 uint32_t               title_index;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TitleIndex
        _m02 uint32_t               class_offset;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ClassOffset
        _m03 uint32_t               class_length;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ClassLength
        _m04 uint32_t               sub_keys;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SubKeys
        _m05 uint32_t               max_name_len;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxNameLen
        _m06 uint32_t               max_class_len;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .MaxClassLen
        _m07 uint32_t               values;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Values
        _m08 uint32_t               max_value_name_len;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxValueNameLen
        _m09 uint32_t               max_value_data_len;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxValueDataLen
        _m10 sdk::array<wchar_t, 1> _class;              //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Class
                                                       
        SDK_NONVOL_PROPERTIES( "_KEY_FULL_INFORMATION.$", 0x30, true, 0x74ebb7f24e4294b4 );                   
        SDK_FIXED_SIZE( key_full_information_t, 0x30 );                   
    };                                                 
};
#include "magic/key_full_information_t.end.hpp"
SDK_VERIFY( struct win::key_full_information_t, 0x30 );
