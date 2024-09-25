#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/systemtime_t.hpp"

#include "magic/hit_logging_info_t.start.hpp"
namespace tag
{
    // [struct _tagHIT_LOGGING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hit_logging_info_t                              
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 uint32_t                 dw_struct_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStructSize
        _m01 char*                    lpsz_logged_url_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszLoggedUrlName
        _m02 struct win::systemtime_t start_time;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StartTime
        _m03 struct win::systemtime_t end_time;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EndTime
        _m04 char*                    lpsz_extended_info;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .lpszExtendedInfo
                                                           
        SDK_MAGIC_PROPERTIES( "_tagHIT_LOGGING_INFO.$", 0x38, true, 0x44b92a80bb658260 );                     
        SDK_FIXED_SIZE( hit_logging_info_t, 0x38 );                     
    };                                                     
};
#include "magic/hit_logging_info_t.end.hpp"
SDK_VERIFY( struct tag::hit_logging_info_t, 0x38 );
