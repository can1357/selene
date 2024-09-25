#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "set_purge_failure_mode_input_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/section_context_extension_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;

    // [struct _SECTION_CONTEXT_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_context_extension_t                                  
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                              
        _m00 struct fltmgr::flt_instance_t*                instance;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Instance
        _m01 struct nt::file_object_t*                     file_object;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m02 uint32_t                                      flags;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m03 struct nt::kevent_t                           event;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Event
        _m04 struct fltmgr::set_purge_failure_mode_input_t fsctl_buffer;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FsctlBuffer
        _m05 struct nt::work_queue_item_t                  work_item;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WorkItem
                                                                        
        SDK_MAGIC_PROPERTIES( "_SECTION_CONTEXT_EXTENSION.$", 0x58, true, 0x79915a7f4aa139d1 );             
        SDK_FIXED_SIZE( section_context_extension_t, 0x58 );             
    };                                                                  
};
#include "magic/section_context_extension_t.end.hpp"
SDK_VERIFY( struct fltmgr::section_context_extension_t, 0x58 );
