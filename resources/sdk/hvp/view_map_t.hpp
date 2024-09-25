#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"

namespace nt { struct cmsi_process_tuple_t; }

#include "magic/view_map_t.start.hpp"
namespace hvp
{
    // [struct _HVP_VIEW_MAP]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct view_map_t                                                 
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                            
        _m00 void*                            section_reference;        //{ +0x0000    +0x0000    +0x0000    } | .SectionReference
        _m01 int64_t                          storage_end_file_offset;  //{ +0x0008    +0x0008    +0x0008    } | .StorageEndFileOffset
        _m02 int64_t                          section_end_file_offset;  //{ +0x0010    +0x0010    +0x0010    } | .SectionEndFileOffset
        _m03 struct nt::cmsi_process_tuple_t* process_tuple;            //{ +0x0018    +0x0018    +0x0018    } | .ProcessTuple
        _m04 uint32_t                         flags;                    //{ +0x0020    +0x0020    +0x0020    } | .Flags
        _m05 struct rtl::rb_tree_t            view_tree;                //{ +0x0028    +0x0028    +0x0028    } | .ViewTree
                                                                      
        SDK_MAGIC_PROPERTIES( "_HVP_VIEW_MAP.$", 0x38, true, 0xeeb8b367724cd909 );                        
        SDK_FIXED_SIZE( view_map_t, 0x38 );                           
    };                                                                
};
#include "magic/view_map_t.end.hpp"
SDK_VERIFY( struct hvp::view_map_t, 0x38 );
