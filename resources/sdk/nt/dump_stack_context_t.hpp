#pragma once
#include <sdkgen/support_library.hpp>
#include "dump_initialization_context_t.hpp"
#include "device_usage_notification_type_t.hpp"

#include "magic/dump_stack_context_t.start.hpp"
namespace nt
{
    // [struct _DUMP_STACK_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dump_stack_context_t                                         
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                              
        _m00 struct nt::dump_initialization_context_t  init;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Init
        _m01 int64_t                                   partition_offset;  //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .PartitionOffset
        _m02 void*                                     dump_pointers;     //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .DumpPointers
        _m03 uint32_t                                  pointers_length;   //{ +0x0118    +0x011c    +0x011c    +0x011c    } | .PointersLength
        _m04 wchar_t*                                  module_prefix;     //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .ModulePrefix
        _m05 nt::list_entry_t                          driver_list;       //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .DriverList
        _m06 nt::ascii_view                            init_msg;          //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .InitMsg
        _m07 nt::ascii_view                            prog_msg;          //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .ProgMsg
        _m08 nt::ascii_view                            done_msg;          //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .DoneMsg
        _m09 void*                                     file_object;       //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .FileObject
        _m10 enum nt::device_usage_notification_type_t usage_type;        //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .UsageType
                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                              
        _m11 void*                                     storage_info;      //{ +0x0110    +0x0110    +0x0110    } | .StorageInfo
        _m12 uint8_t                                   use_storage_info;  //{ +0x0118    +0x0118    +0x0118    } | .UseStorageInfo
                                                                        
        SDK_MAGIC_PROPERTIES( "_DUMP_STACK_CONTEXT.$", 0x178, true, 0x78575292620f6d35 );                 
        SDK_FIXED_SIZE( dump_stack_context_t, 0x178 );                  
    };                                                                  
};
#include "magic/dump_stack_context_t.end.hpp"
SDK_VERIFY( struct nt::dump_stack_context_t, 0x178 );
