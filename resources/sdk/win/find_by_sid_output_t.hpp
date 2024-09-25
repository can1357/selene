#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/find_by_sid_output_t.start.hpp"
namespace win
{
    // [struct FIND_BY_SID_OUTPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct find_by_sid_output_t                       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t               file_index;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FileIndex
        _m02 uint32_t               file_name_length;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileNameLength
        _m03 sdk::array<wchar_t, 1> file_name;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FileName
                                                      
        SDK_MAGIC_PROPERTIES( "FIND_BY_SID_OUTPUT.$", 0x10, true, 0x838b4646207e0003 );                  
        SDK_FIXED_SIZE( find_by_sid_output_t, 0x10 );                  
    };                                                
};
#include "magic/find_by_sid_output_t.end.hpp"
SDK_VERIFY( struct win::find_by_sid_output_t, 0x10 );
