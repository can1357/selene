#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_memory_range_list_t.start.hpp"
namespace pci
{
    // [struct _PCI_FPB_MEMORY_RANGE_LIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fpb_memory_range_list_t      
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 nt::list_entry_t list_head;  //{ +0x0000    +0x0000    +0x0000    } | .ListHead
                                        
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_MEMORY_RANGE_LIST.$", 0x10, true, 0x5973bad00d7f7bd5 );          
        SDK_FIXED_SIZE( fpb_memory_range_list_t, 0x10 );          
    };                                  
};
#include "magic/fpb_memory_range_list_t.end.hpp"
SDK_VERIFY( struct pci::fpb_memory_range_list_t, 0x10 );
