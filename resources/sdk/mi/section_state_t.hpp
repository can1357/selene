#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/mmpfnlist_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"
#include "../nt/msubsection_t.hpp"
#include "dll_overflow_area_t.hpp"
#include "section_wow_state_t.hpp"
#include "../nt/control_area_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "cross_partition_charges_t.hpp"
#include "extent_deletion_wait_block_t.hpp"

namespace nt  { struct mdl_t;                }
namespace nt  { struct mmpfn_t;              }
namespace nt  { struct mmpte_t;              }
namespace nt  { struct section_t;            }
namespace rtl { struct retpoline_routines_t; }

#include "magic/section_state_t.start.hpp"
namespace mi
{
    // [struct _MI_SECTION_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_state_t                                                                       
    {                                                                                            
        using image_bit_map64_low_t = sdk::variant<struct rtl::bitmap_t, struct rtl::bitmap_ex_t>;                                     
                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                       
        _m000 volatile int32_t                              section_object_pointers_lock;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionObjectPointersLock
        _m001 struct rtl::avl_tree_t                        section_based_root;                    //{ +0x0018    +0x0008    +0x0008    +0x0008    } | .SectionBasedRoot
        _m002 struct ex::push_lock_t                        section_based_lock;                    //{ +0x0020    +0x0010    +0x0010    +0x0010    } | .SectionBasedLock
        _m003 uint32_t                                      data_section_protection_mask;          //{ +0x0034    +0x0020    +0x0020    +0x0020    } | .DataSectionProtectionMask
        _m004 void*                                         high_section_base;                     //{ +0x0038    +0x0028    +0x0028    +0x0028    } | .HighSectionBase
        _m005 struct nt::msubsection_t                      physical_subsection;                   //{ +0x0040    +0x0030    +0x0030    +0x0030    } | .PhysicalSubsection
        _m006 struct nt::control_area_t                     physical_control_area;                 //{ +0x00b0    +0x00c0    +0x00c8    +0x00c0    } | .PhysicalControlArea
        _m007 struct nt::work_queue_item_t                  dangling_extents_work_item;            //{ +0x0140    +0x0170    +0x01a8    +0x0170    } | .DanglingExtentsWorkItem
        _m008 uint8_t                                       dangling_extents_worker_active;        //{ +0x0160    +0x01b1    +0x01e9    +0x01b1    } | .DanglingExtentsWorkerActive
        _m009 struct ex::push_lock_t                        relocate_bitmaps_lock;                 //{ +0x01d0    +0x01c8    +0x0200    +0x01c8    } | .RelocateBitmapsLock
        _m010 image_bit_map64_low_t                         image_bit_map64_low;                   //{ +0x01f0    +0x0260    +0x0298    +0x0260    } | .ImageBitMap64Low
        _m011 varuint_t                                     image_bias64_low;                      //{ +0x01e8    +0x0270    +0x02a8    +0x0270    } | .ImageBias64Low
        _m012 void*                                         api_set_section;                       //{ +0x0220    +0x0278    +0x02b0    +0x0278    } | .ApiSetSection
        _m013 void*                                         api_set_schema;                        //{ +0x0228    +0x0280    +0x02b8    +0x0280    } | .ApiSetSchema
        _m014 uint64_t                                      api_set_schema_size;                   //{ +0x0230    +0x0288    +0x02c0    +0x0288    } | .ApiSetSchemaSize
        _m015 uint32_t                                      lost_data_files;                       //{ +0x0238    +0x0290    +0x02c8    +0x0290    } | .LostDataFiles
        _m016 uint32_t                                      lost_data_pages;                       //{ +0x023c    +0x0294    +0x02cc    +0x0294    } | .LostDataPages
        _m017 uint32_t                                      image_failure_reason;                  //{ +0x0240    +0x0298    +0x02d0    +0x0298    } | .ImageFailureReason
        _m018 uint32_t                                      image_cfg_failure;                     //{ +0x0268    +0x02c8    +0x0300    +0x02c8    } | .ImageCfgFailure
        _m019 volatile int32_t                              image_validation_failed;               //{ +0x026c    +0x031c    +0x0354    +0x031c    } | .ImageValidationFailed
                                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                       
        _m020 volatile uint64_t                             unused_segment_paged_pool;             //{ +0x0018    +0x0018    +0x0018    } | .UnusedSegmentPagedPool
        _m021 struct nt::mmpfnlist_t                        purging_extent_pages;                  //{ +0x0140    +0x0148    +0x0140    } | .PurgingExtentPages
        _m022 struct nt::mmpfn_t*                           dangling_extent_pages;                 //{ +0x0168    +0x01a0    +0x0168    } | .DanglingExtentPages
        _m023 struct mi::extent_deletion_wait_block_t       dangling_extents_deletion_wait_list;   //{ +0x0190    +0x01c8    +0x0190    } | .DanglingExtentsDeletionWaitList
        _m024 uint8_t                                       file_only_memory_pfns_created;         //{ +0x01b0    +0x01e8    +0x01b0    } | .FileOnlyMemoryPfnsCreated
        _m025 uint8_t                                       purging_extents_need_watchdog;         //{ +0x01b2    +0x01ea    +0x01b2    } | .PurgingExtentsNeedWatchdog
        _m026 struct rtl::avl_tree_t                        prototype_ptes_tree;                   //{ +0x01b8    +0x01f0    +0x01b8    } | .PrototypePtesTree
        _m027 volatile int32_t                              prototype_ptes_tree_spin_lock;         //{ +0x01c0    +0x01f8    +0x01c0    } | .PrototypePtesTreeSpinLock
        _m028 struct rtl::bitmap_ex_t                       image_bit_map_native;                  //{ +0x01d0    +0x0208    +0x01d0    } | .ImageBitMapNative
        _m029 uint64_t                                      image_bias_native;                     //{ +0x01e0    +0x0218    +0x01e0    } | .ImageBiasNative
        _m030 struct mi::dll_overflow_area_t                overflow_area;                         //{ +0x01e8    +0x0220    +0x01e8    } | .OverflowArea
        _m031 sdk::array<struct mi::section_wow_state_t, 1> wow;                                   //{ +0x0208    +0x0240    +0x0208    } | .Wow
        _m032 uint64_t                                      image_bias_wow;                        //{ +0x0248    +0x0280    +0x0248    } | .ImageBiasWow
        _m033 struct rtl::bitmap_ex_t                       image_bit_map_wow_scratch;             //{ +0x0250    +0x0288    +0x0250    } | .ImageBitMapWowScratch
        _m034 struct nt::section_t*                         cfg_bit_map_section;                   //{ +0x02a0    +0x02d8    +0x02a0    } | .CfgBitMapSection
        _m035 struct nt::control_area_t*                    cfg_bit_map_control_area;              //{ +0x02a8    +0x02e0    +0x02a8    } | .CfgBitMapControlArea
        _m036 struct rtl::bitmap_ex_t                       kernel_cfg_bit_map;                    //{ +0x02b0    +0x02e8    +0x02b0    } | .KernelCfgBitMap
        _m037 struct ex::push_lock_t                        kernel_cfg_bit_map_lock;               //{ +0x02c0    +0x02f8    +0x02c0    } | .KernelCfgBitMapLock
        _m038 uint32_t                                      retpoline_reserve_pages;               //{ +0x02cc    +0x0304    +0x02cc    } | .RetpolineReservePages
        _m039 struct nt::mdl_t*                             retpoline_stub_mdl;                    //{ +0x02d0    +0x0308    +0x02d0    } | .RetpolineStubMdl
        _m040 struct rtl::bitmap_ex_t                       kernel_retpoline_bit_map;              //{ +0x02d8    +0x0310    +0x02d8    } | .KernelRetpolineBitMap
        _m041 struct rtl::retpoline_routines_t*             retpoline_routines;                    //{ +0x02e8    +0x0320    +0x02e8    } | .RetpolineRoutines
        _m042 struct nt::mmpte_t*                           retpoline_revert_pte;                  //{ +0x02f0    +0x0328    +0x02f0    } | .RetpolineRevertPte
        _m043 nt::list_entry_t                              non_retpoline_image_load_list;         //{ +0x02f8    +0x0330    +0x02f8    } | .NonRetpolineImageLoadList
        _m044 uint32_t                                      retpoline_stub_pages;                  //{ +0x0308    +0x0340    +0x0308    } | .RetpolineStubPages
        _m045 int32_t                                       retpoline_boot_status;                 //{ +0x030c    +0x0344    +0x030c    } | .RetpolineBootStatus
        _m046 uint32_t                                      image_breakpoint_enabled;              //{ +0x0310    +0x0348    +0x0310    } | .ImageBreakpointEnabled
        _m047 uint32_t                                      image_breakpoint_checksum;             //{ +0x0314    +0x034c    +0x0314    } | .ImageBreakpointChecksum
        _m048 uint32_t                                      image_breakpoint_size;                 //{ +0x0318    +0x0350    +0x0318    } | .ImageBreakpointSize
                                                                                                 
        // Windows 10 v2004, Windows 10 v20H2                                                    
        //                                                                                       
        _m049 struct rtl::avl_tree_t                        image_extent_tree;                     //{ +0x0320    +0x0320    } | .ImageExtentTree
        _m050 struct ex::push_lock_t                        image_extent_tree_lock;                //{ +0x0328    +0x0328    } | .ImageExtentTreeLock
        _m051 uint32_t                                      hot_patch_reserve_size;                //{ +0x0330    +0x0330    } | .HotPatchReserveSize
                                                                                                 
        // Windows 10 v1607                                                                      
        //                                                                                       
        _m052 struct ex::push_lock_t                        section_extend_lock;                   //{ +0x0008    } | .SectionExtendLock
        _m053 struct ex::push_lock_t                        section_extend_set_lock;               //{ +0x0010    } | .SectionExtendSetLock
        _m054 uint64_t                                      unused_subsection_paged_pool;          //{ +0x0028    } | .UnusedSubsectionPagedPool
        _m055 uint32_t                                      unused_segment_force_free;             //{ +0x0030    } | .UnusedSegmentForceFree
        _m056 struct nt::mmpfn_t*                           dangling_extents_pages;                //{ +0x0130    } | .DanglingExtentsPages
        _m057 volatile int32_t                              dangling_extents_lock;                 //{ +0x0138    } | .DanglingExtentsLock
        _m058 struct rtl::avl_tree_t                        page_file_section_head;                //{ +0x0168    } | .PageFileSectionHead
        _m059 volatile int32_t                              page_file_section_list_spin_lock;      //{ +0x0170    } | .PageFileSectionListSpinLock
        _m060 struct mi::cross_partition_charges_t          shared_segment_charges;                //{ +0x0178    } | .SharedSegmentCharges
        _m061 struct mi::cross_partition_charges_t          shared_page_combine_charges;           //{ +0x01a0    } | .SharedPageCombineCharges
        _m062 uint32_t                                      image_bias;                            //{ +0x01c8    } | .ImageBias
        _m063 struct rtl::bitmap_t                          image_bit_map;                         //{ +0x01d8    } | .ImageBitMap
        _m064 uint32_t                                      image_bias64_high;                     //{ +0x01ec    } | .ImageBias64High
        _m065 struct rtl::bitmap_t                          image_bit_map64_high;                  //{ +0x0200    } | .ImageBitMap64High
        _m066 struct rtl::bitmap_t                          image_bit_map_wow64_dll;               //{ +0x0210    } | .ImageBitMapWow64Dll
        _m067 struct nt::section_t*                         cfg_bit_map_section32;                 //{ +0x0248    } | .CfgBitMapSection32
        _m068 struct nt::control_area_t*                    cfg_bit_map_control_area32;            //{ +0x0250    } | .CfgBitMapControlArea32
        _m069 struct nt::section_t*                         cfg_bit_map_section64;                 //{ +0x0258    } | .CfgBitMapSection64
        _m070 struct nt::control_area_t*                    cfg_bit_map_control_area64;            //{ +0x0260    } | .CfgBitMapControlArea64
                                                                                                 
        // Windows 11                                                                            
        //                                                                                       
        _m071 sdk::array<struct rtl::avl_tree_t, 2>         extent_tree;                           //{ +0x0358    } | .ExtentTree
        _m072 struct ex::push_lock_t                        extent_tree_lock;                      //{ +0x0368    } | .ExtentTreeLock
        _m073 struct ex::push_lock_t                        extent_forward_progress_mapping_lock;  //{ +0x0370    } | .ExtentForwardProgressMappingLock
                                                                                                 
        SDK_MAGIC_PROPERTIES( "_MI_SECTION_STATE.$", 0x340, true, 0x76c3407f82f8b39d );                                     
        SDK_DYNAMIC_SIZE( section_state_t );                                                     
    };                                                                                           
};
#include "magic/section_state_t.end.hpp"
