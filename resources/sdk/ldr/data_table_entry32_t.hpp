#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/list_entry32_t.hpp"

#include "magic/data_table_entry32_t.start.hpp"
namespace ldr
{
    // [struct _LDR_DATA_TABLE_ENTRY32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct data_table_entry32_t                                      
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                           
        _m00 struct nt::list_entry32_t in_load_order_links;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InLoadOrderLinks
        _m01 struct nt::list_entry32_t in_memory_order_links;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InMemoryOrderLinks
        _m02 struct nt::list_entry32_t in_initialization_order_links;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InInitializationOrderLinks
        _m03 uint32_t                  dll_base;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DllBase
        _m04 uint32_t                  entry_point;                    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .EntryPoint
        _m05 uint32_t                  size_of_image;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SizeOfImage
        _m06 nt::ascii_view32          full_dll_name;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .FullDllName
        _m07 nt::ascii_view32          base_dll_name;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .BaseDllName
        _m08 uint32_t                  flags;                          //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Flags
        _m09 uint16_t                  load_count;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LoadCount
        _m10 uint16_t                  tls_index;                      //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .TlsIndex
        _m11 struct nt::list_entry32_t hash_links;                     //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .HashLinks
        _m12 uint32_t                  section_pointer;                //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SectionPointer
        _m13 uint32_t                  check_sum;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CheckSum
        _m14 uint32_t                  time_date_stamp;                //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TimeDateStamp
        _m15 uint32_t                  loaded_imports;                 //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .LoadedImports
                                                                     
        SDK_MAGIC_PROPERTIES( "_LDR_DATA_TABLE_ENTRY32.$", 0x48, true, 0xd88a896cdfea53d0 );                              
        SDK_FIXED_SIZE( data_table_entry32_t, 0x48 );                              
    };                                                               
};
#include "magic/data_table_entry32_t.end.hpp"
SDK_VERIFY( struct ldr::data_table_entry32_t, 0x48 );
