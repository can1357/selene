#pragma once
#include <sdkgen/support_library.hpp>
#include "balanced_links_t.hpp"
#include "generic_compare_results_t.hpp"

#include "magic/avl_table_t.start.hpp"
namespace rtl
{
    struct avl_table_t;

    // [struct _RTL_AVL_TABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct avl_table_t                                                   
    {                                                                    
        using prtl_avl_compare_routine_t =  sdk::function<enum rtl::generic_compare_results_t(struct rtl::avl_table_t*, void*, void*)>*;                              
        using prtl_avl_allocate_routine_t = sdk::function<void*(struct rtl::avl_table_t*, uint32_t)>*;                              
        using prtl_avl_free_routine_t =     sdk::function<void(struct rtl::avl_table_t*, void*)>*;                              
                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                               
        _m00 struct rtl::balanced_links_t  balanced_root;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BalancedRoot
        _m01 void*                         ordered_pointer;                //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .OrderedPointer
        _m02 uint32_t                      which_ordered_element;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .WhichOrderedElement
        _m03 uint32_t                      number_generic_table_elements;  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .NumberGenericTableElements
        _m04 uint32_t                      depth_of_tree;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DepthOfTree
        _m05 struct rtl::balanced_links_t* restart_key;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .RestartKey
        _m06 uint32_t                      delete_count;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .DeleteCount
        _m07 prtl_avl_compare_routine_t    compare_routine;                //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .CompareRoutine
        _m08 prtl_avl_allocate_routine_t   allocate_routine;               //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .AllocateRoutine
        _m09 prtl_avl_free_routine_t       free_routine;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .FreeRoutine
        _m10 void*                         table_context;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .TableContext
                                                                         
        SDK_NONVOL_PROPERTIES( "_RTL_AVL_TABLE.$", 0x68, true, 0xce92a1e76b75b1e7 );                              
        SDK_FIXED_SIZE( avl_table_t, 0x68 );                              
    };                                                                   
};
#include "magic/avl_table_t.end.hpp"
SDK_VERIFY( struct rtl::avl_table_t, 0x68 );
