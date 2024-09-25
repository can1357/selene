#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muilangcfglist_t.start.hpp"
namespace win
{
    struct muilangcfgnode_t;

    // [struct _MUILANGCFGLIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muilangcfglist_t                                  
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                   
        _m00 uint32_t                      total_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalSize
        _m01 uint16_t                      num_languages;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumLanguages
        _m02 uint16_t                      max_num_languages;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MaxNumLanguages
        _m03 struct win::muilangcfgnode_t* language_configs;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LanguageConfigs
                                                             
        SDK_MAGIC_PROPERTIES( "_MUILANGCFGLIST.$", 0x10, true, 0xf77844811d20a5d );                  
        SDK_FIXED_SIZE( muilangcfglist_t, 0x10 );                  
    };                                                       
};
#include "magic/muilangcfglist_t.end.hpp"
SDK_VERIFY( struct win::muilangcfglist_t, 0x10 );
