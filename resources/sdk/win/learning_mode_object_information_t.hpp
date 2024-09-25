#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"
#include "learning_mode_log_level_t.hpp"

#include "magic/learning_mode_object_information_t.start.hpp"
namespace win
{
    // [struct _LEARNING_MODE_OBJECT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct learning_mode_object_information_t                     
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                        
        _m00 struct nt::single_list_entry_t      list_entry;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 enum win::learning_mode_log_level_t log_level;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LogLevel
        _m02 nt::unicode_view*                   object_type;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectType
        _m03 nt::unicode_view*                   object_name;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ObjectName
        _m04 void*                               root_directory;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RootDirectory
        _m05 nt::unicode_view                    full_object_name;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FullObjectName
                                                                  
        SDK_MAGIC_PROPERTIES( "_LEARNING_MODE_OBJECT_INFORMATION.$", 0x38, true, 0xf6c7ce2dd57caf62 );                 
        SDK_FIXED_SIZE( learning_mode_object_information_t, 0x38 );                 
    };                                                            
};
#include "magic/learning_mode_object_information_t.end.hpp"
SDK_VERIFY( struct win::learning_mode_object_information_t, 0x38 );
