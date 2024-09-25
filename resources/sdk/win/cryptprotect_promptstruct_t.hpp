#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cryptprotect_promptstruct_t.start.hpp"
namespace win
{
    struct hwnd_t;

    // [struct _CRYPTPROTECT_PROMPTSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cryptprotect_promptstruct_t           
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                       
        _m00 uint32_t            cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t            dw_prompt_flags;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwPromptFlags
        _m02 struct win::hwnd_t* hwnd_app;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndApp
        _m03 const wchar_t*      sz_prompt;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .szPrompt
                                                 
        SDK_MAGIC_PROPERTIES( "_CRYPTPROTECT_PROMPTSTRUCT.$", 0x18, true, 0x12c98e3d1de94cd2 );                
        SDK_FIXED_SIZE( cryptprotect_promptstruct_t, 0x18 );                
    };                                           
};
#include "magic/cryptprotect_promptstruct_t.end.hpp"
SDK_VERIFY( struct win::cryptprotect_promptstruct_t, 0x18 );
