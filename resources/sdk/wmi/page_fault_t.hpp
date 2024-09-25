#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/page_fault_t.start.hpp"
namespace wmi
{
    // [struct _WMI_PAGE_FAULT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct page_fault_t            
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                         
        _m00 void* virtual_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 void* program_counter;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProgramCounter
                                   
        SDK_MAGIC_PROPERTIES( "_WMI_PAGE_FAULT.$", 0x10, true, 0xd1f332e9c1c306cb );                
        SDK_FIXED_SIZE( page_fault_t, 0x10 );                
    };                             
};
#include "magic/page_fault_t.end.hpp"
SDK_VERIFY( struct wmi::page_fault_t, 0x10 );
