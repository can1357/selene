#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/create_notify_info_t.start.hpp"
namespace ps
{
    // [struct _PS_CREATE_NOTIFY_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct create_notify_info_t                                 
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                      
        _m00 uint64_t                  size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                  flags;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint1_t                   file_open_name_available;  //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .FileOpenNameAvailable
        _m03 void*                     parent_process_id;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ParentProcessId
        _m04 struct nt::client_id_t    creating_thread_id;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CreatingThreadId
        _m05 struct nt::file_object_t* file_object;               //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .FileObject
        _m06 const nt::unicode_view*   image_file_name;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ImageFileName
        _m07 const nt::unicode_view*   command_line;              //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .CommandLine
        _m08 int32_t                   creation_status;           //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .CreationStatus
                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                      
        _m09 uint1_t                   is_subsystem_process;      //{ +0x0008@1  +0x0008@1  +0x0008@1  +0x0008@1  } | .IsSubsystemProcess
                                                                
        SDK_NONVOL_PROPERTIES( "_PS_CREATE_NOTIFY_INFO.$", 0x48, true, 0xf8ca8e0ef94529b7 );                         
        SDK_FIXED_SIZE( create_notify_info_t, 0x48 );                         
    };                                                          
};
#include "magic/create_notify_info_t.end.hpp"
SDK_VERIFY( struct ps::create_notify_info_t, 0x48 );
