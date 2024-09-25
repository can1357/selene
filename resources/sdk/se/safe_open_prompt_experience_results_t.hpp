#pragma once
#include <sdkgen/support_library.hpp>

namespace se
{
    // [enum _SE_SAFE_OPEN_PROMPT_EXPERIENCE_RESULTS]
    //  Windows 11
    //
    enum class safe_open_prompt_experience_results_t : int32_t
    {                                                         
        none =                       0x0,                       // Windows 11
        called =                     0x1,                       // Windows 11
        app_rep_called =             0x2,                       // Windows 11
        prompt_displayed =           0x4,                       // Windows 11
        uac =                        0x8,                       // Windows 11
        uninstaller =                0x10,                      // Windows 11
        ignore_unknown_or_bad =      0x20,                      // Windows 11
        defender_trusted_installer = 0x40,                      // Windows 11
        motw_present =               0x80,                      // Windows 11
    };                                                        
};
