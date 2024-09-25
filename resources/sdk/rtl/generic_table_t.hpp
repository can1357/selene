#pragma once
#include <sdkgen/support_library.hpp>
#include "generic_compare_results_t.hpp"

#include "magic/generic_table_t.start.hpp"
namespace rtl
{
    struct splay_links_t;
    struct generic_table_t;

    // [struct _RTL_GENERIC_TABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct generic_table_t                                                  
    {                                                                       
        using prtl_generic_compare_routine_t =  sdk::function<enum rtl::generic_compare_results_t(struct rtl::generic_table_t*, void*, void*)>*;                              
        using prtl_generic_allocate_routine_t = sdk::function<void*(struct rtl::generic_table_t*, uint32_t)>*;                              
        using prtl_generic_free_routine_t =     sdk::function<void(struct rtl::generic_table_t*, void*)>*;                              
                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m00 struct rtl::splay_links_t*       table_root;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TableRoot
        _m01 nt::list_entry_t                 insert_order_list;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InsertOrderList
        _m02 nt::list_entry_t*                ordered_pointer;                //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .OrderedPointer
        _m03 uint32_t                         which_ordered_element;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .WhichOrderedElement
        _m04 uint32_t                         number_generic_table_elements;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .NumberGenericTableElements
        _m05 prtl_generic_compare_routine_t   compare_routine;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CompareRoutine
        _m06 prtl_generic_allocate_routine_t  allocate_routine;               //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .AllocateRoutine
        _m07 prtl_generic_free_routine_t      free_routine;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .FreeRoutine
        _m08 void*                            table_context;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .TableContext
                                                                            
        SDK_NONVOL_PROPERTIES( "_RTL_GENERIC_TABLE.$", 0x48, true, 0x650ab9250e38b024 );                              
        SDK_FIXED_SIZE( generic_table_t, 0x48 );                              
    };                                                                      
};
#include "magic/generic_table_t.end.hpp"
SDK_VERIFY( struct rtl::generic_table_t, 0x48 );
