#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_working_set_ex_block_t.hpp"

#include "magic/memory_working_set_ex_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_WORKING_SET_EX_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_working_set_ex_information_t                            
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                
        _m00 void*                                     virtual_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 struct win::memory_working_set_ex_block_t virtual_attributes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VirtualAttributes
        _m02 uint64_t                                  _long;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Long
                                                                          
        SDK_MAGIC_PROPERTIES( "_MEMORY_WORKING_SET_EX_INFORMATION.$", 0x10, true, 0x55866082b3556db );                   
        SDK_FIXED_SIZE( memory_working_set_ex_information_t, 0x10 );                   
    };                                                                    
};
#include "magic/memory_working_set_ex_information_t.end.hpp"
SDK_VERIFY( struct win::memory_working_set_ex_information_t, 0x10 );
