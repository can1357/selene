#pragma once
#include <sdkgen/support_library.hpp>
#include "safe_open_prompt_experience_results_t.hpp"

#include "magic/safe_open_prompt_results_t.start.hpp"
namespace se
{
    // [struct _SE_SAFE_OPEN_PROMPT_RESULTS]
    // => Windows 11
    //
    struct safe_open_prompt_results_t                               
    {                                                               
        // Windows 11                                               
        //                                                          
        _m00 enum se::safe_open_prompt_experience_results_t results;  //{ +0x0000    } | .Results
        _m01 sdk::array<wchar_t, 260>                       path;     //{ +0x0004    } | .Path
                                                                    
        SDK_MAGIC_PROPERTIES( "_SE_SAFE_OPEN_PROMPT_RESULTS.$", 0x0, false, 0x1dda09e1121c328c );        
        SDK_FIXED_SIZE( safe_open_prompt_results_t, 0x20c );        
    };                                                              
};
#include "magic/safe_open_prompt_results_t.end.hpp"
SDK_VERIFY( struct se::safe_open_prompt_results_t, 0x20c );
