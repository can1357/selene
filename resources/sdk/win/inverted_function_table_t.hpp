#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/inverted_function_table_entry_t.hpp"

#include "magic/inverted_function_table_t.start.hpp"
namespace win
{
    // [struct _INVERTED_FUNCTION_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct inverted_function_table_t        
    {                                       
        using table_entry_t = sdk::array<struct nt::inverted_function_table_entry_t, 256>;             
                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                  
        _m00 uint32_t          current_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentSize
        _m01 uint32_t          maximum_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaximumSize
        _m02 volatile uint32_t epoch;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Epoch
        _m03 uint8_t           overflow;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Overflow
        _m04 table_entry_t     table_entry;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TableEntry
                                            
        SDK_MAGIC_PROPERTIES( "_INVERTED_FUNCTION_TABLE.$", 0x1810, true, 0xcf2a3b1ee440ff5d );             
        SDK_DYNAMIC_SIZE( inverted_function_table_t );             
    };                                      
};
#include "magic/inverted_function_table_t.end.hpp"
