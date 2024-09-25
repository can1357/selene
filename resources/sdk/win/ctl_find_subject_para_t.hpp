#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ctl_find_subject_para_t.start.hpp"
namespace win
{
    struct ctl_find_usage_para_t;

    // [struct _CTL_FIND_SUBJECT_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_find_subject_para_t                              
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                      
        _m00 uint32_t                           cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::ctl_find_usage_para_t* p_usage_para;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pUsagePara
        _m02 uint32_t                           dw_subject_type;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwSubjectType
        _m03 void*                              pv_subject;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvSubject
                                                                
        SDK_MAGIC_PROPERTIES( "_CTL_FIND_SUBJECT_PARA.$", 0x20, true, 0x6eb36cee83de00f8 );                
        SDK_FIXED_SIZE( ctl_find_subject_para_t, 0x20 );                
    };                                                          
};
#include "magic/ctl_find_subject_para_t.end.hpp"
SDK_VERIFY( struct win::ctl_find_subject_para_t, 0x20 );
