#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/apphelp_data_t.start.hpp"
namespace tag
{
    // [struct tagAPPHELP_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct apphelp_data_t             
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t dw_flags;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t dw_severity;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSeverity
        _m02 uint32_t dw_html_help_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwHTMLHelpID
        _m03 wchar_t* sz_app_name;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .szAppName
        _m04 uint32_t tr_exe;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .trExe
        _m05 wchar_t* sz_url;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .szURL
        _m06 wchar_t* sz_link;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .szLink
        _m07 wchar_t* sz_app_title;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .szAppTitle
        _m08 wchar_t* sz_contact;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .szContact
        _m09 wchar_t* sz_details;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .szDetails
        _m10 uint32_t dw_data;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .dwData
        _m11 int32_t  b_unused;         //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .bUnused
                                      
        SDK_MAGIC_PROPERTIES( "tagAPPHELP_DATA.$", 0x50, true, 0x6955ce536ee382cd );                
        SDK_FIXED_SIZE( apphelp_data_t, 0x50 );                
    };                                
};
#include "magic/apphelp_data_t.end.hpp"
SDK_VERIFY( struct tag::apphelp_data_t, 0x50 );
