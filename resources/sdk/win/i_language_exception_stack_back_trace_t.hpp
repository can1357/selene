#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ILanguageExceptionStackBackTrace]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_language_exception_stack_back_trace_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "ILanguageExceptionStackBackTrace.$", 0x8, true, 0xee5b83e1fc266187 );
        SDK_FIXED_SIZE( i_language_exception_stack_back_trace_t, 0x8 );
    };                                            
};
SDK_VERIFY( struct win::i_language_exception_stack_back_trace_t, 0x8 );
