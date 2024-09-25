#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "hot_patch_process_context_t.hpp"

namespace ldr::km { struct data_table_entry_t; }

#include "magic/hot_patch_state_t.start.hpp"
namespace mi
{
    // [struct _MI_HOT_PATCH_STATE]
    // => Windows 11
    //
    struct hot_patch_state_t                                                             
    {                                                                                    
        // Windows 11                                                                    
        //                                                                               
        _m00 struct rtl::avl_tree_t                 user_sid_patch_lists;                  //{ +0x0000    } | .UserSidPatchLists
        _m01 struct rtl::avl_tree_t                 global_hot_patch_list;                 //{ +0x0008    } | .GlobalHotPatchList
        _m02 struct rtl::avl_tree_t                 previously_registered_hot_patch_list;  //{ +0x0010    } | .PreviouslyRegisteredHotPatchList
        _m03 struct rtl::avl_tree_t                 secure_image_active_patches;           //{ +0x0018    } | .SecureImageActivePatches
        _m04 struct ex::push_lock_t                 hot_patch_list_lock;                   //{ +0x0020    } | .HotPatchListLock
        _m05 struct mi::hot_patch_process_context_t hot_patch_process_context;             //{ +0x0028    } | .HotPatchProcessContext
        _m06 struct ldr::km::data_table_entry_t*    in_progress_patch_table_entry;         //{ +0x0040    } | .InProgressPatchTableEntry
        _m07 struct ldr::km::data_table_entry_t*    in_progress_base_table_entry;          //{ +0x0048    } | .InProgressBaseTableEntry
        _m08 volatile char                          ready_for_patch_operations;            //{ +0x0050    } | .ReadyForPatchOperations
        _m09 uint32_t                               hot_patch_reserve_size;                //{ +0x0054    } | .HotPatchReserveSize
        _m10 uint1_t                                hot_patching_enabled;                  //{ +0x0058@0  } | .HotPatchingEnabled
        _m11 uint1_t                                enforce_patch_sequence_numbers;        //{ +0x0058@1  } | .EnforcePatchSequenceNumbers
        _m12 uint1_t                                hot_patch_test_executed;               //{ +0x0058@2  } | .HotPatchTestExecuted
                                                                                         
        SDK_MAGIC_PROPERTIES( "_MI_HOT_PATCH_STATE.$", 0x0, false, 0x72dce8df4745b533 );                                     
        SDK_FIXED_SIZE( hot_patch_state_t, 0x60 );                                       
    };                                                                                   
};
#include "magic/hot_patch_state_t.end.hpp"
SDK_VERIFY( struct mi::hot_patch_state_t, 0x60 );
