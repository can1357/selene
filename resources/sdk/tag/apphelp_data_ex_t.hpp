#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/apphelp_data_ex_t.start.hpp"
namespace tag
{
    // [struct tagAPPHELP_DATA_EX]
    // => Windows 11
    //
    struct apphelp_data_ex_t                     
    {                                            
        // Windows 11                            
        //                                       
        _m00 struct nt::guid_t guid_dbid;          //{ +0x0000    } | .guidDBID
        _m01 struct nt::guid_t guid_exe_id;        //{ +0x0010    } | .guidExeID
        _m02 struct nt::guid_t guid_app_id;        //{ +0x0020    } | .guidAppID
        _m03 uint32_t          ti_exe;             //{ +0x0030    } | .tiExe
        _m04 uint32_t          dw_flags;           //{ +0x0034    } | .dwFlags
        _m05 uint32_t          dw_severity;        //{ +0x0038    } | .dwSeverity
        _m06 uint32_t          dw_html_help_id;    //{ +0x003c    } | .dwHTMLHelpID
        _m07 const wchar_t*    sz_app_name;        //{ +0x0040    } | .szAppName
        _m08 const wchar_t*    sz_vendor_name;     //{ +0x0048    } | .szVendorName
        _m09 const wchar_t*    sz_summary_msg;     //{ +0x0050    } | .szSummaryMsg
        _m10 const wchar_t*    sz_full_path;       //{ +0x0058    } | .szFullPath
        _m11 const wchar_t*    sz_link;            //{ +0x0060    } | .szLink
        _m12 const wchar_t*    sz_url;             //{ +0x0068    } | .szURL
        _m13 uint32_t          dw_fw_link_number;  //{ +0x0070    } | .dwFWLinkNumber
        _m14 uint32_t          dw_kb_number;       //{ +0x0074    } | .dwKBNumber
        _m15 const wchar_t*    sz_app_store_id;    //{ +0x0078    } | .szAppStoreId
        _m16 uint32_t          dw_database_type;   //{ +0x0080    } | .dwDatabaseType
                                                 
        SDK_MAGIC_PROPERTIES( "tagAPPHELP_DATA_EX.$", 0x0, false, 0x5152d8dd900b3fb7 );                  
        SDK_FIXED_SIZE( apphelp_data_ex_t, 0x88 );                  
    };                                           
};
#include "magic/apphelp_data_ex_t.end.hpp"
SDK_VERIFY( struct tag::apphelp_data_ex_t, 0x88 );
