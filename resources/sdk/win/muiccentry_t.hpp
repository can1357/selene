#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muiccentry_t.start.hpp"
namespace win
{
    struct muiccentry_t;

    // [struct _MUICCENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muiccentry_t                                                         
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                      
        _m00 uint32_t                                 l_culture_name_offset;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lCultureNameOffset
        _m01 uint32_t                                 ul_culture_id;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulCultureID
        _m02 uint32_t                                 ul_language_type;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulLanguageType
        _m03 struct win::muiccentry_t*                p_neutral_culture;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pNeutralCulture
        _m04 sdk::array<struct win::muiccentry_t*, 4> l_base_language_indices;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lBaseLanguageIndices
        _m05 sdk::array<int32_t, 4>                   l_parent_language_indices;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .lParentLanguageIndices
                                                                                
        SDK_MAGIC_PROPERTIES( "_MUICCENTRY.$", 0x48, true, 0x51d5841208a757c5 );                          
        SDK_FIXED_SIZE( muiccentry_t, 0x48 );                                   
    };                                                                          
};
#include "magic/muiccentry_t.end.hpp"
SDK_VERIFY( struct win::muiccentry_t, 0x48 );
