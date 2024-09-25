#pragma once
#include <sdkgen/support_library.hpp>
#include "journal_change_information_class_t.hpp"

#include "magic/journal_set_key_last_write_time_information_t.start.hpp"
namespace win
{
    // [struct _JOURNAL_SET_KEY_LAST_WRITE_TIME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct journal_set_key_last_write_time_information_t                      
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                    
        _m00 enum win::journal_change_information_class_t action;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 uint64_t                                     record_number;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecordNumber
        _m02 int64_t                                      time_stamp;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m03 nt::unicode_view                             key_path_name;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyPathName
        _m04 int64_t                                      old_last_write_time;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OldLastWriteTime
        _m05 int64_t                                      new_last_write_time;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NewLastWriteTime
                                                                              
        SDK_MAGIC_PROPERTIES( "_JOURNAL_SET_KEY_LAST_WRITE_TIME_INFORMATION.$", 0x38, true, 0xe8ef14c8ae7b1ca );                    
        SDK_FIXED_SIZE( journal_set_key_last_write_time_information_t, 0x38 );                    
    };                                                                        
};
#include "magic/journal_set_key_last_write_time_information_t.end.hpp"
SDK_VERIFY( struct win::journal_set_key_last_write_time_information_t, 0x38 );
