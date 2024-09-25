#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct dynamic_function_table_t; }

#include "magic/process_dynamic_function_table_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_DYNAMIC_FUNCTION_TABLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_dynamic_function_table_information_t                  
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                               
        _m00 struct nt::dynamic_function_table_t* dynamic_function_table;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DynamicFunctionTable
        _m01 uint8_t                              remove;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Remove
                                                                         
        SDK_MAGIC_PROPERTIES( "_PROCESS_DYNAMIC_FUNCTION_TABLE_INFORMATION.$", 0x10, true, 0xf4da15c08f02eeb4 );                       
        SDK_FIXED_SIZE( process_dynamic_function_table_information_t, 0x10 );                       
    };                                                                   
};
#include "magic/process_dynamic_function_table_information_t.end.hpp"
SDK_VERIFY( struct win::process_dynamic_function_table_information_t, 0x10 );
