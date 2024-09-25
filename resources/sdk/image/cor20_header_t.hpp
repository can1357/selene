#pragma once
#include <sdkgen/support_library.hpp>
#include "data_directory_t.hpp"

#include "magic/cor20_header_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR20_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor20_header_t                                              
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                             
        _m00 uint32_t                       cb;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cb
        _m01 uint16_t                       major_runtime_version;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorRuntimeVersion
        _m02 uint16_t                       minor_runtime_version;       //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MinorRuntimeVersion
        _m03 struct image::data_directory_t meta_data;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MetaData
        _m04 uint32_t                       flags;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m05 uint32_t                       entry_point_token;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .EntryPointToken
        _m06 uint32_t                       entry_point_rva;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .EntryPointRVA
        _m07 struct image::data_directory_t resources;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Resources
        _m08 struct image::data_directory_t strong_name_signature;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StrongNameSignature
        _m09 struct image::data_directory_t code_manager_table;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CodeManagerTable
        _m10 struct image::data_directory_t v_table_fixups;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VTableFixups
        _m11 struct image::data_directory_t export_address_table_jumps;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ExportAddressTableJumps
        _m12 struct image::data_directory_t managed_native_header;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ManagedNativeHeader
                                                                       
        SDK_MAGIC_PROPERTIES( "IMAGE_COR20_HEADER.$", 0x48, true, 0x43fc5399740fd0ac );                           
        SDK_FIXED_SIZE( cor20_header_t, 0x48 );                           
    };                                                                 
};
#include "magic/cor20_header_t.end.hpp"
SDK_VERIFY( struct image::cor20_header_t, 0x48 );
