#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muiregistryinfo_t.start.hpp"
namespace win
{
    struct muilanglist_t;
    struct muilanguages_t;
    struct muistringpool_t;
    struct muilangcfglist_t;
    struct muiregistryinfo_t;

    // [struct _MUIREGISTRYINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muiregistryinfo_t                                          
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                            
        _m00 uint32_t                       owned;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Owned
        _m01 sdk::array<uint16_t, 4>        install_language_fallback;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InstallLanguageFallback
        _m02 uint32_t                       generation;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Generation
        _m03 uint32_t                       process_generation;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessGeneration
        _m04 struct win::muilanguages_t*    installed;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Installed
        _m05 struct win::muistringpool_t*   strings;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Strings
        _m06 struct win::muilangcfglist_t*  machine_config;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MachineConfig
        _m07 struct win::muilangcfglist_t*  user_config;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .UserConfig
        _m08 struct win::muilanglist_t*     machine_preferred;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MachinePreferred
        _m09 struct win::muilanglist_t*     user_preferred;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .UserPreferred
        _m10 struct win::muilanglist_t*     process_preferred;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ProcessPreferred
        _m11 struct win::muilanglist_t*     merged_user;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MergedUser
        _m12 struct win::muilanglist_t*     merged_machine;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MergedMachine
        _m13 struct win::muilanglist_t*     merged_fallback;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MergedFallback
        _m14 struct win::muiregistryinfo_t* prev_reg_info;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PrevRegInfo
        _m15 uint32_t                       mui_locked;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .MUI_Locked
        _m16 uint32_t                       mui_se;                     //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .MUI_SE
        _m17 uint32_t                       mui_number_allowed;         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .MUI_NumberAllowed
        _m18 wchar_t*                       mui_allowed_language;       //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .MUI_AllowedLanguage
        _m19 wchar_t*                       mui_installed_sku;          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .MUI_InstalledSKU
        _m20 uint32_t                       cb_installed_sku;           //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .cbInstalledSKU
        _m21 uint32_t                       cb_allowed_language;        //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .cbAllowedLanguage
        _m22 wchar_t*                       mui_disallowed_language;    //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .MUI_DisallowedLanguage
        _m23 uint32_t                       cb_disallowed_language;     //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .cbDisallowedLanguage
                                                                      
        SDK_MAGIC_PROPERTIES( "_MUIREGISTRYINFO.$", 0xa8, true, 0x9665ae60030942e1 );                          
        SDK_FIXED_SIZE( muiregistryinfo_t, 0xa8 );                          
    };                                                                
};
#include "magic/muiregistryinfo_t.end.hpp"
SDK_VERIFY( struct win::muiregistryinfo_t, 0xa8 );
