#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/info_t.start.hpp"
namespace apphelp
{
    // [struct _APPHELP_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct info_t                                
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 uint32_t          dw_html_help_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwHtmlHelpID
        _m01 uint32_t          dw_severity;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSeverity
        _m02 const wchar_t*    lpsz_app_name;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszAppName
        _m03 struct nt::guid_t guid_id;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .guidID
        _m04 uint32_t          ti_exe;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .tiExe
        _m05 struct nt::guid_t guid_db;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .guidDB
        _m06 int32_t           b_offline_content;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .bOfflineContent
        _m07 int32_t           b_use_html_help;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .bUseHTMLHelp
        _m08 const wchar_t*    lpsz_chm_file;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .lpszChmFile
        _m09 const wchar_t*    lpsz_details_file;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .lpszDetailsFile
        _m10 int32_t           b_preserve_choice;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .bPreserveChoice
        _m11 int32_t           b_msi;              //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .bMSI
                                                 
        SDK_MAGIC_PROPERTIES( "_APPHELP_INFO.$", 0x58, true, 0xef4915812d58326b );                  
        SDK_FIXED_SIZE( info_t, 0x58 );                  
    };                                           
};
#include "magic/info_t.end.hpp"
SDK_VERIFY( struct apphelp::info_t, 0x58 );
