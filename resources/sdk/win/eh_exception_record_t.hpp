#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct exception_record_t; }

#include "magic/eh_exception_record_t.start.hpp"
namespace win
{
    // [struct EHExceptionRecord]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eh_exception_record_t                              
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 uint32_t                       exception_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionCode
        _m01 uint32_t                       exception_flags;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ExceptionFlags
        _m02 struct nt::exception_record_t* exception_record;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExceptionRecord
        _m03 void*                          exception_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExceptionAddress
        _m04 uint32_t                       number_parameters;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberParameters
                                                              
        SDK_MAGIC_PROPERTIES( "EHExceptionRecord.$", 0x40, true, 0xfb17ee742ed2a34d );                  
        SDK_FIXED_SIZE( eh_exception_record_t, 0x40 );                  
    };                                                        
};
#include "magic/eh_exception_record_t.end.hpp"
SDK_VERIFY( struct win::eh_exception_record_t, 0x40 );
