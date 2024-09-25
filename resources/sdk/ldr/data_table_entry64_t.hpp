#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/list_entry64_t.hpp"

#include "magic/data_table_entry64_t.start.hpp"
namespace ldr
{
    // [struct _LDR_DATA_TABLE_ENTRY64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct data_table_entry64_t                                      
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                           
        _m00 struct nt::list_entry64_t in_load_order_links;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InLoadOrderLinks
        _m01 struct nt::list_entry64_t in_memory_order_links;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InMemoryOrderLinks
        _m02 struct nt::list_entry64_t in_initialization_order_links;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InInitializationOrderLinks
        _m03 uint64_t                  dll_base;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DllBase
        _m04 uint64_t                  entry_point;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EntryPoint
        _m05 uint32_t                  size_of_image;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SizeOfImage
        _m06 nt::ascii_view            full_dll_name;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FullDllName
        _m07 nt::ascii_view            base_dll_name;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .BaseDllName
        _m08 uint32_t                  flags;                          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Flags
        _m09 uint16_t                  load_count;                     //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .LoadCount
        _m10 uint16_t                  tls_index;                      //{ +0x006e    +0x006e    +0x006e    +0x006e    } | .TlsIndex
        _m11 struct nt::list_entry64_t hash_links;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .HashLinks
        _m12 uint64_t                  section_pointer;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SectionPointer
        _m13 uint32_t                  check_sum;                      //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .CheckSum
        _m14 uint32_t                  time_date_stamp;                //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .TimeDateStamp
        _m15 uint64_t                  loaded_imports;                 //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .LoadedImports
                                                                     
        SDK_MAGIC_PROPERTIES( "_LDR_DATA_TABLE_ENTRY64.$", 0x88, true, 0x3734fd22592f3b32 );                              
        SDK_FIXED_SIZE( data_table_entry64_t, 0x88 );                              
    };                                                               
};
#include "magic/data_table_entry64_t.end.hpp"
SDK_VERIFY( struct ldr::data_table_entry64_t, 0x88 );
