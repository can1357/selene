#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kmutant_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"
#include "../mm/system_page_counts_t.hpp"
#include "../rtl/function_override_capabilities_t.hpp"

namespace ldr::km { struct data_table_entry_t; }
namespace nt      { struct ethread_t;          }

#include "magic/system_image_state_t.start.hpp"
namespace mi
{
    struct driver_va_t;

    // [struct _MI_SYSTEM_IMAGE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_image_state_t                                                          
    {                                                                                    
        using load_lock_t =   sdk::variant<struct nt::kmutant_t, struct ex::push_lock_t>;                               
        using system_base_t = sdk::array<struct ldr::km::data_table_entry_t*, 1>;                               
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                               
        _m00 nt::list_entry_t                             fixup_list;                      //{ +0x0008    +0x0000    +0x0000    +0x0000    } | .FixupList
        _m01 load_lock_t                                  load_lock;                       //{ +0x0018    +0x0010    +0x0010    +0x0010    } | .LoadLock
        _m02 volatile int32_t                             fixup_lock;                      //{ +0x0000    +0x0024    +0x0024    +0x0024    } | .FixupLock
        _m03 uint8_t                                      first_load_ever;                 //{ +0x0050    +0x0028    +0x0034    +0x0028    } | .FirstLoadEver
        _m04 uint8_t                                      large_page_all;                  //{ +0x0051    +0x0029    +0x0035    +0x0029    } | .LargePageAll
        _m05 nt::list_entry_t                             large_page_list;                 //{ +0x0060    +0x0038    +0x0038    +0x0038    } | .LargePageList
        _m06 nt::list_entry_t                             strong_code_load_failure_list;   //{ +0x0070    +0x0048    +0x0048    +0x0048    } | .StrongCodeLoadFailureList
        _m07 struct ldr::km::data_table_entry_t*          being_deleted;                   //{ +0x0080    +0x0060    +0x0070    +0x0060    } | .BeingDeleted
        _m08 struct ex::push_lock_t                       mapping_ranges_push_lock;        //{ +0x0088    +0x0068    +0x0078    +0x0068    } | .MappingRangesPushLock
        _m09 sdk::array<struct mi::driver_va_t*, 2>       mapping_ranges;                  //{ +0x0090    +0x0070    +0x0080    +0x0070    } | .MappingRanges
        _m10 struct mm::system_page_counts_t              page_counts;                     //{ +0x00a8    +0x0088    +0x0090    +0x0088    } | .PageCounts
        _m11 struct ex::push_lock_t                       collided_lock;                   //{ +0x00b8    +0x0098    +0x00a0    +0x0098    } | .CollidedLock
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                               
        //                                                                               
        _m12 uint64_t                                     last_page;                       //{ +0x0058    +0x0030    +0x0030    } | .LastPage
        _m13 uint64_t                                     page_count;                      //{ +0x00a0    +0x0080    +0x0080    } | .PageCount
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                               
        _m14 struct nt::ethread_t*                        load_lock_owner;                 //{ +0x0018    +0x0018    +0x0018    } | .LoadLockOwner
        _m15 uint32_t                                     load_lock_count;                 //{ +0x0020    +0x0020    +0x0020    } | .LoadLockCount
        _m16 system_base_t                                system_base;                     //{ +0x0058    +0x0058    +0x0058    } | .SystemBase
        _m17 struct rtl::avl_tree_t                       image_tree;                      //{ +0x00a0    +0x00a8    +0x00a0    } | .ImageTree
                                                                                         
        // Windows 11                                                                    
        //                                                                               
        _m18 struct ex::push_lock_t                       encode_decode_lock;              //{ +0x0028    } | .EncodeDecodeLock
        _m19 uint32_t                                     encode_decode_depth;             //{ +0x0030    } | .EncodeDecodeDepth
        _m20 uint8_t                                      system_images_loaded;            //{ +0x0036    } | .SystemImagesLoaded
        _m21 sdk::array<struct rtl::bitmap_ex_t, 1>       base_image_discarded_bitmaps;    //{ +0x0060    } | .BaseImageDiscardedBitmaps
        _m22 struct ldr::km::data_table_entry_t*          load_in_progress;                //{ +0x00b0    } | .LoadInProgress
        _m23 uint64_t                                     import_entries_replaced;         //{ +0x00b8    } | .ImportEntriesReplaced
        _m24 struct rtl::function_override_capabilities_t function_override_capabilities;  //{ +0x00c0    } | .FunctionOverrideCapabilities
                                                                                         
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_IMAGE_STATE.$", 0xa8, true, 0xa92ed7b7dcc829d0 );                               
        SDK_DYNAMIC_SIZE( system_image_state_t );                                        
    };                                                                                   
};
#include "magic/system_image_state_t.end.hpp"
