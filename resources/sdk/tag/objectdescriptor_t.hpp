#pragma once
#include <sdkgen/support_library.hpp>
#include "size_t.hpp"
#include "../nt/guid_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/objectdescriptor_t.start.hpp"
namespace tag
{
    // [struct tagOBJECTDESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct objectdescriptor_t                            
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                               
        _m00 uint32_t             cb_size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct nt::guid_t    clsid;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .clsid
        _m02 uint32_t             dw_draw_aspect;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwDrawAspect
        _m03 struct tag::size_t   sizel;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .sizel
        _m04 struct win::pointl_t pointl;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pointl
        _m05 uint32_t             dw_status;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwStatus
        _m06 uint32_t             dw_full_user_type_name;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwFullUserTypeName
        _m07 uint32_t             dw_src_of_copy;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwSrcOfCopy
                                                         
        SDK_MAGIC_PROPERTIES( "tagOBJECTDESCRIPTOR.$", 0x34, true, 0x3ac04115bad5de6a );                       
        SDK_FIXED_SIZE( objectdescriptor_t, 0x34 );                       
    };                                                   
};
#include "magic/objectdescriptor_t.end.hpp"
SDK_VERIFY( struct tag::objectdescriptor_t, 0x34 );
