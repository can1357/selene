#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/move_file_record_data_t.start.hpp"
namespace win
{
    // [struct MOVE_FILE_RECORD_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct move_file_record_data_t      
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 void*   file_handle;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileHandle
        _m01 int64_t source_file_record;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceFileRecord
        _m02 int64_t target_file_record;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetFileRecord
                                        
        SDK_MAGIC_PROPERTIES( "MOVE_FILE_RECORD_DATA.$", 0x18, true, 0xa0728aacdf71036f );                   
        SDK_FIXED_SIZE( move_file_record_data_t, 0x18 );                   
    };                                  
};
#include "magic/move_file_record_data_t.end.hpp"
SDK_VERIFY( struct win::move_file_record_data_t, 0x18 );
