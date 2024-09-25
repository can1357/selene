#pragma once
#include <sdkgen/support_library.hpp>
#include "../cm/big_data_t.hpp"
#include "../cm/key_node_t.hpp"
#include "../cm/key_index_t.hpp"
#include "../cm/key_value_t.hpp"
#include "../cm/key_security_t.hpp"

#include "magic/cell_data_t.start.hpp"
namespace nt
{
    // [struct _CELL_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cell_data_t                              
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 struct cm::key_node_t     key_node;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyNode
        _m01 struct cm::key_value_t    key_value;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyValue
        _m02 struct cm::key_security_t key_security;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeySecurity
        _m03 struct cm::key_index_t    key_index;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyIndex
        _m04 struct cm::big_data_t     value_data;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ValueData
        _m05 sdk::array<uint32_t, 1>   key_list;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyList
        _m06 sdk::array<wchar_t, 1>    key_string;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyString
                                                    
        SDK_MAGIC_PROPERTIES( "_CELL_DATA.$", 0x50, true, 0xb990014ac0f50337 );             
        SDK_FIXED_SIZE( cell_data_t, 0x50 );             
    };                                              
};
#include "magic/cell_data_t.end.hpp"
SDK_VERIFY( struct nt::cell_data_t, 0x50 );
