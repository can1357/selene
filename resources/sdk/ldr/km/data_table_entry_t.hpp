#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct non_paged_debug_info_t; }

#include "magic/data_table_entry_t.start.hpp"
namespace ldr::km
{
    struct data_table_entry_t;

    // [struct _KLDR_DATA_TABLE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct data_table_entry_t                                              
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                 
        _m00 nt::list_entry_t                    in_load_order_links;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InLoadOrderLinks
        _m01 void*                               exception_table;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExceptionTable
        _m02 uint32_t                            exception_table_size;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ExceptionTableSize
        _m03 void*                               gp_value;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .GpValue
        _m04 struct nt::non_paged_debug_info_t*  non_paged_debug_info;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NonPagedDebugInfo
        _m05 void*                               dll_base;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DllBase
        _m06 void*                               entry_point;                //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .EntryPoint
        _m07 uint32_t                            size_of_image;              //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .SizeOfImage
        _m08 nt::unicode_view                    full_dll_name;              //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .FullDllName
        _m09 nt::unicode_view                    base_dll_name;              //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .BaseDllName
        _m10 uint32_t                            flags;                      //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .Flags
        _m11 uint16_t                            load_count;                 //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .LoadCount
        _m12 uint4_t                             signature_level;            //{ +0x006e@0  +0x006e@0  +0x006e@0  +0x006e@0  +0x006e@0  } | .SignatureLevel
        _m13 uint3_t                             signature_type;             //{ +0x006e@0  +0x006e@4  +0x006e@4  +0x006e@4  +0x006e@4  } | .SignatureType
        _m14 uint16_t                            entire_field;               //{ +0x006e    +0x006e    +0x006e    +0x006e    +0x006e    } | .EntireField
        _m15 void*                               section_pointer;            //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .SectionPointer
        _m16 uint32_t                            check_sum;                  //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .CheckSum
        _m17 uint32_t                            coverage_section_size;      //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .CoverageSectionSize
        _m18 void*                               coverage_section;           //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .CoverageSection
        _m19 void*                               loaded_imports;             //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .LoadedImports
        _m20 uint32_t                            size_of_image_not_rounded;  //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .SizeOfImageNotRounded
        _m21 uint32_t                            time_date_stamp;            //{ +0x009c    +0x009c    +0x009c    +0x009c    +0x009c    } | .TimeDateStamp
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m22 uint2_t                             frozen;                     //{ +0x006e@7  } | .Frozen
        _m23 uint1_t                             hot_patch;                  //{ +0x006e@9  } | .HotPatch
        _m24 struct ldr::km::data_table_entry_t* nt_data_table_entry;        //{ +0x0090    } | .NtDataTableEntry
                                                                           
        SDK_NONVOL_PROPERTIES( "_KLDR_DATA_TABLE_ENTRY.$", 0xa0, true, 0xd701c3261605f08b );                          
        SDK_FIXED_SIZE( data_table_entry_t, 0xa0 );                          
    };                                                                     
};
#include "magic/data_table_entry_t.end.hpp"
SDK_VERIFY( struct ldr::km::data_table_entry_t, 0xa0 );
