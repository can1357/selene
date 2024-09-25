#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_layout_name_entry_t.start.hpp"
namespace win
{
    // [struct _FILE_LAYOUT_NAME_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_layout_name_entry_t                              
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                       
        _m00 uint32_t               next_name_offset;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextNameOffset
        _m01 uint32_t               flags;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint64_t               parent_file_reference_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ParentFileReferenceNumber
        _m03 uint32_t               file_name_length;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileNameLength
        _m04 sdk::array<wchar_t, 1> file_name;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FileName
                                                                 
        SDK_NONVOL_PROPERTIES( "_FILE_LAYOUT_NAME_ENTRY.$", 0x20, true, 0x941055caa4543448 );                             
        SDK_FIXED_SIZE( file_layout_name_entry_t, 0x20 );                             
    };                                                           
};
#include "magic/file_layout_name_entry_t.end.hpp"
SDK_VERIFY( struct win::file_layout_name_entry_t, 0x20 );
