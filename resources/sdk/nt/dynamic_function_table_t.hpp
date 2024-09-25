#pragma once
#include <sdkgen/support_library.hpp>
#include "function_table_type_t.hpp"
#include "../rtl/balanced_node_t.hpp"

namespace image { struct runtime_function_entry_t; }

#include "magic/dynamic_function_table_t.start.hpp"
namespace nt
{
    // [struct _DYNAMIC_FUNCTION_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dynamic_function_table_t                                              
    {                                                                            
        using callback_t = sdk::function<struct image::runtime_function_entry_t*(uint64_t, void*)>*;                            
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                       
        _m00 nt::list_entry_t                        list_entry;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct image::runtime_function_entry_t* function_table;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FunctionTable
        _m02 int64_t                                 time_stamp;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TimeStamp
        _m03 uint64_t                                minimum_address;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MinimumAddress
        _m04 uint64_t                                maximum_address;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaximumAddress
        _m05 uint64_t                                base_address;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BaseAddress
        _m06 callback_t                              callback;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Callback
        _m07 void*                                   context;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Context
        _m08 wchar_t*                                out_of_process_callback_dll;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .OutOfProcessCallbackDll
        _m09 enum nt::function_table_type_t          type;                         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Type
        _m10 uint32_t                                entry_count;                  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .EntryCount
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                            
        //                                                                       
        _m11 struct rtl::balanced_node_t             tree_node;                    //{ +0x0058    +0x0058    +0x0058    } | .TreeNode
                                                                                 
        // Windows 11                                                            
        //                                                                       
        _m12 struct rtl::balanced_node_t             tree_node_min;                //{ +0x0058    } | .TreeNodeMin
        _m13 struct rtl::balanced_node_t             tree_node_max;                //{ +0x0070    } | .TreeNodeMax
                                                                                 
        SDK_MAGIC_PROPERTIES( "_DYNAMIC_FUNCTION_TABLE.$", 0x70, true, 0xd15e6c0183adcefc );                            
        SDK_DYNAMIC_SIZE( dynamic_function_table_t );                            
    };                                                                           
};
#include "magic/dynamic_function_table_t.end.hpp"
