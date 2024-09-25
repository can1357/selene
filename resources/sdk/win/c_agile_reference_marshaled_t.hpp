#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct objref_t; }

#include "magic/c_agile_reference_marshaled_t.start.hpp"
namespace win
{
    // [class CAgileReferenceMarshaled]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_agile_reference_marshaled_t                                       
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                    
        _m00 struct tag::objref_t const*    p_objref_table;                     //{ +0x0028    +0x0030    +0x0030    +0x0030    } | ._pObjrefTable
        _m01 struct tag::objref_t volatile* p_objref_normal;                    //{ +0x0030    +0x0038    +0x0038    +0x0038    } | ._pObjrefNormal
        _m02 const uint32_t                 channel_process_initialized_count;  //{ +0x0048    +0x0050    +0x0050    +0x0050    } | ._channelProcessInitializedCount
                                                                              
        // Windows 11                                                         
        //                                                                    
        _m03 const void*                    original_vtable;                    //{ +0x0060    } | ._originalVtable
                                                                              
        SDK_MAGIC_PROPERTIES( "CAgileReferenceMarshaled.$", 0x58, true, 0x74c2f76924c4dd4 );                                  
        SDK_DYNAMIC_SIZE( c_agile_reference_marshaled_t );                                  
    };                                                                        
};
#include "magic/c_agile_reference_marshaled_t.end.hpp"
