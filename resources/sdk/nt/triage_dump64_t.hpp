#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_dump64_t.start.hpp"
namespace nt
{
    // [struct _TRIAGE_DUMP64]
    // => WDK 10 (NV)
    //
    struct triage_dump64_t                                                  
    {                                                                       
        union u0_architecture_specific_t                                    
        {                                                                   
            struct u1_ia64_t                                                
            {                                                               
                // WDK 10                                                   
                //                                                          
                _m19 uint32_t b_store_offset;                                 //{ +0x0000    } | .BStoreOffset
                _m20 uint32_t size_of_b_store;                                //{ +0x0004    } | .SizeOfBStore
                _m21 uint64_t limit_of_b_store;                               //{ +0x0008    } | .LimitOfBStore
                                                                            
                SDK_NONVOL_PROPERTIES( "_TRIAGE_DUMP64.ArchitectureSpecific.Ia64.$", 0x0, false, 0x2474d11966c46c71 );                                              
                SDK_FIXED_SIZE( u1_ia64_t, 0x10 );                                              
            };                                                              
                                                                            
            // WDK 10                                                       
            //                                                              
            _m22 u1_ia64_t                     ia64;                          //{ +0x0000    } | .Ia64
                                                                            
            SDK_NONVOL_PROPERTIES( "_TRIAGE_DUMP64.ArchitectureSpecific.$", 0x0, false, 0x8f8fa67f70d2b1cb );                             
            SDK_FIXED_SIZE( u0_architecture_specific_t, 0x10 );                             
        };                                                                  
                                                                            
        // WDK 10                                                           
        //                                                                  
        _m000 uint32_t                              service_pack_build;       //{ +0x0000    } | .ServicePackBuild
        _m001 uint32_t                              size_of_dump;             //{ +0x0004    } | .SizeOfDump
        _m002 uint32_t                              valid_offset;             //{ +0x0008    } | .ValidOffset
        _m003 uint32_t                              context_offset;           //{ +0x000c    } | .ContextOffset
        _m004 uint32_t                              exception_offset;         //{ +0x0010    } | .ExceptionOffset
        _m005 uint32_t                              mm_offset;                //{ +0x0014    } | .MmOffset
        _m006 uint32_t                              unloaded_drivers_offset;  //{ +0x0018    } | .UnloadedDriversOffset
        _m007 uint32_t                              prcb_offset;              //{ +0x001c    } | .PrcbOffset
        _m008 uint32_t                              process_offset;           //{ +0x0020    } | .ProcessOffset
        _m009 uint32_t                              thread_offset;            //{ +0x0024    } | .ThreadOffset
        _m010 uint32_t                              call_stack_offset;        //{ +0x0028    } | .CallStackOffset
        _m011 uint32_t                              size_of_call_stack;       //{ +0x002c    } | .SizeOfCallStack
        _m012 uint32_t                              driver_list_offset;       //{ +0x0030    } | .DriverListOffset
        _m013 uint32_t                              driver_count;             //{ +0x0034    } | .DriverCount
        _m014 uint32_t                              string_pool_offset;       //{ +0x0038    } | .StringPoolOffset
        _m015 uint32_t                              string_pool_size;         //{ +0x003c    } | .StringPoolSize
        _m016 uint32_t                              broken_driver_offset;     //{ +0x0040    } | .BrokenDriverOffset
        _m017 uint32_t                              triage_options;           //{ +0x0044    } | .TriageOptions
        _m018 uint64_t                              top_of_stack;             //{ +0x0048    } | .TopOfStack
        _m023 u0_architecture_specific_t            architecture_specific;    //{ +0x0050    } | .ArchitectureSpecific
        _m024 uint64_t                              data_page_address;        //{ +0x0060    } | .DataPageAddress
        _m025 uint32_t                              data_page_offset;         //{ +0x0068    } | .DataPageOffset
        _m026 uint32_t                              data_page_size;           //{ +0x006c    } | .DataPageSize
        _m027 uint32_t                              debugger_data_offset;     //{ +0x0070    } | .DebuggerDataOffset
        _m028 uint32_t                              debugger_data_size;       //{ +0x0074    } | .DebuggerDataSize
        _m029 uint32_t                              data_blocks_offset;       //{ +0x0078    } | .DataBlocksOffset
        _m030 uint32_t                              data_blocks_count;        //{ +0x007c    } | .DataBlocksCount
                                                                            
        SDK_NONVOL_PROPERTIES( "_TRIAGE_DUMP64.$", 0x0, false, 0xa91e7de01231a1ef );                        
        SDK_FIXED_SIZE( triage_dump64_t, 0x80 );                            
    };                                                                      
};
#include "magic/triage_dump64_t.end.hpp"
SDK_VERIFY( struct nt::triage_dump64_t::u0_architecture_specific_t::u1_ia64_t, 0x10 );
SDK_VERIFY( union nt::triage_dump64_t::u0_architecture_specific_t, 0x10 );
SDK_VERIFY( struct nt::triage_dump64_t, 0x80 );
