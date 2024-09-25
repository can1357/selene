#pragma once
#include <sdkgen/support_library.hpp>
#include "atom_table_reference_t.hpp"

#include "magic/atom_table_entry_t.start.hpp"
namespace rtl
{
    struct atom_table_entry_t;

    // [struct _RTL_ATOM_TABLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct atom_table_entry_t                                
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                   
        _m00 struct rtl::atom_table_entry_t*    hash_link;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashLink
        _m01 uint16_t                           handle_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleIndex
        _m02 uint16_t                           atom;          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Atom
        _m03 struct rtl::atom_table_reference_t reference;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Reference
        _m04 uint8_t                            name_length;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NameLength
        _m05 sdk::array<wchar_t, 1>             name;          //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .Name
                                                             
        SDK_MAGIC_PROPERTIES( "_RTL_ATOM_TABLE_ENTRY.$", 0x30, true, 0x492df76a8398a41c );             
        SDK_FIXED_SIZE( atom_table_entry_t, 0x30 );             
    };                                                       
};
#include "magic/atom_table_entry_t.end.hpp"
SDK_VERIFY( struct rtl::atom_table_entry_t, 0x30 );
