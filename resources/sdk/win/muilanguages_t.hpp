#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muilanguages_t.start.hpp"
namespace win
{
    struct muilanginfo_t;

    // [struct _MUILANGUAGES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muilanguages_t                                       
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                      
        _m00 uint32_t                   total_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalSize
        _m01 uint16_t                   max_num_languages;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxNumLanguages
        _m02 uint16_t                   num_languages;            //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NumLanguages
        _m03 uint16_t                   num_installed_languages;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumInstalledLanguages
        _m04 struct win::muilanginfo_t* lang_infos;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LangInfos
                                                                
        SDK_MAGIC_PROPERTIES( "_MUILANGUAGES.$", 0x18, true, 0x5586769b27da51 );                        
        SDK_FIXED_SIZE( muilanguages_t, 0x18 );                        
    };                                                          
};
#include "magic/muilanguages_t.end.hpp"
SDK_VERIFY( struct win::muilanguages_t, 0x18 );
