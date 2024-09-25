#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_query_index_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_QUERY_INDEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_query_index_t     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t ul_assembly_index;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulAssemblyIndex
        _m01 uint32_t ul_file_index_in_assembly;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulFileIndexInAssembly
                                                
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_QUERY_INDEX.$", 0x8, true, 0xcb7dd9f87ec01e55 );                          
        SDK_FIXED_SIZE( activation_context_query_index_t, 0x8 );                          
    };                                          
};
#include "magic/activation_context_query_index_t.end.hpp"
SDK_VERIFY( struct win::activation_context_query_index_t, 0x8 );
