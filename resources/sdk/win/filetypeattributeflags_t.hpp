#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum FILETYPEATTRIBUTEFLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class filetypeattributeflags_t : int32_t
    {                                            
        none =                     0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        exclude =                  0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        show =                     0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_extension =            0x4,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_edit =                  0x8,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_remove =                0x10,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_new_verb =              0x20,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_edit_verb =             0x40,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_remove_verb =           0x80,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_edit_desc =             0x100,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_edit_icon =             0x200,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_edit_dflt =             0x400,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_edit_verb_cmd =         0x800,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_edit_verb_exe =         0x1000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_dde =                   0x2000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_edit_mime =             0x8000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        open_is_safe =             0x10000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        always_unsafe =            0x20000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_recent_docs =           0x100000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        safe_for_elevation =       0x200000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        always_use_direct_invoke = 0x400000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
