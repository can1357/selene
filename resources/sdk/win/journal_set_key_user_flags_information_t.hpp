#pragma once
#include <sdkgen/support_library.hpp>
#include "journal_change_information_class_t.hpp"

#include "magic/journal_set_key_user_flags_information_t.start.hpp"
namespace win
{
    // [struct _JOURNAL_SET_KEY_USER_FLAGS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct journal_set_key_user_flags_information_t                     
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                              
        _m00 enum win::journal_change_information_class_t action;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 uint64_t                                     record_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecordNumber
        _m02 int64_t                                      time_stamp;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m03 nt::unicode_view                             key_path_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyPathName
        _m04 uint32_t                                     old_flags;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OldFlags
        _m05 uint32_t                                     new_flags;      //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .NewFlags
                                                                        
        SDK_MAGIC_PROPERTIES( "_JOURNAL_SET_KEY_USER_FLAGS_INFORMATION.$", 0x30, true, 0x8122904ec32d32ad );              
        SDK_FIXED_SIZE( journal_set_key_user_flags_information_t, 0x30 );              
    };                                                                  
};
#include "magic/journal_set_key_user_flags_information_t.end.hpp"
SDK_VERIFY( struct win::journal_set_key_user_flags_information_t, 0x30 );
