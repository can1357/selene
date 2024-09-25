#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"
#include "tree_node_t.hpp"
#include "flt_file_name_information_t.hpp"

#include "magic/name_cache_node_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;

    // [struct _NAME_CACHE_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_cache_node_t                                               
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                 
        _m00 union fltmgr::flt_type_t                   type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct fltmgr::flt_instance_t*             providing_instance;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProvidingInstance
        _m02 int64_t                                    creation_time;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CreationTime
        _m03 struct fltmgr::tree_node_t                 tree_link;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TreeLink
        _m04 struct fltmgr::flt_file_name_information_t name_info;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NameInfo
        _m05 int32_t                                    use_count;           //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .UseCount
                                                                           
        SDK_MAGIC_PROPERTIES( "_NAME_CACHE_NODE.$", 0xd0, true, 0xa82788a4a159a0d4 );                   
        SDK_FIXED_SIZE( name_cache_node_t, 0xd0 );                         
    };                                                                     
};
#include "magic/name_cache_node_t.end.hpp"
SDK_VERIFY( struct fltmgr::name_cache_node_t, 0xd0 );
