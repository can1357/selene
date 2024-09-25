#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "context_list_ctrl_t.hpp"
#include "file_list_ctrl_flags_t.hpp"
#include "../ex/push_lock_auto_expand_t.hpp"
#include "../nt/fsrtl_per_file_context_t.hpp"
#include "../nt/fsrtl_per_stream_context_t.hpp"

#include "magic/file_list_ctrl_t.start.hpp"
namespace fltmgr
{
    // [struct _FILE_LIST_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_list_ctrl_t                                                              
    {                                                                                    
        union u0_context_ctrl_t                                                          
        {                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                           
            _m01 struct nt::fsrtl_per_file_context_t   file_context_ctrl;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileContextCtrl
            _m02 struct nt::fsrtl_per_stream_context_t stream_context_ctrl;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamContextCtrl
                                                                                         
            SDK_MAGIC_PROPERTIES( "_FILE_LIST_CTRL.ContextCtrl.$", 0x28, true, 0x537ea1d6e38eca65 );                                  
            SDK_FIXED_SIZE( u0_context_ctrl_t, 0x28 );                                   
        };                                                                               
                                                                                         
        using context_lock_t = sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>;              
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                                               
        _m00 union fltmgr::flt_type_t                                      type;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m03 u0_context_ctrl_t                                             context_ctrl;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextCtrl
        _m04 nt::list_entry_t                                              volume_link;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VolumeLink
        _m05 enum fltmgr::file_list_ctrl_flags_t                           flags;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m06 int32_t                                                       use_count;      //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .UseCount
        _m07 context_lock_t                                                context_lock;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ContextLock
        _m08 struct fltmgr::context_list_ctrl_t                            file_contexts;  //{ +0x0050    +0x0050    +0x0058    +0x0050    } | .FileContexts
                                                                                         
        SDK_MAGIC_PROPERTIES( "_FILE_LIST_CTRL.$", 0x58, true, 0xb888af7705ecf873 );              
        SDK_DYNAMIC_SIZE( file_list_ctrl_t );                                            
    };                                                                                   
};
#include "magic/file_list_ctrl_t.end.hpp"
SDK_VERIFY( union fltmgr::file_list_ctrl_t::u0_context_ctrl_t, 0x28 );
