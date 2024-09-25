#pragma once
#include <sdkgen/support_library.hpp>
#include "journal_change_information_class_t.hpp"

#include "magic/journal_set_delete_value_information_t.start.hpp"
namespace win
{
    // [struct _JOURNAL_SET_DELETE_VALUE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct journal_set_delete_value_information_t                         
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                
        _m00 enum win::journal_change_information_class_t action;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 uint64_t                                     record_number;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecordNumber
        _m02 int64_t                                      time_stamp;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m03 nt::unicode_view                             key_path_name;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyPathName
        _m04 nt::unicode_view                             value_name;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ValueName
        _m05 uint32_t                                     old_value_type;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OldValueType
        _m06 uint32_t                                     old_data_length;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .OldDataLength
        _m07 void*                                        old_data;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .OldData
        _m08 uint32_t                                     new_value_type;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NewValueType
        _m09 uint32_t                                     new_data_length;  //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .NewDataLength
        _m10 void*                                        new_data;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NewData
                                                                          
        SDK_MAGIC_PROPERTIES( "_JOURNAL_SET_DELETE_VALUE_INFORMATION.$", 0x58, true, 0x80ffef9c83d0a5e7 );                
        SDK_FIXED_SIZE( journal_set_delete_value_information_t, 0x58 );                
    };                                                                    
};
#include "magic/journal_set_delete_value_information_t.end.hpp"
SDK_VERIFY( struct win::journal_set_delete_value_information_t, 0x58 );
