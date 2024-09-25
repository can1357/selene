#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filemuiinfo_t.start.hpp"
namespace win
{
    // [struct _FILEMUIINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filemuiinfo_t                                      
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint32_t                dw_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint32_t                dw_version;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwVersion
        _m02 uint32_t                dw_file_type;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFileType
        _m03 sdk::array<uint8_t, 16> p_checksum;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .pChecksum
        _m04 sdk::array<uint8_t, 16> p_service_checksum;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .pServiceChecksum
        _m05 uint32_t                dw_language_name_offset;   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwLanguageNameOffset
        _m06 uint32_t                dw_type_id_main_size;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwTypeIDMainSize
        _m07 uint32_t                dw_type_id_main_offset;    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .dwTypeIDMainOffset
        _m08 uint32_t                dw_type_name_main_offset;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwTypeNameMainOffset
        _m09 uint32_t                dw_type_idmui_size;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwTypeIDMUISize
        _m10 uint32_t                dw_type_idmui_offset;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwTypeIDMUIOffset
        _m11 uint32_t                dw_type_name_mui_offset;   //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .dwTypeNameMUIOffset
        _m12 sdk::array<uint8_t, 8>  ab_buffer;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .abBuffer
                                                              
        SDK_MAGIC_PROPERTIES( "_FILEMUIINFO.$", 0x50, true, 0xcf0340036721e7d );                         
        SDK_FIXED_SIZE( filemuiinfo_t, 0x50 );                         
    };                                                        
};
#include "magic/filemuiinfo_t.end.hpp"
SDK_VERIFY( struct win::filemuiinfo_t, 0x50 );
