#pragma once
#include <sdkgen/support_library.hpp>
#include "rtlwow64_crossprocess_work_operation_t.hpp"

#include "magic/rtlwow64_crossprocess_work_item_t.start.hpp"
namespace win
{
    // [struct RTLWOW64_CROSSPROCESS_WORK_ITEM]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rtlwow64_crossprocess_work_item_t                                               
    {                                                                                      
        struct u0_memory_alloc_data_t                                                      
        {                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                                             
            _m02 void*    base_address;                                                      //{ +0x0000    +0x0000    +0x0000    } | .BaseAddress
            _m03 uint64_t region_size;                                                       //{ +0x0008    +0x0008    +0x0008    } | .RegionSize
            _m04 uint32_t allocation_type;                                                   //{ +0x0010    +0x0010    +0x0010    } | .AllocationType
            _m05 uint32_t protect;                                                           //{ +0x0014    +0x0014    +0x0014    } | .Protect
            _m06 int32_t  syscall_status;                                                    //{ +0x0018    +0x0018    +0x0018    } | .SyscallStatus
                                                                                           
            SDK_MAGIC_PROPERTIES( "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryAllocData.$", 0x20, true, 0xe55ec68489679f69 );                                             
            SDK_FIXED_SIZE( u0_memory_alloc_data_t, 0x20 );                                             
        };                                                                                 
                                                                                           
        struct u3_memory_free_data_t                                                       
        {                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                                             
            _m08 void*    base_address;                                                      //{ +0x0000    +0x0000    +0x0000    } | .BaseAddress
            _m09 uint64_t region_size;                                                       //{ +0x0008    +0x0008    +0x0008    } | .RegionSize
            _m10 uint32_t free_type;                                                         //{ +0x0010    +0x0010    +0x0010    } | .FreeType
            _m11 int32_t  syscall_status;                                                    //{ +0x0014    +0x0014    +0x0014    } | .SyscallStatus
                                                                                           
            SDK_MAGIC_PROPERTIES( "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryFreeData.$", 0x18, true, 0xa44bd850bd145c9f );                                            
            SDK_FIXED_SIZE( u3_memory_free_data_t, 0x18 );                                            
        };                                                                                 
                                                                                           
        struct u6_memory_protect_data_t                                                    
        {                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                                             
            _m13 void*    base_address;                                                      //{ +0x0000    +0x0000    +0x0000    } | .BaseAddress
            _m14 uint64_t region_size;                                                       //{ +0x0008    +0x0008    +0x0008    } | .RegionSize
            _m15 uint32_t new_protect;                                                       //{ +0x0010    +0x0010    +0x0010    } | .NewProtect
            _m16 int32_t  syscall_status;                                                    //{ +0x0014    +0x0014    +0x0014    } | .SyscallStatus
                                                                                           
            SDK_MAGIC_PROPERTIES( "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryProtectData.$", 0x18, true, 0x732dce9f4775c5a4 );                                            
            SDK_FIXED_SIZE( u6_memory_protect_data_t, 0x18 );                                            
        };                                                                                 
                                                                                           
        struct u9_instruction_cache_flush_data_t                                           
        {                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                                             
            _m18 void*    base_address;                                                      //{ +0x0000    +0x0000    +0x0000    } | .BaseAddress
            _m19 uint64_t length;                                                            //{ +0x0008    +0x0008    +0x0008    } | .Length
                                                                                           
            SDK_MAGIC_PROPERTIES( "RTLWOW64_CROSSPROCESS_WORK_ITEM.InstructionCacheFlushData.$", 0x10, true, 0xa37a34d181a43685 );                                          
            SDK_FIXED_SIZE( u9_instruction_cache_flush_data_t, 0x10 );                                          
        };                                                                                 
                                                                                           
        struct u12_memory_dirty_data_t                                                     
        {                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                                             
            _m21 void*    base_address;                                                      //{ +0x0000    +0x0000    +0x0000    } | .BaseAddress
            _m22 uint64_t region_size;                                                       //{ +0x0008    +0x0008    +0x0008    } | .RegionSize
                                                                                           
            SDK_MAGIC_PROPERTIES( "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryDirtyData.$", 0x10, true, 0x672e4004854429df );                                          
            SDK_FIXED_SIZE( u12_memory_dirty_data_t, 0x10 );                                          
        };                                                                                 
                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                 
        _m00 uint32_t                                         next;                          //{ +0x0000    +0x0000    +0x0000    } | .Next
        _m01 enum win::rtlwow64_crossprocess_work_operation_t operation;                     //{ +0x0004    +0x0004    +0x0004    } | .Operation
        _m07 u0_memory_alloc_data_t                           memory_alloc_data;             //{ +0x0008    +0x0008    +0x0008    } | .MemoryAllocData
        _m12 u3_memory_free_data_t                            memory_free_data;              //{ +0x0008    +0x0008    +0x0008    } | .MemoryFreeData
        _m17 u6_memory_protect_data_t                         memory_protect_data;           //{ +0x0008    +0x0008    +0x0008    } | .MemoryProtectData
        _m20 u9_instruction_cache_flush_data_t                instruction_cache_flush_data;  //{ +0x0008    +0x0008    +0x0008    } | .InstructionCacheFlushData
        _m23 u12_memory_dirty_data_t                          memory_dirty_data;             //{ +0x0008    +0x0008    +0x0008    } | .MemoryDirtyData
                                                                                           
        SDK_MAGIC_PROPERTIES( "RTLWOW64_CROSSPROCESS_WORK_ITEM.$", 0x28, true, 0x5efe55a009c55b8b );                             
        SDK_FIXED_SIZE( rtlwow64_crossprocess_work_item_t, 0x28 );                             
    };                                                                                     
};
#include "magic/rtlwow64_crossprocess_work_item_t.end.hpp"
SDK_VERIFY( struct win::rtlwow64_crossprocess_work_item_t::u0_memory_alloc_data_t, 0x20 );
SDK_VERIFY( struct win::rtlwow64_crossprocess_work_item_t::u3_memory_free_data_t, 0x18 );
SDK_VERIFY( struct win::rtlwow64_crossprocess_work_item_t::u6_memory_protect_data_t, 0x18 );
SDK_VERIFY( struct win::rtlwow64_crossprocess_work_item_t::u9_instruction_cache_flush_data_t, 0x10 );
SDK_VERIFY( struct win::rtlwow64_crossprocess_work_item_t::u12_memory_dirty_data_t, 0x10 );
SDK_VERIFY( struct win::rtlwow64_crossprocess_work_item_t, 0x28 );
