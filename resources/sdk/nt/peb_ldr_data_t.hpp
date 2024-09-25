#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/peb_ldr_data_t.start.hpp"
namespace nt
{
    // [struct _PEB_LDR_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct peb_ldr_data_t                                         
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                        
        _m00 uint32_t         length;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint8_t          initialized;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Initialized
        _m02 void*            ss_handle;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SsHandle
        _m03 nt::list_entry_t in_load_order_module_list;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InLoadOrderModuleList
        _m04 nt::list_entry_t in_memory_order_module_list;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .InMemoryOrderModuleList
        _m05 nt::list_entry_t in_initialization_order_module_list;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .InInitializationOrderModuleList
        _m06 void*            entry_in_progress;                    //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .EntryInProgress
        _m07 uint8_t          shutdown_in_progress;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ShutdownInProgress
        _m08 void*            shutdown_thread_id;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .ShutdownThreadId
                                                                  
        SDK_NONVOL_PROPERTIES( "_PEB_LDR_DATA.$", 0x58, true, 0xf75c33fdb9f93e69 );                                    
        SDK_FIXED_SIZE( peb_ldr_data_t, 0x58 );                                    
    };                                                            
};
#include "magic/peb_ldr_data_t.end.hpp"
SDK_VERIFY( struct nt::peb_ldr_data_t, 0x58 );
