#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_identifier_type_t.hpp"
#include "storage_association_type_t.hpp"
#include "storage_identifier_code_set_t.hpp"

#include "magic/storage_identifier_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_IDENTIFIER]
    // => WDK 10 (NV)
    //
    struct storage_identifier_t                                     
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 enum nt::storage_identifier_code_set_t code_set;         //{ +0x0000    } | .CodeSet
        _m01 enum nt::storage_identifier_type_t     type;             //{ +0x0004    } | .Type
        _m02 uint16_t                               identifier_size;  //{ +0x0008    } | .IdentifierSize
        _m03 uint16_t                               next_offset;      //{ +0x000a    } | .NextOffset
        _m04 enum nt::storage_association_type_t    association;      //{ +0x000c    } | .Association
        _m05 sdk::array<uint8_t, 1>                 identifier;       //{ +0x0010    } | .Identifier
                                                                    
        SDK_NONVOL_PROPERTIES( "_STORAGE_IDENTIFIER.$", 0x0, false, 0xb20c0686ee3fa466 );                
        SDK_FIXED_SIZE( storage_identifier_t, 0x14 );                
    };                                                              
};
#include "magic/storage_identifier_t.end.hpp"
SDK_VERIFY( struct nt::storage_identifier_t, 0x14 );
