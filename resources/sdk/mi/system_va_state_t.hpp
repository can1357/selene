#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "dynamic_bitmap_t.hpp"
#include "pte_chain_head_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/mmwsl_instance_t.hpp"

namespace nt { struct mmsupport_instance_t;    }
namespace nt { struct mmwsle_hash_t;           }
namespace nt { struct mmwsle_nondirect_hash_t; }

#include "magic/system_va_state_t.start.hpp"
namespace mi
{
    struct wsle_t;

    // [struct _MI_SYSTEM_VA_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_va_state_t                                                                        
    {                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                          
        _m000 uint64_t                                        system_tables_lock;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemTablesLock
        _m001 uint64_t                                        available_system_cache_va;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AvailableSystemCacheVa
        _m002 struct mi::dynamic_bitmap_t                     dynamic_bit_map_system_ptes;            //{ +0x0010    +0x0058    +0x00a0    +0x0058    } | .DynamicBitMapSystemPtes
        _m003 sdk::array<struct mi::dynamic_bitmap_t, 2>      dynamic_bit_map_driver_images;          //{ +0x0060    +0x00a0    +0x00e8    +0x00a0    } | .DynamicBitMapDriverImages
        _m004 struct mi::dynamic_bitmap_t                     dynamic_bit_map_paged_pool;             //{ +0x0100    +0x0130    +0x0178    +0x0130    } | .DynamicBitMapPagedPool
        _m005 struct mi::dynamic_bitmap_t                     dynamic_bit_map_system_cache;           //{ +0x01a0    +0x0178    +0x01c0    +0x0178    } | .DynamicBitMapSystemCache
        _m006 sdk::array<uint32_t, 8>                         system_va_assignment;                   //{ +0x01f0    +0x0218    +0x0260    +0x0218    } | .SystemVaAssignment
        _m007 uint32_t                                        system_va_assignment_hint;              //{ +0x0210    +0x0238    +0x0280    +0x0238    } | .SystemVaAssignmentHint
        _m008 volatile int32_t                                delete_kva_lock;                        //{ +0x0278    +0x02bc    +0x0304    +0x02bc    } | .DeleteKvaLock
        _m009 void*                                           hyper_space_end;                        //{ +0x0238    +0x0308    +0x0350    +0x0308    } | .HyperSpaceEnd
        _m010 struct nt::kevent_t                             free_system_cache_va;                   //{ +0x0258    +0x0328    +0x0370    +0x0328    } | .FreeSystemCacheVa
        _m011 uint64_t                                        system_va_lock;                         //{ +0x0270    +0x0340    +0x0388    +0x0340    } | .SystemVaLock
        _m012 uint64_t                                        system_cache_view_lock;                 //{ +0x0298    +0x0348    +0x0390    +0x0348    } | .SystemCacheViewLock
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m013 struct mi::dynamic_bitmap_t                     dynamic_bit_map_kernel_stacks;          //{ +0x0010    +0x0010    +0x0010    } | .DynamicBitMapKernelStacks
        _m014 struct mi::dynamic_bitmap_t                     dynamic_bit_map_secure_non_paged_pool;  //{ +0x01c0    +0x0208    +0x01c0    } | .DynamicBitMapSecureNonPagedPool
        _m015 void*                                           hal_private_va_start;                   //{ +0x0208    +0x0250    +0x0208    } | .HalPrivateVaStart
        _m016 uint64_t                                        hal_private_va_size;                    //{ +0x0210    +0x0258    +0x0210    } | .HalPrivateVaSize
        _m017 sdk::array<uint32_t, 32>                        top_level_pte_lock_bits;                //{ +0x023c    +0x0284    +0x023c    } | .TopLevelPteLockBits
        _m018 sdk::array<struct mi::wsle_t*, 8>               wsle_arrays;                            //{ +0x02c0    +0x0308    +0x02c0    } | .WsleArrays
        _m019 void*                                           pagable_hyper_space;                    //{ +0x0300    +0x0348    +0x0300    } | .PagableHyperSpace
        _m020 uint64_t                                        pagable_hyper_space_bytes;              //{ +0x0310    +0x0358    +0x0310    } | .PagableHyperSpaceBytes
        _m021 sdk::array<uint64_t, 2>                         page_table_commitment_offset;           //{ +0x0318    +0x0360    +0x0318    } | .PageTableCommitmentOffset
        _m022 sdk::array<struct nt::mmwsl_instance_t, 8>      system_working_set_list;                //{ +0x0350    +0x0398    +0x0350    } | .SystemWorkingSetList
        _m023 sdk::array<uint64_t, 4>                         selfmap_lock;                           //{ +0x0490    +0x04d8    +0x0490    } | .SelfmapLock
                                                                                                    
        // Windows 10 v1607                                                                         
        //                                                                                          
        _m024 struct mi::dynamic_bitmap_t                     dynamic_bit_map_special_pool;           //{ +0x0150    } | .DynamicBitMapSpecialPool
        _m025 sdk::array<uint32_t, 8>                         va_region_shadowed;                     //{ +0x0214    } | .VaRegionShadowed
        _m026 struct nt::mmwsle_hash_t*                       working_set_list_hash_start;            //{ +0x0240    } | .WorkingSetListHashStart
        _m027 struct nt::mmwsle_hash_t*                       working_set_list_hash_end;              //{ +0x0248    } | .WorkingSetListHashEnd
        _m028 struct nt::mmwsle_nondirect_hash_t*             working_set_list_indirect_hash_start;   //{ +0x0250    } | .WorkingSetListIndirectHashStart
        _m029 struct mi::pte_chain_head_t                     free_system_cache;                      //{ +0x0280    } | .FreeSystemCache
        _m030 struct ex::push_lock_t                          system_cache_init_lock;                 //{ +0x02a0    } | .SystemCacheInitLock
        _m031 sdk::array<uint64_t, 5>                         unusable_wsles;                         //{ +0x02a8    } | .UnusableWsles
        _m032 sdk::array<uint64_t, 5>                         possible_wsles;                         //{ +0x02d0    } | .PossibleWsles
        _m033 sdk::array<struct nt::mmsupport_instance_t*, 3> system_ws;                              //{ +0x02f8    } | .SystemWs
                                                                                                    
        // Windows 11                                                                               
        //                                                                                          
        _m034 struct mi::dynamic_bitmap_t                     dynamic_bit_map_kernel_shadow_stacks;   //{ +0x0058    } | .DynamicBitMapKernelShadowStacks
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_VA_STATE.$", 0x4c0, true, 0xfa28b366bc3767fa );                                      
        SDK_DYNAMIC_SIZE( system_va_state_t );                                                      
    };                                                                                              
};
#include "magic/system_va_state_t.end.hpp"
