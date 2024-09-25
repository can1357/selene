#pragma once
#include <sdkgen/support_library.hpp>
#include "idldesc_t.hpp"
#include "typedesc_t.hpp"
#include "typekind_t.hpp"
#include "../nt/guid_t.hpp"

#include "magic/typeattr_t.start.hpp"
namespace tag
{
    // [struct tagTYPEATTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct typeattr_t                                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 struct nt::guid_t      guid;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guid
        _m01 uint32_t               lcid;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lcid
        _m02 uint32_t               dw_reserved;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwReserved
        _m03 int32_t                memid_constructor;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .memidConstructor
        _m04 int32_t                memid_destructor;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .memidDestructor
        _m05 wchar_t*               lpstr_schema;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lpstrSchema
        _m06 uint32_t               cb_size_instance;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .cbSizeInstance
        _m07 enum tag::typekind_t   typekind;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .typekind
        _m08 uint16_t               c_funcs;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cFuncs
        _m09 uint16_t               c_vars;             //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .cVars
        _m10 uint16_t               c_impl_types;       //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .cImplTypes
        _m11 uint16_t               cb_size_vft;        //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .cbSizeVft
        _m12 uint16_t               cb_alignment;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .cbAlignment
        _m13 uint16_t               w_type_flags;       //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .wTypeFlags
        _m14 uint16_t               w_major_ver_num;    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .wMajorVerNum
        _m15 uint16_t               w_minor_ver_num;    //{ +0x003e    +0x003e    +0x003e    +0x003e    } | .wMinorVerNum
        _m16 struct tag::typedesc_t tdesc_alias;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .tdescAlias
        _m17 struct tag::idldesc_t  idldesc_type;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .idldescType
                                                      
        SDK_MAGIC_PROPERTIES( "tagTYPEATTR.$", 0x60, true, 0xa6e3ca36bce81759 );                  
        SDK_FIXED_SIZE( typeattr_t, 0x60 );                  
    };                                                
};
#include "magic/typeattr_t.end.hpp"
SDK_VERIFY( struct tag::typeattr_t, 0x60 );
