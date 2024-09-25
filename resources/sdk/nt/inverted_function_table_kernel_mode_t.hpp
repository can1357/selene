#pragma once
#include <sdkgen/support_library.hpp>
#include "inverted_function_table_entry_t.hpp"

#include "magic/inverted_function_table_kernel_mode_t.start.hpp"
namespace nt
{
    // [struct _INVERTED_FUNCTION_TABLE_KERNEL_MODE]
    // => Windows 11
    //
    struct inverted_function_table_kernel_mode_t
    {                                           
        using table_entry_t = sdk::array<struct nt::inverted_function_table_entry_t, 256>;             
                                                
        // Windows 11                       
        //                                  
        _m00 uint32_t          current_size;      //{ +0x0000    } | .CurrentSize
        _m01 uint32_t          maximum_size;      //{ +0x0004    } | .MaximumSize
        _m02 volatile uint32_t epoch;             //{ +0x0008    } | .Epoch
        _m03 uint8_t           overflow;          //{ +0x000c    } | .Overflow
        _m04 table_entry_t     table_entry;       //{ +0x0010    } | .TableEntry
                                                
        SDK_MAGIC_PROPERTIES( "_INVERTED_FUNCTION_TABLE_KERNEL_MODE.$", 0x0, false, 0xd41ff0b5c11b9ae5 );             
        SDK_FIXED_SIZE( inverted_function_table_kernel_mode_t, 0x1810 );             
    };                                          
};
#include "magic/inverted_function_table_kernel_mode_t.end.hpp"
SDK_VERIFY( struct nt::inverted_function_table_kernel_mode_t, 0x1810 );
