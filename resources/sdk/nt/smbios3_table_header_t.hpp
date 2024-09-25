#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/smbios3_table_header_t.start.hpp"
namespace nt
{
    // [struct _SMBIOS3_TABLE_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct smbios3_table_header_t                                
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                       
        _m00 sdk::array<uint8_t, 5> signature;                     //{ +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint8_t                checksum;                      //{ +0x0005    +0x0005    +0x0005    } | .Checksum
        _m02 uint8_t                length;                        //{ +0x0006    +0x0006    +0x0006    } | .Length
        _m03 uint8_t                major_version;                 //{ +0x0007    +0x0007    +0x0007    } | .MajorVersion
        _m04 uint8_t                minor_version;                 //{ +0x0008    +0x0008    +0x0008    } | .MinorVersion
        _m05 uint8_t                docrev;                        //{ +0x0009    +0x0009    +0x0009    } | .Docrev
        _m06 uint8_t                entry_point_revision;          //{ +0x000a    +0x000a    +0x000a    } | .EntryPointRevision
        _m07 uint32_t               structure_table_maximum_size;  //{ +0x000c    +0x000c    +0x000c    } | .StructureTableMaximumSize
        _m08 uint64_t               structure_table_address;       //{ +0x0010    +0x0010    +0x0010    } | .StructureTableAddress
                                                                 
        SDK_MAGIC_PROPERTIES( "_SMBIOS3_TABLE_HEADER.$", 0x18, true, 0xfc41fff08f56e64a );                             
        SDK_FIXED_SIZE( smbios3_table_header_t, 0x18 );                             
    };                                                           
};
#include "magic/smbios3_table_header_t.end.hpp"
SDK_VERIFY( struct nt::smbios3_table_header_t, 0x18 );
