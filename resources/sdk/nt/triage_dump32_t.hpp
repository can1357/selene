#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_dump32_t.start.hpp"
namespace nt
{
    // [struct _TRIAGE_DUMP32]
    // => WDK 10 (NV)
    //
    struct triage_dump32_t                     
    {                                          
        // WDK 10                              
        //                                     
        _m000 uint32_t service_pack_build;       //{ +0x0000    } | .ServicePackBuild
        _m001 uint32_t size_of_dump;             //{ +0x0004    } | .SizeOfDump
        _m002 uint32_t valid_offset;             //{ +0x0008    } | .ValidOffset
        _m003 uint32_t context_offset;           //{ +0x000c    } | .ContextOffset
        _m004 uint32_t exception_offset;         //{ +0x0010    } | .ExceptionOffset
        _m005 uint32_t mm_offset;                //{ +0x0014    } | .MmOffset
        _m006 uint32_t unloaded_drivers_offset;  //{ +0x0018    } | .UnloadedDriversOffset
        _m007 uint32_t prcb_offset;              //{ +0x001c    } | .PrcbOffset
        _m008 uint32_t process_offset;           //{ +0x0020    } | .ProcessOffset
        _m009 uint32_t thread_offset;            //{ +0x0024    } | .ThreadOffset
        _m010 uint32_t call_stack_offset;        //{ +0x0028    } | .CallStackOffset
        _m011 uint32_t size_of_call_stack;       //{ +0x002c    } | .SizeOfCallStack
        _m012 uint32_t driver_list_offset;       //{ +0x0030    } | .DriverListOffset
        _m013 uint32_t driver_count;             //{ +0x0034    } | .DriverCount
        _m014 uint32_t string_pool_offset;       //{ +0x0038    } | .StringPoolOffset
        _m015 uint32_t string_pool_size;         //{ +0x003c    } | .StringPoolSize
        _m016 uint32_t broken_driver_offset;     //{ +0x0040    } | .BrokenDriverOffset
        _m017 uint32_t triage_options;           //{ +0x0044    } | .TriageOptions
        _m018 uint32_t top_of_stack;             //{ +0x0048    } | .TopOfStack
        _m019 uint32_t data_page_address;        //{ +0x004c    } | .DataPageAddress
        _m020 uint32_t data_page_offset;         //{ +0x0050    } | .DataPageOffset
        _m021 uint32_t data_page_size;           //{ +0x0054    } | .DataPageSize
        _m022 uint32_t debugger_data_offset;     //{ +0x0058    } | .DebuggerDataOffset
        _m023 uint32_t debugger_data_size;       //{ +0x005c    } | .DebuggerDataSize
        _m024 uint32_t data_blocks_offset;       //{ +0x0060    } | .DataBlocksOffset
        _m025 uint32_t data_blocks_count;        //{ +0x0064    } | .DataBlocksCount
                                               
        SDK_NONVOL_PROPERTIES( "_TRIAGE_DUMP32.$", 0x0, false, 0xed3eb2dd19293bec );                        
        SDK_FIXED_SIZE( triage_dump32_t, 0x68 );                        
    };                                         
};
#include "magic/triage_dump32_t.end.hpp"
SDK_VERIFY( struct nt::triage_dump32_t, 0x68 );
