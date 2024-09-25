#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muilanginfo_t.start.hpp"
namespace win
{
    // [struct _MUILANGINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muilanginfo_t                                
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint16_t               flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint16_t               lang_id;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LangId
        _m02 int16_t                lang_name_index;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LangNameIndex
        _m03 uint16_t               fallback_types;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FallbackTypes
        _m04 int16_t                neutral_lang_spec;    //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .NeutralLangSpec
        _m05 sdk::array<int16_t, 4> fallback_specs;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FallbackSpecs
        _m06 sdk::array<int16_t, 4> alternate_code_page;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AlternateCodePage
                                                        
        SDK_MAGIC_PROPERTIES( "_MUILANGINFO.$", 0x1c, true, 0xa0728a478d66874d );                    
        SDK_FIXED_SIZE( muilanginfo_t, 0x1c );                    
    };                                                  
};
#include "magic/muilanginfo_t.end.hpp"
SDK_VERIFY( struct win::muilanginfo_t, 0x1c );
