#pragma once
#include <sdkgen/support_library.hpp>
#include "key_reference_t.hpp"
#include "../nt/child_list_t.hpp"

#include "magic/key_node_t.start.hpp"
namespace cm
{
    // [struct _CM_KEY_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_node_t                                        
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                   
        _m00 uint16_t                   signature;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t                   flags;                 //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 int64_t                    last_write_time;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LastWriteTime
        _m03 uint8_t                    access_bits;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AccessBits
        _m04 uint2_t                    layer_semantics;       //{ +0x000d@0  +0x000d@0  +0x000d@0  +0x000d@0  } | .LayerSemantics
        _m05 uint1_t                    inherit_class;         //{ +0x000d@7  +0x000d@7  +0x000d@7  +0x000d@7  } | .InheritClass
        _m06 uint32_t                   parent;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parent
        _m07 sdk::array<uint32_t, 2>    sub_key_counts;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SubKeyCounts
        _m08 sdk::array<uint32_t, 2>    sub_key_lists;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SubKeyLists
        _m09 struct nt::child_list_t    value_list;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ValueList
        _m10 struct cm::key_reference_t child_hive_reference;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ChildHiveReference
        _m11 uint32_t                   security;              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Security
        _m12 uint32_t                   _class;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Class
        _m13 uint16_t                   max_name_len;          //{ +0x0034@0  +0x0034@0  +0x0034@0  +0x0034@0  } | .MaxNameLen
        _m14 uint4_t                    user_flags;            //{ +0x0034@16 +0x0034@16 +0x0034@16 +0x0034@16 } | .UserFlags
        _m15 uint4_t                    virt_control_flags;    //{ +0x0034@20 +0x0034@20 +0x0034@20 +0x0034@20 } | .VirtControlFlags
        _m16 uint8_t                    debug;                 //{ +0x0034@24 +0x0034@24 +0x0034@24 +0x0034@24 } | .Debug
        _m17 uint32_t                   max_class_len;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MaxClassLen
        _m18 uint32_t                   max_value_name_len;    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .MaxValueNameLen
        _m19 uint32_t                   max_value_data_len;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MaxValueDataLen
        _m20 uint32_t                   work_var;              //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .WorkVar
        _m21 uint16_t                   name_length;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NameLength
        _m22 uint16_t                   class_length;          //{ +0x004a    +0x004a    +0x004a    +0x004a    } | .ClassLength
        _m23 sdk::array<wchar_t, 1>     name;                  //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .Name
                                                             
        SDK_MAGIC_PROPERTIES( "_CM_KEY_NODE.$", 0x50, true, 0x8e102bd3391d6fc0 );                     
        SDK_FIXED_SIZE( key_node_t, 0x50 );                     
    };                                                       
};
#include "magic/key_node_t.end.hpp"
SDK_VERIFY( struct cm::key_node_t, 0x50 );
