#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rc_config_t.start.hpp"
namespace win
{
    // [struct _RC_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rc_config_t                                                     
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                 
        _m000 uint32_t                dw_signature;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSignature
        _m001 uint32_t                dw_length;                             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwLength
        _m002 uint32_t                dw_rc_config_version;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwRCConfigVersion
        _m003 uint32_t                dw_file_path_type;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFilePathType
        _m004 uint32_t                dw_file_type;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwFileType
        _m005 uint32_t                dw_system_attributes;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwSystemAttributes
        _m006 uint32_t                dw_ultimate_fallback_location;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwUltimateFallbackLocation
        _m007 sdk::array<uint32_t, 4> dw_service_check_sum;                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwServiceCheckSum
        _m008 sdk::array<uint32_t, 4> dw_checksum;                           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwChecksum
        _m009 uint32_t                dw_reserved1;                          //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwReserved1
        _m010 uint32_t                dw_reserved2;                          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwReserved2
        _m011 uint32_t                dw_mui_file_name_offset;               //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .dwMUIFileNameOffset
        _m012 uint32_t                dw_mui_file_name_length;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .dwMUIFileNameLength
        _m013 uint32_t                dw_mui_file_path_offset;               //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .dwMUIFilePathOffset
        _m014 uint32_t                dw_mui_file_path_length;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .dwMUIFilePathLength
        _m015 uint32_t                dw_main_res_name_types_offset;         //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .dwMainResNameTypesOffset
        _m016 uint32_t                dw_main_res_name_types_length;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .dwMainResNameTypesLength
        _m017 uint32_t                dw_main_res_id_types_offset;           //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .dwMainResIDTypesOffset
        _m018 uint32_t                dw_main_res_id_types_length;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .dwMainResIDTypesLength
        _m019 uint32_t                dw_mui_res_name_types_offset;          //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .dwMUIResNameTypesOffset
        _m020 uint32_t                dw_mui_res_name_types_length;          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .dwMUIResNameTypesLength
        _m021 uint32_t                dw_mui_res_id_types_offset;            //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .dwMUIResIDTypesOffset
        _m022 uint32_t                dw_mui_res_id_types_length;            //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .dwMUIResIDTypesLength
        _m023 uint32_t                dw_language_offset;                    //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .dwLanguageOffset
        _m024 uint32_t                dw_language_length;                    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .dwLanguageLength
        _m025 uint32_t                dw_ultimate_fallback_language_offset;  //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .dwUltimateFallbackLanguageOffset
        _m026 uint32_t                dw_ultimate_fallback_language_length;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .dwUltimateFallbackLanguageLength
                                                                           
        SDK_MAGIC_PROPERTIES( "_RC_CONFIG.$", 0x84, true, 0x1beae3ba79f359f9 );                                     
        SDK_FIXED_SIZE( rc_config_t, 0x84 );                                     
    };                                                                     
};
#include "magic/rc_config_t.end.hpp"
SDK_VERIFY( struct win::rc_config_t, 0x84 );
