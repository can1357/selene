#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reported_exceptions_t.start.hpp"
namespace win
{
    // [struct ReportedExceptions]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reported_exceptions_t        
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t dw_exception_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwExceptionCode
        _m01 uint32_t dw_report_count;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwReportCount
        _m02 uint32_t dw_max_count;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwMaxCount
                                        
        SDK_MAGIC_PROPERTIES( "ReportedExceptions.$", 0xc, true, 0xc806a102a5215d23 );                  
        SDK_FIXED_SIZE( reported_exceptions_t, 0xc );                  
    };                                  
};
#include "magic/reported_exceptions_t.end.hpp"
SDK_VERIFY( struct win::reported_exceptions_t, 0xc );
