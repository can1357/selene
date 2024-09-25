#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"

#include "magic/file_link_entry_full_id_information_t.start.hpp"
namespace win
{
    // [struct _FILE_LINK_ENTRY_FULL_ID_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_link_entry_full_id_information_t         
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                               
        _m00 uint32_t                  next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 struct win::file_id_128_t parent_file_id;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ParentFileId
        _m02 uint32_t                  file_name_length;   //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FileNameLength
        _m03 sdk::array<wchar_t, 1>    file_name;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FileName
                                                         
        SDK_NONVOL_PROPERTIES( "_FILE_LINK_ENTRY_FULL_ID_INFORMATION.$", 0x1c, true, 0x341bddc6edbf3ee5 );                  
        SDK_FIXED_SIZE( file_link_entry_full_id_information_t, 0x1c );                  
    };                                                   
};
#include "magic/file_link_entry_full_id_information_t.end.hpp"
SDK_VERIFY( struct win::file_link_entry_full_id_information_t, 0x1c );
