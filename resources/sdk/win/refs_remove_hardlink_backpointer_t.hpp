#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refs_remove_hardlink_backpointer_t.start.hpp"
namespace win
{
    // [struct _REFS_REMOVE_HARDLINK_BACKPOINTER]
    // => Windows 11
    //
    struct refs_remove_hardlink_backpointer_t        
    {                                                
        // Windows 11                                
        //                                           
        _m00 uint64_t               parent_directory;  //{ +0x0000    } | .ParentDirectory
        _m01 sdk::array<wchar_t, 1> file_name;         //{ +0x0010    } | .FileName
                                                     
        SDK_MAGIC_PROPERTIES( "_REFS_REMOVE_HARDLINK_BACKPOINTER.$", 0x0, false, 0x4c13f55a78fd70c3 );                 
        SDK_FIXED_SIZE( refs_remove_hardlink_backpointer_t, 0x18 );                 
    };                                               
};
#include "magic/refs_remove_hardlink_backpointer_t.end.hpp"
SDK_VERIFY( struct win::refs_remove_hardlink_backpointer_t, 0x18 );
