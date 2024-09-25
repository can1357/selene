#pragma once
#include <sdkgen/support_library.hpp>
#include "stowed_exception_information_header_t.hpp"

#include "magic/stowed_exception_information_v1_t.start.hpp"
namespace win
{
    // [struct _STOWED_EXCEPTION_INFORMATION_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stowed_exception_information_v1_t                              
    {                                                                     
        using stowed_exception_information_header_t = struct win::stowed_exception_information_header_t;                      
                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                
        _m00 stowed_exception_information_header_t  header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::hresult                           result_code;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResultCode
        _m02 uint2_t                                exception_form;         //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .ExceptionForm
        _m03 uint30_t                               thread_id;              //{ +0x000c@2  +0x000c@2  +0x000c@2  +0x000c@2  } | .ThreadId
        _m04 void*                                  exception_address;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExceptionAddress
        _m05 uint32_t                               stack_trace_word_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StackTraceWordSize
        _m06 uint32_t                               stack_trace_words;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .StackTraceWords
        _m07 void*                                  stack_trace;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StackTrace
        _m08 wchar_t*                               error_text;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorText
                                                                          
        SDK_MAGIC_PROPERTIES( "_STOWED_EXCEPTION_INFORMATION_V1.$", 0x28, true, 0x5c0f8af6d234c8a3 );                      
        SDK_FIXED_SIZE( stowed_exception_information_v1_t, 0x28 );                      
    };                                                                    
};
#include "magic/stowed_exception_information_v1_t.end.hpp"
SDK_VERIFY( struct win::stowed_exception_information_v1_t, 0x28 );
