#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_names_information_t.start.hpp"
namespace fltmgr
{
    // [struct _FILE_NAMES_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_names_information_t                   
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t               file_index;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .FileIndex
        _m02 uint32_t               file_name_length;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileNameLength
        _m03 sdk::array<wchar_t, 1> file_name;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FileName
                                                      
        SDK_NONVOL_PROPERTIES( "_FILE_NAMES_INFORMATION.$", 0x10, true, 0xba9f1bd10a462e8b );                  
        SDK_FIXED_SIZE( file_names_information_t, 0x10 );                  
    };                                                
};
#include "magic/file_names_information_t.end.hpp"
SDK_VERIFY( struct fltmgr::file_names_information_t, 0x10 );
