#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exception_handling_result_t.start.hpp"
namespace win
{
    // [struct ExceptionHandlingResult]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct exception_handling_result_t  
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 bool     b_exception;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bException
        _m01 uint32_t dw_exception_code;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwExceptionCode
                                        
        SDK_MAGIC_PROPERTIES( "ExceptionHandlingResult.$", 0x8, true, 0x6284d71541eb5a87 );                  
        SDK_FIXED_SIZE( exception_handling_result_t, 0x8 );                  
    };                                  
};
#include "magic/exception_handling_result_t.end.hpp"
SDK_VERIFY( struct win::exception_handling_result_t, 0x8 );
